# 🔄 Swapping Two Arrays Using Pointers in C

## 📌 Project Overview

This C program demonstrates how to **swap two arrays using pointers**.
The program takes two integer arrays as input, exchanges their elements using pointer-based functions, and displays the arrays before and after swapping.

This project helps in understanding:

* Arrays and pointers relationship
* Passing arrays to functions
* Pointer-based memory access
* Function modularization in C

---

## 🛠️ Technologies Used

* Programming Language: **C**
* Compiler: GCC / Turbo C / Online C Compiler

---

## 📂 Program Structure

```
Array-Swap-Using-Pointers/
│
├── swap_arrays.c
└── README.md
```

---

## ⚙️ Functions Used

### 1. `read_array()`

```c
void read_array(int n, int *arr);
```

**Purpose:**

* Reads elements of an array using pointer notation.
* Stores user input into the array.

---

### 2. `swap_arrays()`

```c
void swap_arrays(int n, int *arr1, int *arr2);
```

**Purpose:**

* Swaps corresponding elements of two arrays.
* Uses a temporary variable for swapping.

Example:

Before:

```
Array 1: 1 2 3
Array 2: 4 5 6
```

After:

```
Array 1: 4 5 6
Array 2: 1 2 3
```

---

### 3. `display_arrays()`

```c
void display_arrays(int n, int *arr1, int *arr2);
```

**Purpose:**

* Displays both arrays before and after swapping.

---

## ▶️ How to Run

### Compile the program:

```bash
gcc swap_arrays.c -o swap
```

### Execute:

```bash
./swap
```

---

## 💻 Sample Output

```
Enter number of elements: 5

Enter elements of array 1:
Enter element at index 0: 10
Enter element at index 1: 20
Enter element at index 2: 30
Enter element at index 3: 40
Enter element at index 4: 50

Enter elements of array 2:
Enter element at index 0: 1
Enter element at index 1: 2
Enter element at index 2: 3
Enter element at index 3: 4
Enter element at index 4: 5

Before swapping:

Array 1:
10 20 30 40 50

Array 2:
1 2 3 4 5

After swapping:

Array 1:
1 2 3 4 5

Array 2:
10 20 30 40 50
```

---

## 📚 Concepts Demonstrated

✅ Arrays in C
✅ Pointer arithmetic
✅ Passing arrays to functions
✅ Function prototypes
✅ Dynamic size arrays (VLA)
✅ Swapping using temporary variables

---

## 🎯 Learning Outcome

After completing this program, you will understand how arrays are passed to functions in C and how pointers allow direct modification of array elements.

---

## 👨‍💻 Author

**Karthik T**
