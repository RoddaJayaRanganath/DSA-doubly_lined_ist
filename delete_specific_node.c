void delete_specific_node(struct node **head,struct node **tail,int index,int size)
{
    if(*head == NULL)
    {
        printf("we don't have doubly_linked_list !");
        return;
    }
    // if we have single node;
    if(index==0 && *head == *tail)
    {
        free(*head);
        *head = NULL;
        *tail = NULL;
        return;
    }
    // if node is actully last node;
    if(index == size-1)
    {
        struct node *temp = *tail;
        *tail = temp->prev;
        temp->prev->next = NULL;
        temp->prev = NULL;
        free(temp);
        temp = NULL;
        return;
    }
    else // if we have multiple nodes;
    {
        struct node *temp = *head;
        int i = 0;
        while(temp != NULL)
        {
            if(i==index)
            {
                struct node *dummi = temp;
                temp->prev->next = temp->next;
                temp->next->prev = temp->prev;
                free(dummi);
                dummi = NULL;
                return;
            }
            temp = temp->next;
            i++;
        }
    }
}