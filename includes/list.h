#ifndef SPISOK_LIST_H
#define SPISOK_LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

typedef struct Element Element;
struct Element {
    int number;
    Element *next;
};

typedef struct List List;
struct List {
    Element *first;
    Element *last;
    void (*append)(List *list, int number);
    void (*insert)(List *list, size_t index, int number);
    void (*set)(List *list, size_t index, int number);
    void (*fuse)(List *src, List *dst);
    void (*clear)(List *list);
    size_t (*size)(List *list);
    size_t (*index)(List *list, int number);
    int (*get)(List *list, size_t index);
    int (*getFirst)(List *list);
    int (*getLast)(List *list);
    void (*del)(List *list, size_t index);
    int (*exists)(List *list, int number);
    int (*empty)(List *list);
    void (*show)(List *list);
    void (*showClean)(List *list);
    List *(*clone)(List *list);
};

#endif
