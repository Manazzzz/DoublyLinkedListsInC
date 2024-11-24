void mid()
{
    if(start==NULL || start->next==NULL)
    {
        printf("Not possible to find middle");
        return;
    }
    else
    {
        struct dnode* slow = start;
        struct dnode* fast = start;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        printf("Middle element is : %d\n",slow->data);
    }
}
