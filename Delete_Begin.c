void del_begin()
{
    if(start==NULL)
    {
        printf("Nothing to delete...");
        return;
    }
    else
    {
        struct dnode* temp = start;
        start=temp->next;
        start->prev=NULL;
        free(temp);
        
    }
}
