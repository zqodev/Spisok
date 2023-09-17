#ifndef SPISOK_SIZING_H
#define SPISOK_SIZING_H

#include "list.h"

size_t size(List *list);
size_t index(List *list, int number);
int get(List *list, size_t index);
int getFirst(List *list);
int getLast(List *list);

#endif
