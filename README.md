# *C - Sorting Algorithms*

### Table of contents

- [Description](#description)
- [Files](#files)
- [Big O Files](#big-o-files)
- [Structure](#structure)
- [Credits](#credits)

## Description

This is our project submission to *Holberton Coding School's* module of *Sorting Algorithms*. In this module we learned and worked four different *sorting algorithms*, what is the *Big O* notation, how to evaluate the *time complexity* of an algorithm, how to select the best sorting algorithm for a given input and what is a *stable sorting algorithm*.

## Files

- `README.md` - File that contains project description.
- `sort.h` - Header file containing libraries, function prototypes and structure(s).
- `0-bubble_sort.c` - Function that sorts an array of integers in ascending order using the *Bubble sort* algorithm.
- `1-insertion_sort_list.c` -Function that sorts a doubly linked list of integers in ascending order using the *Insertion sort* algorithm.
- `2-selection_sort.c` - Function that sorts an array of integers in ascending order using the *Selection sort* algorithm.
- `3-quick_sort.c` - Function that sorts an array of integers in ascending order using the *Quick sort* algorithm.

##

For this project you are given the following *print_array* and *print_list* functions:

- `print_array.c` - Function that prints an array of integers.
- `print_list.c` - Function that prints a list of integers.

##

### Big O Files

- `0-O`
- `1-O`
- `2-O`
- `3-O`

## Structure

For this project we are also given the following structure for doubly linked list:

```
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
```

## Credits

- *[Jonathan Pérez](https://github.com/prodjohnper)*
- *[Luis Santiago](https://github.com/Lusanco)*
