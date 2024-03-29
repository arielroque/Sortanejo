![sortanejo logo](https://user-images.githubusercontent.com/17733053/75837581-06e65700-5da4-11ea-9ea2-35d527758fac.png)

# Sortanejo

Sortings algorithms described and implemented from scratch in Python

## :pushpin: Sortings Algorithms

- [Bubble Sort](https://github.com/arielroque/Sortanejo/blob/master/bubble_sort/README.md)

## :books: Basics Concepts 

### Classification
 - #### Internal Sorting
     The file to be sorted fits all in the primary memory and the registers can be immediately accessed. **Ex:** Bubble Sort, Insertion Sort and Quicksort
  
 - #### External Sorting
     The file to be sorted dont fits all in the primary memory and the registers can be accessed by blocks or sequentially. In this case, the data needs to be stored in a hard disk, floppy disk, or any other storage device. **Ex:** Mergesort and Tape Sort
 

### Stable vs Unstable

   - #### Stable 
       The algorithm preserve the order of the elements with same keys when is executing the sorting.  **Ex:** Bubble Sort, Insertion Sort and Selection Sort
       
   - #### Unstable  
     The algorithm not necessarily  preserve the order of the elements with same keys when is executing the sorting. therefore, two equals elements can appear with different order. **Ex:** Merge Sort and Quick Sort
     
     ![stable vs unstable](https://user-images.githubusercontent.com/17733053/198004748-2606e89a-6efa-4734-aa9a-3c13ef74596e.png)
     
     Font: https://www.quora.com/What-is-the-difference-between-a-stable-and-unstable-sort



## :rocket: Contributing

Did you like the repository and want to contribute? Let's go, pull requests are always welcome :tada:

### Steps 

1.  Fork the repository

2.  Create a branch locally

3.  Choose a sorting algorithm that is not already in the repository (check the section [sorting algorithms](#pushpin-sortings-algorithms) , [pull requests](https://github.com/arielroque/Sortanejo/tree/master/bubble_sort) and [issues](https://github.com/arielroque/Sortanejo/issues))

4.  Copy the TEMPLATE folder and replace it with the name of the desired algorithm (use snake case. ex: bubble_sort)

5.  Update the README file in the template folder you copied with information about the sorting algorithm chosen. Here you will add the name of the algorithm, a short description, how it works and its complexity. If you have any doubts, just take a look at [Bubble Sort](https://github.com/arielroque/Sortanejo/tree/master/bubble_sort)

6.  Replace the ALGORITHM_NAME.py file from the folder copied with the name of the chosen algorithm (use snake case. ex: bubble_sort.py) and add implementation in code using the Python language

7. Open a pull request 





