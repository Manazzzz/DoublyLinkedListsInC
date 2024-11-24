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

struct dnode* concatenate(struct dnode* l1,struct dnode* l2)
{
    if(!l1)
    {
        return l2;
    }
    if(!l2)
    {
        return l1;
    }
    else
    {
        struct dnode* temp = l1;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=l2;
        l2->prev=temp;
        return l1;
    }
}

void print(struct dnode* start)
{
    struct dnode* temp =start;
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
    l1->next = getNode(2);
    l1->next->next= getNode(3);
    
    struct dnode* l2 = getNode(4);
    l2->next = getNode(5);
    l2->next->next = getNode(6);
    
    struct dnode* c = concatenate(l1,l2);
    printf("List is : \n");
    print(c);
    
}
