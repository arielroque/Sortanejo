
# Selection Sort
  A fast and easy sort algorithm for small arrays.

## Operation

  - Compares the value of each array position with all subsequent ones and switches places if the value occupy the wrong position.
  - Repeat the process until all values are sorted.

![selection sort example](https://miro.medium.com/max/1400/1*5WXRN62ddiM_Gcf4GDdCZg.gif)
Font: [https://www.miro.medium.com/](https://www.miro.medium.com/)

## Pros x Cons

### Pros
 - It is a simple algorithm to implement compared to others.
 - By not using an auxiliary vector to perform the sort, it takes up less memory.
 - It is one of the fastest in sorting small vector sizes.

 ### Cons
 - It is slow for larger vector sizes.
 - It is not stable
 - It always does (n² - n)/2 comparisons, regardless of whether the array is sorted or not.

## Complexity
| Sorting Algorithm |Best Time| Average Time | Worst Time
|----------|:-------------:|------:|------:|
| Select Sort|  O(n²) | O(n²)|O(n²)
