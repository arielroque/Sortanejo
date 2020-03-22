//Selection Sort
//(C) 2020 Sortanejo

#include <bits/stdc++.h>
using namespace std;

void selectionSort(int array[], int len)
{
    for (int i = 0; i < len; i++)
    {
        int targetPosition = i;

        //Look for the smallest values on the right

        for (int j = i + 1; j < len; j++)
        {
            if (array[j] < array[targetPosition])
            {
                targetPosition = j;
            }
        }
        swap(array[i], array[targetPosition]);
    }
}

int main()
{
    int array[] = {10, 30, 20, 1};
    int len = sizeof(array) / sizeof(array[0]);

    selectionSort(array, len);

    for (int i = 0; i < len; i++)
    {
        cout << array[i] << " ";
    }
}
