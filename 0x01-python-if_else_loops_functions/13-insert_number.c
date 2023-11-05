#include <stdlib.h>
#include "lists.h"

listint_t *insert_node(listint_t **head, int number)
{
    listint_t *new_node, *current, *previous;

    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
        return NULL;

    new_node->n = number;
    new_node->next = NULL;

    if (*head == NULL || (*head)->n >= number) {
        new_node->next = *head;
        *head = new_node;
        return new_node;
    }

    current = *head;
    while (current != NULL && current->n < number) {
        previous = current;
        current = current->next;
    }

    previous->next = new_node;
    new_node->next = current;

    return new_node;
}
