#include "unorderedArrayListType.h" 

/********************************************************************************************************************
* AUTHOR : Ngoc Dang Tran;
* STUDENT ID : 1197865;
* ASSIGNMENT A19: Array Lists
* CLASS : CS1B;
* SECTION : MW: 9:30am - 11:50am;
* DUE DATE : 04/19/2021;
*********************************************************************************************************************
* Purpose: Purpose of this lab is to familiarize with Array-based Lists (Unordered Lists)
*********************************************************************************************************************
* Algorithm: Defines array-based int lists as an ADT
*            Derive the class unorderedArrayListType from the abstract class arrayListType
*            The class unorderedArrayListType would arrange list elements in no particular order, 
*               that is, these lists are unsorted (not need to check if the element is repeat)
*********************************************************************************************************************
* Sample:
* Enter 8 integers: 35 62 18 26 45 72 55 60
* intList: 35 62 18 26 45 72 55 60
* Enter the number to be deleted: 62
* After removing 62 intList: 35 18 26 45 72 55 60
* Enter the search item: 72
* 72 found in intList.
*********************************************************************************************************************/

int main() 
{ 
unorderedArrayListType intList(25); 
int number; 
    system("clear");
    cout << "Enter 8 integers: "; 

    for (int count = 0; count < 8; count++) 
    { 
        cin >> number; 
        intList.insertEnd(number); 
    } 

    cout << endl; 
    cout << "intList: "; 

    intList.print();    //Call print method
    cout << endl; 

    cout << "Enter the number to be deleted: "; 
    cin >> number; 
    cout << endl; 

    intList.remove(number);     //Call remove method
    cout << "After removing " << number << " intList: "; 
    intList.print(); 
    cout << endl; 

    cout << "Enter the search item: "; 
    cin >> number; 
    cout << endl; 

    if (intList.seqSearch(number) != -1)        //Call search method
        cout << number << " found in intList." << endl; 
    else 
        cout << number << " is not in intList." << endl; 

return 0; 
}