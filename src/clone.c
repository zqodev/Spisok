#include "../includes/insert.h"
#include "../includes/init.h"

List *clone(List *list)
{
    if (list == NULL) {
        exit(EXIT_FAILURE);
    }

    List *dstList = init();
    Element *element = list->first;

    while (element != NULL) {
        dstList->append(dstList, element->number);
        element = element->next;
    }

    return dstList;
}