#include <stdlib.h>
#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;
#include "program2.h"

int main(int argv, char **argc) {

    //ogArray is the array with index 0 being the array size
    int arraySize;
    vector<int> ogArray;

    //asks user array size and puts it in the first index of ogArray
    cout << "Enter the array size: \n";
    cin >> arraySize;
    ogArray.push_back(arraySize);

    //makes the array to sort given the arraySize
    int testArr[arraySize];

    //asks user to fill in the elements at ascending index of array
    for(int i = 1; i <= arraySize; i++)
    {
        int element;
        cout << "Enter the value at index " << i << ": ";
        cin >> element;
        ogArray.push_back(element);
    }

    cout << "Would you like to add more elements to the array? These won't be sorted. Array only stores 11 elements total btw. (Enter 1 if yes, any key if not) > " ;
    int yesorno;
    cin >> yesorno;
    if(yesorno == 1)
        for(int i = arraySize; i <= MAX_ARRAY_SIZE; i++)
        {
            int element;

            if(i == MAX_ARRAY_SIZE)
                break;
            cout << "Enter the value at index " << i+1 << ": ";
            cin >> element;
            ogArray.push_back(element);
            cout << "1 to continue adding elements, 0 to exit. " << MAX_ARRAY_SIZE - i << " element(s) ready to be allocated. > ";
            cin >> yesorno;
            if(yesorno == 0)
                break;
        }

    //testArr (the array to be sorted) getting initialized
    for(int i = 0; i < arraySize; i++)
        testArr[i] = ogArray[i+1];

    //prints the original array, first element being the array Size
    cout << "Entered array: ";
    for(auto it = ogArray.begin(); it != ogArray.end(); it++)
        cout << *it << " ";
    cout << endl;

    //prints the testArr, a.k.a the array-to-be-sorted
    cout << "Array to be sorted: ";
    for(int i = 0; i < arraySize; i++)
        cout << testArr[i] << " ";
    cout << endl;

    findMax(testArr, ogArray[0]);
    CountingSort(testArr, ogArray[0]);

}
