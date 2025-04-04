void insert_at_last(struct node **head,struct node **tail,int deta)
{
    // node creation;
    struct node *newnode = malloc(sizeof(struct node*));
    newnode->data = deta;
    newnode->next = NULL;
    newnode->prev = NULL;
    // assigning first node as tail and head;
    if(*head == NULL)
    {
        *head=newnode;
        *tail=newnode;
    }
    else // with tail node adding the nodes at last;
    {
        (*tail)->next = newnode;
        newnode->prev = *tail;
        *tail = newnode;
    }
}