#include <stdio.h>
#include <stdlib.h>

/* Definition for singly-linked list structure */
typedef struct listint_s {
    int n;
    struct listint_s *next;
} listint_t;

/**
 * check_cycle - Check if a singly linked list has a cycle
 * @list: Pointer to the head of the linked list
 *
 * Return: 0 if there is no cycle, 1 if there is a cycle
 */
int check_cycle(listint_t *list) {
    listint_t *slow = list, *fast = list;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        /* If there is a cycle, the pointers will eventually meet */
        if (slow == fast) {
            return 1; /* Cycle detected */
        }
    }

    return 0; /* No cycle found */
}

/* Example usage: Creating a linked list and checking for a cycle */
int main(void) {
    listint_t *head, *second, *third;

    /* Creating a linked list with a cycle */
    head = malloc(sizeof(listint_t));
    second = malloc(sizeof(listint_t));
    third = malloc(sizeof(listint_t));

    head->n = 1;
    head->next = second;

    second->n = 2;
    second->next = third;

    third->n = 3;
    third->next = head; /* Creating a cycle */

    /* Checking for a cycle */
    if (check_cycle(head)) {
        printf("Cycle detected!\n");
    } else {
        printf("No cycle found.\n");
    }

    /* Freeing allocated memory */
    free(head);
    free(second);
    free(third);

    return 0;
}

