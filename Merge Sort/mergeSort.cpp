//Merge Sort
//(C) 2020 Sortanejo

#include <bits/stdc++.h>
using namespace std;

void merge(int array[], int left, int middle, int right)
{
    int i, j, k;
    int n1 = (middle - left) + 1;
    int n2 = right - middle;

    // Create auxiliaries arrays

    int leftArray[n1], rightArray[n2];

    for (int i = 0; i < n1; i++)
    {
        leftArray[i] = array[left + i];
    }
    for (int j = 0; j < n2; j++)
    {
        rightArray[j] = array[middle + 1 + j];
    }

    i = 0;
    j = 0;
    k = left;

    //Merge auxiliaries arrays to real array

    while (i < n1 && j < n2)
    {
        if (leftArray[i] <= rightArray[j])
        {
            array[k] = leftArray[i];
            i++;
        }
        else
        {
            array[k] = rightArray[j];
            j++;
        }
        k++;
    }

    // Add remaining elements leave in the left array and right array

    while (i < n1)
    {
        array[k] = leftArray[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        array[k] = rightArray[j];
        j++;
        k++;
    }
}

void mergeSort(int array[], int left, int right)
{
    if (left < right)
    {
        // Same as (left + right)/2 but avoid overflow with larger values
        int middle = left + (right - left) / 2;

        mergeSort(array, left, middle);
        mergeSort(array, middle + 1, right);
        merge(array, left, middle, right);
    }
}

int main()
{
    int array[] = {10, 30, 20, 1};
    int len = sizeof(array) / sizeof(array[0]);
    mergeSort(array, 0, len - 1);

    for (int i = 0; i < len; i++)
    {
        cout << array[i] << " ";
    }
}
