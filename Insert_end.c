void insert_end()
{
    int n;
    printf("Value to be inserted : ");
    scanf("%d",&n);
    struct dnode* new_node=getNode(n);
    
    if(new_node==NULL)
    {
        return;
    }
    else if(start==NULL)
    {
        start=new_node;
    }
    else if(start->next==NULL)
    {
        new_node->prev=start;
        start->next=new_node;
        
    }
    else
    {
        struct dnode* temp = start;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        new_node->prev=temp;
        temp->next=new_node;
        
        
    }
}
