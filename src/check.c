#include "../includes/list.h"

int exists(List *list, int number)
{
    if (list == NULL) {
        exit(EXIT_FAILURE);
    }

    Element *element = list->first;

    while (element != NULL) {
        if (element->number == number) {
            return 1;
        }

        element = element->next;
    }

    return 0;
}

int empty(List *list)
{
    if (list == NULL) {
        exit(EXIT_FAILURE);
    }

    Element *element = list->first;

    if (element == NULL || element->number == 0) {
        return 1;
    }

    return 0;
}