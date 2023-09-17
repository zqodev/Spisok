#include "../includes/list.h"

bool exists(List *list, int number)
{
    assert(list == NULL);

    Element *element = list->first;

    while (element != NULL) {
        if (element->number == number) {
            return true;
        }

        element = element->next;
    }

    return false;
}

bool empty(List *list)
{
    assert(list == NULL);

    Element *element = list->first;

    if (element == NULL || element->number == 0) {
        return true;
    }

    return false;
}