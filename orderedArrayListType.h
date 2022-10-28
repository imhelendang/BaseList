#ifndef ORDEREDARRAYLISTTYPE_H_
#define ORDEREDARRAYLISTTYPE_H_
#include <iostream>
#include <iomanip>
#include <string>
#include "arrayListType.h"
class orderedArrayListType: public arrayListType
{
public:
    void insertAt(int location, int insertItem);
    void insertEnd(int insertItem);
    void replaceAt(int location, int repItem);
    int seqSearch(int searchItem) const;
    void insert(int insertItem);
    void remove(int removeItem);
    orderedArrayListType(int size = 100);
    //Constructor
};
#endif