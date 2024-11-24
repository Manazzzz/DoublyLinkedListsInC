void del_end()
{
    if(start==NULL)
    {
        printf("Nothing to delete");
        return;
    }
    else if(start->next==NULL)
    {
        struct dnode* temp = start;
        start=temp->next;
        start->prev=NULL;
        free(temp);
    }
    else
    {
        struct dnode* temp = start;
        struct dnode* last = NULL;
        while(temp->next!=NULL)
        {
            last=temp;
            temp=temp->next;
        }
        last->next=NULL;
        temp->prev=NULL;
        free(temp);
    }
}
