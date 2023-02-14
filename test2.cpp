#include <stdlib.h>
#include <iostream>
#include <cstdlib>
using namespace std;
#include "program2.h"


int main(int argv, char **argc) {


    int numOfValues = 10;
    int testArr[MAX_ARRAY_SIZE];

    testArr[0] = 9;
    testArr[1] = 5;
    testArr[2] = 7;
    testArr[3] = 6;
    testArr[4] = 4;
    testArr[5] = 15;
    testArr[6] = 3;
    testArr[7] = 6;
    testArr[8] = 4;
    testArr[9] = 11;
    testArr[10] = 9;


    cout << "array before counting sort: \n";
    for(int i = 0; i <= 10; i++)
        cout << testArr[i] << " ";

    cout << endl;

    cout << "array after counting sort: \n";
    CountingSort(testArr, 11, 100);




}
