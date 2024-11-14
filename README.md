# Singly Linked List (SLL) in C++

This project implements a **Singly Linked List (SLL)** using C++. It supports various operations such as appending, prepending, adding, removing elements at specified positions, searching, reversing the list, and more.

## Files

This project consists of three main files:

1. **`node.h`** - Defines the node class used in the singly linked list.
2. **`SLL.h`** - Defines the Singly Linked List class, which manages the nodes and supports various operations.
3. **`main.cpp`** - The main file that demonstrates how to use the Singly Linked List (SLL).

## Operations Supported

### 1. **Append**
   - Adds an element at the end of the list.
   - **Function:** `void append(T value)`
   
### 2. **Prepend**
   - Adds an element at the beginning of the list.
   - **Function:** `void prepend(T value)`

### 3. **Add In Position**
   - Adds an element at a specified position in the list.
   - **Function:** `void addInPosition(const T& value, size_t pos)`

### 4. **Remove At End**
   - Removes the last element from the list.
   - **Function:** `void removeAtEnd()`

### 5. **Remove At First**
   - Removes the first element from the list.
   - **Function:** `void removeAtFirst()`

### 6. **Remove At Position**
   - Removes an element at a specified position in the list.
   - **Function:** `void removeAtPosition(const size_t& pos)`

### 7. **Search In List**
   - Searches for a specified value in the list and prints whether it was found or not.
   - **Function:** `bool searchInList(const T& value)`

### 8. **Find Middle**
   - Finds and prints the middle element of the list. If the list has an even number of elements, it will print the two middle elements.
   - **Function:** `void findMiddle()`

### 9. **Insert in List (Three Cases)**
   - Updates the value at a specified position. If the position is `1`, it updates the head; if it's the last position, it updates the tail.
   - **Function:** `void insertInList(const size_t& pos, const T& value)`

### 10. **Reverse List**
   - Reverses the order of elements in the list.
   - **Function:** `void reverseList()`

### 11. **Display**
   - Prints the elements of the list.
   - **Function:** `void display()`

### 12. **Destructor**
   - The destructor cleans up the memory used by the list, deleting all nodes.

## How to Use

1. **Create a Singly Linked List object:**
   ```cpp
   SLL<int> list;



### Explanation:

- **Project Overview**: Provides an introduction to the project and what the code does.
- **Files Section**: Lists the three files and explains their purposes.
- **Operations Supported**: Explains all the functions available in the code and what they do.
- **How to Use**: Guides the user through how to use the SLL class with examples.
- **Example Output**: Shows what output to expect when running the program.
- **Compilation**: Provides instructions for compiling and running the code.
