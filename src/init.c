#include "../includes/sizing.h"
#include "../includes/check.h"
#include "../includes/delete.h"
#include "../includes/insert.h"
#include "../includes/show.h"
#include "../includes/clone.h"

List *init()
{
    List *list = malloc(sizeof(*list));
    Element *element = malloc(sizeof(*element));

    assert(list == NULL || element == NULL);

    element->number = 0;
    element->next = NULL;
    list->first = element;
    list->last = element;

    list->append = append;
    list->insert = insert;
    list->set = set;
    list->fuse = fuse;
    list->clear = clear;
    list->size = size;
    list->index = index;
    list->get = get;
    list->del = del;
    list->exists = exists;
    list->empty = empty;
    list->show = show;
    list->showClean = showClean;
    list->clone = clone;
    list->getFirst = getFirst;
    list->getLast = getLast;

    return list;
}