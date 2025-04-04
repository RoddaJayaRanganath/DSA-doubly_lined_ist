void insert_at_first(struct node **head,struct node **tail,int deta)
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
    else // with head node adding the nodes at first;
    {
        (*head)->prev = newnode;
        newnode->next = *head;
        *head = newnode;
    }
}