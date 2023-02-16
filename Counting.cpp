#include "program2.h"
#include <iostream>
using namespace std;

#define my_sizeof(type) ((char *)(&type+1)-(char*)(&type))

void displayArray(int *array, int size) {
    for(int i = 1; i<=size; i++)
        cout << array[i] << " ";
    cout << endl;
}

int returnDistinct(int testArray[], int arrSize)
{
    int numOfDistinct;
    for (int i = 0; i < arrSize; i++)
    {
        int j;
        for (j=0; j<i; j++)
            if (testArray[i] == testArray[j])
                break;
        if (i == j)
            numOfDistinct++;
    }
    return numOfDistinct;
}

int findMax(int arr[], int arrSize)
{
    int max = arr[0];
    for (int i = 1; i < arrSize ; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}


void CountingSort(int arr[], int arrSize)
{

    int arrayOutput[arrSize + 1];
    int max = findMax(arr, arrSize);
    int countSize = max+1;
    int arrayCount[countSize];

    //initializing all values in arrayCount to 0
    for(int i = 0; i <= countSize; i++)
        arrayCount[i] = 0;

    cout << "After initializing values in the count array to 0: " << endl;
    displayArray(arrayCount, countSize);

    //storing the count of each element
    for(int i = 0; i < arrSize; i++)
        arrayCount[arr[i]]++;

    cout << "After storing count of values in count array: " << endl;
    displayArray(arrayCount, countSize);

    //storing the cumulative count
    for(int i = 1; i <= max; i++)
        arrayCount[i] += arrayCount[i-1];

    cout << "After storing cumulative count: " << endl;
    displayArray(arrayCount, countSize);

    for(int i = arrSize; i >= 0; i--)
    {
        arrayOutput[arrayCount[arr[i]]] = arr[i];
        arrayCount[arr[i]]--;
    }

    cout << "Output array after getting from count: " << endl;
    displayArray(arrayOutput, arrSize);

}