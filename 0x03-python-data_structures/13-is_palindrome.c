#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * is_palindrome - checks if a singly linked list is a palindrome
 * @head: pointer to the head of the linked list
 * Return: 0 if not a palindrome, 1 if it is a palindrome
 */
int is_palindrome(listint_t **head)
{
    listint_t *slow_ptr, *fast_ptr, *prev_of_slow_ptr, *second_half, *mid_node;
    listint_t *current, *prev, *next;
    int is_palindrome = 1;

    slow_ptr = fast_ptr = *head;
    prev_of_slow_ptr = *head;
    mid_node = NULL; // To handle odd length

    if (*head != NULL && (*head)->next != NULL)
    {
        // Initialize pointers to find the middle of the list
        while (fast_ptr != NULL && fast_ptr->next != NULL)
        {
            fast_ptr = fast_ptr->next->next;

            // Prev_of_slow_ptr will point to the last node of the first half
            prev_of_slow_ptr = slow_ptr;
            slow_ptr = slow_ptr->next;
        }

        // Odd number of nodes, move slow_ptr to the right
        if (fast_ptr != NULL)
        {
            mid_node = slow_ptr;
            slow_ptr = slow_ptr->next;
        }

        // Reverse the second half
        second_half = slow_ptr;
        prev_of_slow_ptr->next = NULL;
        current = second_half;
        prev = NULL;
        while (current != NULL)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        second_half = prev;

        // Compare the first half and the reversed second half
        current = *head;
        while (second_half != NULL)
        {
            if (current->n != second_half->n)
            {
                is_palindrome = 0;
                break;
            }
            current = current->next;
            second_half = second_half->next;
        }

        // Restore the linked list to its original state
        prev = NULL;
        current = prev_of_slow_ptr;
        current->next = mid_node;
        mid_node->next = second_half;
        current = mid_node;
        while (current != NULL)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
    }

    return is_palindrome;
}
