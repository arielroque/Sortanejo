//Bubble Sort
//(C) 2020 Sortanejo

#include <bits/stdc++.h>
using namespace std;

// Naive implementation of bubbleSort

void bubbleSort(int array[], int len)
{
    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (array[i] > array[j])
            {
                int copy = array[j];
                array[j] = array[i];
                array[i] = copy;
            }
        }
    }
}

//With this simple otimization the algorithm can be O(n) in
// a good case like all elements are sorted already

void bubbleSortOptimized(int array[], int len)
{
    bool swapped = false;

    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (array[i] > array[j])
            {
                int copy = array[j];
                array[j] = array[i];
                array[i] = copy;
                swapped = true;
            }
        }

        if (swapped == false)
        {
            break;
        }
    }
}

int main()
{
    int array[] = {10, 30, 20, 1};
    int len = sizeof(array) / sizeof(array[0]);
    bubbleSortOptimized(array, len);

    for (int i = 0; i < len; i++)
    {
        cout << array[i] << " ";
    }
}
