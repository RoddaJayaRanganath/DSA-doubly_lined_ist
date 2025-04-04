void insert_at_specific(struct node **head,struct node **tail,int index,int deta,int size)
{
    struct node *newnode = malloc(sizeof(struct node*));
    newnode->data = deta;
    newnode->next = NULL;
    newnode->prev = NULL;
    if(*head==NULL)
    {
        printf("no existing linked list !");
        return;
    }
    // if index is zero , making newnode as head;
    if(index==0)
    {
        (*head)->prev = newnode;
        newnode->next = *head;
        *head = newnode;
        return;
    }
    // if index is size of doubly_linked_list , inserting it as tail previous;
    if(index == size-1)
    {
        newnode->prev = (*tail)->prev;
        (*tail)->prev->next = newnode;
        newnode->next = *tail;
        (*tail)->prev = newnode;
        return;
    }
    else
    {   // if index is not zero or size of doubly_linked_list;
        // inserting at that perticulat index;
        int i = 0;
        struct node *temp = *head;
        while(temp!=NULL)
        {
            if(i==index)
            {
                newnode->prev = temp->prev;
                temp->prev->next = newnode;
                newnode->next = temp;
                temp->prev = newnode;
                return;
            }
            i++;
            temp=temp->next;
        }
    }
}