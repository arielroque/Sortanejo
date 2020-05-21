//Quick Sort
//(C) 2020 Sortanejo

#include <bits/stdc++.h>
using namespace std;

//Rearrange elements in array [left..right] so that all elements in array
//[left..right] that are less than or equal to the pivot are on the left and that all
//elements in array [left..right] are on the right of the pivot

int partition(int array[], int left, int right)
{
    int pivot = array[(left + right) / 2];

    while (left < right)
    {

        //find the left element that go to right
        while (array[left] < pivot)
        {
            left++;
        }

        //find the right element that go to left

        while (array[right] > pivot)
        {
            right--;
        }

        //swap elements

        if (left <= right)
        {
            swap(array[left], array[right]);
            left++;
            right--;
        }
    }
    return left;
}

int quickSort(int array[], int left, int right)
{
    int index = partition(array, left, right);

    // sort the left half

    if (left < index - 1)
    {
        quickSort(array, left, index - 1);
    }

    // sort the right half

    if (index < right)
    {
        quickSort(array, index, right);
    }
}

int main()
{
    int array[] = {10, 5, 30, 20, 1};
    int len = sizeof(array) / sizeof(array[0]);

    quickSort(array, 0, len - 1);

    for (int i = 0; i < len; i++)
    {
        cout << array[i] << " ";
    }
}
