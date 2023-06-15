#include "lists.h"
/**
* delete_dnodeint_at_index - Deletes the node
* at a given index in a doubly linked list.
* @head: Pointer to the pointer of the head of the linked list.
* @index: Index of the node that should be deleted.
* Return: 1 if it succeeded, -1 if it failed.
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current, *temp;
unsigned int count = 0;
if (head == NULL || *head == NULL)
return (-1);
current = *head;
if (index == 0)
{*head = current->next;
if (current->next != NULL)
current->next->prev = NULL;
free(current);
return (1); }
while (current != NULL)
{
if (count == index)
{
temp = current;
current->prev->next = current->next;
if (current->next != NULL)
current->next->prev = current->prev;
free(temp);
return (1);
}
count++;
current = current->next;
}
return (-1);
}

