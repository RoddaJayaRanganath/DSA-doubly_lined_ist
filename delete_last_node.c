void delete_last_node(struct node **head,struct node **tail)
{
    if(*head == NULL)
    {
        printf("no doubly_linked_list we have !");
        return;
    }
    else
    {
            // deletion of last node, if we have only one node;
            if((*tail)->prev==NULL)
            {
                free(*tail);
                *tail = NULL;
                *head = NULL;
                return;
            }
            // deletion of the last node if we have multiple nodes;
            struct node *temp = *tail;
            *tail = (*tail)->prev;
            (*tail)->next = NULL;
            free(temp);
            temp = NULL;
    }
}