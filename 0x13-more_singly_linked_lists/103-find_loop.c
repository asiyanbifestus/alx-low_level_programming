#include "lists.h"

/**
 * find_listint_loop - finds the loop contained in a listint_t list
 * @head: A pointer to the adress of the head of the list
 * Return: If there is no loop, NULL
 * Otherwise, the address of the node where the loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
listint_t *tortoise, *hare;
if (head == NULL || head->next == NULL)
return (NULL);
tortoise = head->next;
hare = (head->next)->next;
while (hare)
{
if (tortoise == hare)
{
tortoise = head;
while (tortoise != hare)
{
tortoise = tortoise->next;
hare = hare->next;
}
return (tortoise);
}
tortoise = tortoise->next;
hare = (hare->next)->next;
}
return (NULL);
}
