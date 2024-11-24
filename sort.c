void sort()
{
    if(start==NULL || start->next==NULL)
    {
        printf("Not possible");
        return;
    }
    else
    {
        struct dnode* temp1=start;
        struct dnode* temp2 = NULL;
        int x;
        while(temp1!=NULL)
        {
            temp2=temp1->next;
            while(temp2!=NULL)
            {
                if(temp1->data>temp2->data)
                {
                    x=temp1->data;
                    temp1->data=temp2->data;
                    temp2->data=x;
                }
                temp2=temp2->next;
            }
            temp1=temp1->next;
        }
        
    }
}
