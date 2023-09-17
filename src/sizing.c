#include "../includes/list.h"

size_t size(List *list)
{
    if (list == NULL) {
        exit(EXIT_FAILURE);
    }

    size_t counter = 0;
    Element *element = list->first;

    while (element != NULL) {
        counter++;
        element = element->next;
    }

    return counter;
}

size_t index(List *list, int number)
{
    if (list == NULL) {
        exit(EXIT_FAILURE);
    }

    size_t counter = 0;
    Element *element = list->first;

    while (element != NULL) {
        if (number == element->number) {
            return counter;
        }

        element = element->next;
        counter++;
    }

    return -1;
}

int get(List *list, size_t index)
{
    if (list == NULL) {
        exit(EXIT_FAILURE);
    }

    size_t counter = 0;
    Element *element = list->first;

    while (element != NULL) {
        if (index == counter) {
            return element->number;
        }

        element = element->next;
        counter++;
    }

    return -1;
}