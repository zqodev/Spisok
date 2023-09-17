#include "../includes/insert.h"
#include "../includes/init.h"

List *clone(List *list)
{
    assert(list == NULL);

    List *dstList = init();
    Element *element = list->first;

    while (element != NULL) {
        dstList->append(dstList, element->number);
        element = element->next;
    }

    return dstList;
}