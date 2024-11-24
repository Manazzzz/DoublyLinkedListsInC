#include <stdio.h>
#include <stdlib.h>

struct dnode
{
    int data;
    struct dnode* next;
    struct dnode* prev;
};



struct dnode* getNode(int n)
{
    struct dnode* p = (struct dnode*)malloc(sizeof(struct dnode));
    
    if (p == NULL)
    {
        printf("Memory not allocated\n");
        return NULL;
    }
    p->data = n;
    p->next = NULL;
    p->prev = NULL;
    return p;
}

struct dnode* merge(struct dnode* l1,struct dnode* l2)
{
    if(!l1)
    {
        return l2;
    }
    if(!l2)
    {
        return l1;
    }
    struct dnode* head = NULL;
    struct dnode* tail = NULL;
    
        
        if(l1->data<l2->data)
        {
            head=l1;
            
            l1=l1->next;
        }
        else
        {
            head=l2;
            
            l2=l2->next;
        }
        tail=head;
    
        while(l1 && l2)
        {
            if(l1->data<l2->data)
            {
                tail->next=l1;
                l1->prev = tail;
                l1=l1->next;
            }   
            else
            {
                tail->next=l2;
                l2->prev = tail;
                l2=l2->next;
            }
            tail=tail->next;
        }
    
    
    if(l1)
    {
        tail->next=l1;
    }
    else
    {
        tail->next=l2;
    }
    return head;
    
    
}


void print(struct dnode* start)
{
    struct dnode* temp = start;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

void main()
{
    struct dnode* l1 = getNode(1);
    l1->next = getNode(3);
    l1->next->next = getNode(5);
    
    struct dnode* l2 = getNode(2);
    l2->next = getNode(4);
    l2->next->next = getNode(6);
    
    struct dnode* m = merge(l1,l2);
    printf("List is\n");
    print(m);
}
