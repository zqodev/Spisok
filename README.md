# Spisok
📜 Spisok allows you to create dynamic lists in C.

## Here are how to init a list:

```c
#include "../includes/init.h"

int main(void)
{
  List *list = init();
}
```

## And here is how to interact with it:

```c
  list->append(list, value);
  list->insert(list, index, number);
  list->fuse(srcList, dstList);
  list->del(list, index);
  list->clear(list);
  list->clone(list);
  list->exists(list, value);
  list->empty(list);
  list->show(list);
  list->showClean(list);
  list->size(list);
  list->index(list, value);
  list->get(list, index);
```

### Example:

```c
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
```
