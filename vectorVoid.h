
#ifndef ЛАБЫ_ОП_VECTORVOID_H
#define ЛАБЫ_ОП_VECTORVOID_H
#include <limits.h>

typedef struct vectorVoid {
     void *data;
     size_t size;
     size_t capacity;
     size_t baseTypeSize;
} vectorVoid;

vectorVoid createVectorV(size_t n, size_t baseTypeSize);

void reserveV(vectorVoid *v, size_t newCapacity);

void clearV(vectorVoid *v);

void shrinkToFitV(vectorVoid *v);

void deleteVectorV(vectorVoid *v);

bool isEmptyV(vectorVoid *v);

bool isFullV(vectorVoid *v);

void getVectorValueV(vectorVoid *v, size_t index, void *destination);

void setVectorValueV(vectorVoid *v, size_t index, void *source);

void pushBackV(vectorVoid *v, void *source);

void popBackV(vectorVoid *v);

#endif //ЛАБЫ_ОП_VECTORVOID_H
