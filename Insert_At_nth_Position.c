
void insert_nth()
{
    struct dnode* new_node;
    int n,pos;
    printf("Value to be inserted : ");
    scanf("%d",&n);
    
    printf("Enter position : ");
    scanf("%d",&pos);
    new_node=getNode(n);
    
    
    if(new_node==NULL)
    {
        return;
    }
    else if(pos==0)
    {
        start->prev=new_node;
        new_node->next=start;
        start=new_node;
    }
    else
    {
        struct dnode* temp = start;
        for(int i=0;i<(pos-1);i++)
        {
            temp=temp->next;
        }
        new_node->prev=temp;
        new_node->next=temp->next;
        temp->next->prev=new_node;
        temp->next=new_node;
        
    }
}
