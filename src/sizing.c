#include "../includes/list.h"

size_t size(List *list)
{
    assert(list == NULL);

    size_t counter = 0;
    Element *element = list->first;

    while (element->number != list->getLast(list)) {
        counter++;
        element = element->next;
    }

    return counter;
}

size_t index(List *list, int number)
{
    assert(list == NULL);

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
    assert(list == NULL);

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

int getFirst(List *list) {
    return list->first->number;
}

int getLast(List *list) {
    return list->last->number;
}