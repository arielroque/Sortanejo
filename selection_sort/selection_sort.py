
"""
Selection Sort

Time Complexity -> O(N^2)
Space Complexity -> O(1)
"""

def selection_sort(arr):
  for i in range(len(arr)):
    minor = i

    for j in range(i+1,len(arr)):
      if(arr[minor] > arr[j]):
        minor = j

    if(arr[minor] < arr[i]):
      aux = arr[i]
      arr[i] = arr[minor]
      arr[minor] = aux

arr = [14,5,11,3,14,4,0,8,18,15]

selection_sort(arr)

print(arr);
