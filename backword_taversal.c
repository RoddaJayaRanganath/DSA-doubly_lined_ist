void backword_traversal(struct node **tail,struct node **head)
{
    if(*head==NULL || *tail==NULL)
    {
        printf("no doubly_linked_list we have !");
        return;
    }
    else
    {
        //backword_traversal;
        struct node *temp = *tail;
        while(temp!=NULL)
        {
            printf("%d->",temp->data);
            temp = temp->prev;
        }
        printf("NULL");
    }
}