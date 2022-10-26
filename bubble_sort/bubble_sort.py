
"""
Bubble Sort

Time Complexity -> O(N^2)
Space Complexity -> O(1)
"""

def bubble_sort(arr):
    for i in range(len(arr)):
        for j in range(i+1,len(arr)):
            if arr[i] > arr[j]:
                swap(arr,i,j)

def swap(arr,i,j):
    arr[i],arr[j] = arr[j],arr[i]

arr = [10,1,4,15,30,2]

bubble_sort(arr)

print(arr)