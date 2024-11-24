void insert_begin()
{
    struct dnode* new_node;
    int n;

    printf("Enter value to be inserted: ");
    scanf("%d", &n);

   
    new_node = getNode(n);
    if (new_node == NULL) 
    {
        return;
    }

    if (start == NULL)  
    {
        start = new_node;
    }
    else  
    {
        new_node->next = start;
        start->prev = new_node;
        start = new_node;
    }
}
