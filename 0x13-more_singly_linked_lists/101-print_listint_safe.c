#include "lists.h"

/**
 * print_listint_safe - prints a linked list, safely
 * @head: list of type listint_t to print
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
    size_t num = 0;
    const listint_t *current = head, *checker = head;

    while (current && checker && checker->next)
    {
        num++;
        printf("[%p] %d\n", (void *)current, current->n);
        current = current->next;
        checker = checker->next->next;

        if (current == checker)
        {
            printf("-> [%p] %d\n", (void *)current, current->n);
            break;
        }
    }

    return (num);
}

