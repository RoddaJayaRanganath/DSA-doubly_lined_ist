void delete_linked_list(struct node **head,struct node **tail)
{
    if(*head == NULL)
    {
        printf("no problem, linked list is already deleted !");
        return;
    }
    else
    {   // deleting every node;
        struct node *temp = *head;
        while(temp!=NULL)
        {
            *head = (*head)->next;
            temp->prev = NULL;
            free(temp);
            temp = *head;
        }
        *tail = NULL;
        printf("we deleted linked list !");
    }
}