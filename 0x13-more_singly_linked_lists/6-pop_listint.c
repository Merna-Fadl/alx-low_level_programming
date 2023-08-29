#include "lists.h"

/**
 * pop_listint -  function that deletes the head node
 * @head: pointer node
 * Return: he head node’s data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);
	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (num);
}
