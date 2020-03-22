//Insertion Sort
//(C) 2020 Sortanejo

#include <bits/stdc++.h>
using namespace std;

void insertionSort(int array[], int len)
{
    for (int i = 1; i < len; i++)
    {
        int target = array[i];
        int j = i - 1;

        //Arrange the array when found unsorted number
        while (j >= 0 && array[j] > target)
        {
            array[j + 1] = array[j];
            j = j - 1;
        }

        //IMPORTANT STEP: put the target(less number found in the interation when log in while repetion)
        //in the array after ordering
        array[j + 1] = target;
    }
}

int main()
{
    int array[] = {10, 30, 20, 1};
    int len = sizeof(array) / sizeof(array[0]);
    insertionSort(array, len);

    for (int i = 0; i < len; i++)
    {
        cout << array[i] << " ";
    }
}