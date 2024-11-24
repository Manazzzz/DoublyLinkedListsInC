void del_nth()
{
    int pos;
    printf("Position to be deleted : ");
    scanf("%d",&pos);
    if(start==NULL)
    {
        printf("Nothing to be deleted");
        return;
    }
    else if(pos==1)
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
        for(int i=1;i<pos;i++)
        {
            last=temp;
            temp=temp->next;
        }
        last->next=temp->next;
        temp->next->prev=last;
        free(temp);
    }
}
