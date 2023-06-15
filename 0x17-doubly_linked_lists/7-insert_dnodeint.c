#include "lists.h"
/**
* insert_dnodeint_at_index - Inserts a new
* node at a given position in a doubly linked list.
* @h: Pointer to the pointer of the head of the linked list.
* @idx: Index where the new node should be added.
* @n: Value to be stored in the new node.
* Return: The address of the new node, or NULL if it failed.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *temp;
unsigned int count = 0;
if (h == NULL)
return (NULL);
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->prev = NULL;
new_node->next = NULL;
if (*h == NULL)
{
if (idx == 0)
{*h = new_node;
return (new_node); }
else
{free(new_node);
return (NULL); }}
if (idx == 0)
{new_node->next = *h;
(*h)->prev = new_node;
*h = new_node;
return (new_node); }
temp = *h;
while (temp != NULL)
{
if (count == idx - 1)
{new_node->prev = temp;
new_node->next = temp->next;
if (temp->next != NULL)
temp->next->prev = new_node;
temp->next = new_node;
return (new_node); }
count++;
temp = temp->next; }
free(new_node);
return (NULL); }
