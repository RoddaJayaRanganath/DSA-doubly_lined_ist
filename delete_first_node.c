void delete_first_node(struct node **head,struct node **tail)
{
    if(*head == NULL)
    {
        printf("no doubly_linked_list we have !");
        return;
    }
    else
    {
        // if we have multiple nodes;
        if((*head)->next != NULL)
        {
            struct node *temp = *head;
            *head = (*head)->next;
            (*head)->prev = NULL;
            free(temp);
            temp = NULL;
            return;
        }
        // if we have only one node;
        struct node *temp = *head;
        free(temp);
        *head = NULL;
        *tail = NULL;
    }
}
}