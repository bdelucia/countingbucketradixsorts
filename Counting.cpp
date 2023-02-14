#include "program2.h"
#include <iostream>
using namespace std;

void CountingSort(int arr[], int numOfElements, int numOfValues)
{
    // arrayB[0:n]. n from the notes is numOfElements here
    int arrayB[numOfElements];
    // arrayC[0:k]. k from the notes is numOfValues here
    int arrayC[numOfValues];

    // initializing all values in arrayC to 0
    for(int i = 0; i <= numOfValues; i++)
        arrayC[i] = 0;

    //pg 8 of counting sort pseudocode notes
    for(int i = 0; i < numOfElements; i++)
        arrayC[arr[i]] = arrayC[arr[i]] + 1;

    for(int i = 1; i < numOfValues; i++)
        arrayC[i] = arrayC[i] + arrayC[i-1];

    //pg 9. array B should be the sorted array after this loop runs

    for(int j = numOfElements; j >= 0; j--)
    {
        arrayB[arrayC[arr[j]]] = arr[j];
        arrayC[arr[j]] = arrayC[arr[j]] - 1;
    }

    //testing
    cout << "arrayC: \n";
    for(int i = 1; i <= 10; i++)
        cout << arrayC[i] << " ";

    cout << endl;

    cout << "arrayB: \n";
    for(int i = 1; i <= 11; i++)
        cout << arrayB[i] << " ";

}