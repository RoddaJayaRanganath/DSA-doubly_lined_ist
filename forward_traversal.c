void forward_traversal(struct node**head)
{
    if(*head == NULL)
    {
        printf("no doubly_linked_list we have !");
        return;
    }
    else
    {
        // forward_traversal;
        struct node *temp = *head;
        while(temp!=NULL)
        {
            printf("%d->",temp->data);
            temp=temp->next;
        }
        printf("NULL");
    }
}