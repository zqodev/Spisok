#ifndef SPISOK_INSERT_H
#define SPISOK_INSERT_H

#include "../includes/list.h"

void append(List *list, int number);
void insert(List *list, size_t index, int number);
void set(List *list, size_t index, int number);
void fuse(List *src, List *dst);

#endif
