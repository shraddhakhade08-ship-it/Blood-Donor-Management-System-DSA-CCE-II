# Blood-Donor-Management-System-DSA-CCE-II
Blood Donor Management System using Singly Linked List in C++

## CCE-II Programming Assignment – Unit 3

## 1. Problem Statement

Develop a menu-driven Blood Donor Management System using C++ and a Singly Linked List. The system should store and manage blood donor information, including donor ID, name, age, gender, blood group, contact number, and city.

The program should allow users to add, display, search, update, and delete donor records. It should also provide a feature to search for donors by blood group.

## 2. Objectives

* To understand the implementation of a Singly Linked List in C++.
* To perform insertion, deletion, searching, and traversal operations.
* To maintain donor information dynamically using linked-list nodes.
* To search for donors based on donor ID or blood group.
* To develop a simple menu-driven record management application.

## 3. Data Structure Used

**Singly Linked List**

Each node represents one blood donor and contains the donor's information and a pointer to the next node.

### Node Structure

Each donor node contains:

* Donor ID
* Name
* Age
* Gender
* Blood group
* Contact number
* City
* Pointer to the next donor node

### Linked List Representation

```text
HEAD
  |
  v
+-------------------+      +-------------------+
| Donor 1           | ---> | Donor 2           | --->
| ID, Name, Age     |      | ID, Name, Age     |
| Blood Group, City |      | Blood Group, City |
+-------------------+      +-------------------+
                                      |
                                      v
                                     NULL
```

## 4. Features

1. Add a new donor record.
2. Display all donor records.
3. Search for a donor using donor ID.
4. Update existing donor information.
5. Delete a donor record.
6. Search donors by blood group.
7. Display a menu until the user chooses to exit.

## 5. Algorithm

### Main Algorithm

1. Start the program.
2. Create a `BloodDonorManagement` object.
3. Display the menu.
4. Accept the user's choice.
5. Perform the selected operation:

   * Add donor
   * Display all donors
   * Search donor
   * Update donor
   * Delete donor
   * Search by blood group
   * Exit
6. Repeat the menu until the user selects Exit.
7. Stop the program.

### Algorithm for Adding a Donor

1. Create a new node dynamically.
2. Accept the donor's details.
3. Set the new node's `next` pointer to `NULL`.
4. If the list is empty, make the new node the head.
5. Otherwise, traverse to the last node.
6. Link the last node to the new node.
7. Display a success message.

### Algorithm for Searching a Donor

1. Accept the donor ID.
2. Start traversal from the head node.
3. Compare each node's donor ID with the entered ID.
4. If a match is found, display the donor details.
5. Otherwise, continue until `NULL`.
6. If no match is found, display a not-found message.

### Algorithm for Deleting a Donor

1. Accept the donor ID to delete.
2. Traverse the list while maintaining current and previous pointers.
3. If the donor is not found, display a message.
4. If the first node matches, update the head pointer.
5. Otherwise, connect the previous node to the next node.
6. Delete the selected node.
7. Display a success message.

## 6. Program Explanation

### Node Structure

The `Donor` structure stores donor details and the pointer `next`, which connects one donor node to the next.

### Class: `BloodDonorManagement`

The class maintains the head pointer and implements all operations on the linked list.

### `addDonor()`

Creates a new node and inserts it at the end of the list.

### `displayDonors()`

Traverses the list from head to `NULL` and displays every donor record.

### `searchDonor()`

Searches the linked list for a donor using the donor ID.

### `updateDonor()`

Finds the selected donor and modifies the stored information.

### `deleteDonor()`

Removes the selected donor node and updates the links correctly.

### `searchByBloodGroup()`

Traverses the list and displays all donors whose blood group matches the entered group.

### `main()`

Displays the menu and calls the appropriate member function according to the user's choice.

## 7. Time Complexity

Let `n` be the number of donor records.

| Operation             | Time Complexity |
| --------------------- | --------------- |
| Add donor at end      | O(n)            |
| Display all donors    | O(n)            |
| Search by donor ID    | O(n)            |
| Update donor          | O(n)            |
| Delete donor          | O(n)            |
| Search by blood group | O(n)            |

The insertion operation takes O(n) because the implementation traverses the list to find the last node.

## 8. Advantages

* Records can be added dynamically.
* The list does not require a fixed array size.
* Insertion and deletion can be performed by changing pointers.
* Donors can be searched by ID or blood group.
* It demonstrates fundamental linked-list operations.

## 9. Limitations

* Records are stored in memory and are not saved permanently after the program ends.
* Searching requires sequential traversal.
* The program does not verify whether a donor is medically eligible to donate blood.
* It is an educational project and is not a real blood donation or emergency matching service.

## 10. Technologies Used

* Programming Language: C++
* Data Structure: Singly Linked List
* Header Files: `<iostream>` and `<string>`
* Memory Management: Dynamic allocation using `new` and deallocation using `delete`

## 11. Conclusion

The Blood Donor Management System demonstrates how a Singly Linked List can be used to store and manage donor records dynamically. It implements insertion, traversal, searching, updating, and deletion in a menu-driven C++ application. This project helps develop an understanding of linked-list operations and dynamic memory allocation.
