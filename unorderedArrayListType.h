#ifndef UNORDEREDARRAYLISTTYPE_H_
#define UNORDEREDARRAYLISTTYPE_H_
#include <iostream>
#include <iomanip>
#include <string>
#include "arrayListType.h"
using namespace std;

class unorderedArrayListType: public arrayListType
{
public:
    void insertAt(int location, int insertItem);
    void insertEnd(int insertItem);
    void replaceAt(int location, int repItem);
    int seqSearch(int searchItem) const;
    void remove(int removeItem);
    unorderedArrayListType(int size = 100);
    //Constructor
};

#endif