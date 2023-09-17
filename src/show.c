#include "../includes/sizing.h"

void show(List *list)
{
    Element *element = list->first;

    printf("[");
    while (element != NULL) {
        if (element->next != NULL) {
            printf("%d, ", element->number);
        } else {
            printf("%d", element->number);
        }

        element = element->next;
    }

    printf("]\n");
}

void showClean(List *list)
{
    size_t counter = 0;
    Element *element = list->first;

    printf("[\n");

    while (element != NULL) {
        printf("   Index: %zu | Value: %d\n", counter, element->number);

        element = element->next;
        counter++;
    }

    printf("]\n");
}