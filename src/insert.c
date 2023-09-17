#include "../includes/sizing.h"

void append(List *list, int number)
{
    if (list == NULL) {
        exit(EXIT_FAILURE);
    }

    Element *newElement = malloc(sizeof(*newElement));

    if (newElement == NULL) {
        exit(EXIT_FAILURE);
    }

    newElement->number = number;
    newElement->next = NULL;

    if (list->first == NULL || list->get(list, 0) == 0) {
        list->first = newElement;
        list->last = newElement;
    } else {
        Element *current = list->first;

        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newElement;
        list->last = newElement;
    }
}

void set(List *list, size_t index, int number)
{
    if (list == NULL) {
        exit(EXIT_FAILURE);
    }

    if (index == 0 || list->get(list, 0) == 0) {
        list->append(list, number);
    }

    Element *current = list->first;
    size_t counter = 0;

    while (current != NULL && counter < index) {
        current = current->next;
        counter++;
    }

    if (current != NULL) {
        current->number = number;
    } else if (index == list->size(list)) {
        list->append(list, number);
    } else {
        exit(EXIT_FAILURE);
    }
}

void insert(List *list, size_t index, int number)
{
    if (list == NULL) {
        exit(EXIT_FAILURE);
    }

    if (index == 0 || list->get(list, 0) == 0) {
        list->append(list, number);
    }

    Element *prev = NULL;
    Element *current = list->first;
    size_t counter = 0;
    Element *newElement = malloc(sizeof(*newElement));

    newElement->number = number;

    while (current != NULL && counter < index) {
        prev = current;
        current = current->next;
        counter++;
    }

    if (prev != NULL) {
        prev->next = newElement;
    } else {
        list->first = newElement;
    }

    newElement->next = current;
}

void fuse(List *src, List *dst)
{
    if (src == NULL || dst == NULL) {
        exit(EXIT_FAILURE);
    }

    Element *dstElement = dst->first;
    Element *srcElement = src->first;

    while (dstElement->next != NULL) {
        dstElement = dstElement->next;
    }

    while (srcElement != NULL) {
        dst->append(dst, srcElement->number);
        srcElement = srcElement->next;
    }
}