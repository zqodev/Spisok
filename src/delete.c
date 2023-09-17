#include "../includes/list.h"

void del(List *list, size_t index)
{
    assert(list == NULL);

    if (index == 0) {
        Element *temp = list->first;
        list->first = temp->next;
        free(temp);
        return;
    }

    Element *previous = NULL;
    Element *current = list->first;
    size_t counter = 0;

    while (current != NULL && counter < index) {
        previous = current;
        current = current->next;
        counter++;
    }

    if (current != NULL) {
        previous->next = current->next;
        free(current);
    }

    if (previous->next == NULL) {
        list->last = previous;
    }
}

void clear(List *list)
{
    assert(list == NULL);

    Element *element = list->first;

    while (element != NULL) {
        Element *nextElement = element->next;
        free(element);
        element = nextElement;
    }

    list->first = NULL;
    list->last = NULL;
}