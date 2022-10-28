#include "orderedArrayListType.h"
#include "arrayListType.h"
void orderedArrayListType::insert(int insertItem)
{
    if (length == 0)    //list is empty
        list[length++] = insertItem;    //insert insertItem
    //and increment length

    else if (length == maxSize)
        cout << "Cannot insert in a full list." << endl;

    else
    {
    //Find the location in the list where to insert
    //insertItem.

int loc;
bool found = false;

    for (loc = 0; loc < length; loc++)
    {
    if (list[loc] == insertItem)
    {
        found = true;
        break;
    }   //end if
    } //End for

    for (int i = length; i = loc; i--)
        list[i] = list[i - 1];      //move the elements down

    list[loc] = insertItem;     //insert insertItem
    length++;                   //increment the length
    
    }   //End else
} //end insert

