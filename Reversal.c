void rev()
{
    if(start==NULL||start->next==NULL)
    {
        printf("Reversal not possible");
        return;
    }
    else
    {
        struct dnode* curr = start;
        struct dnode* last = NULL;
        struct dnode* forward = NULL;
        
        while(curr!=NULL)
        {
            forward=curr->next;
            curr->next=last;
            last=curr;
            curr=forward;
        }
        start=last;
    }   
}
