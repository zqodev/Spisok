#include "../includes/init.h"

int main(void)
{
    List *list = init();

    list->append(list, 12);
    list->append(list, 15);
    list->append(list, 27);
    list->append(list, 348);

    list->show(list);

    free(list);
}