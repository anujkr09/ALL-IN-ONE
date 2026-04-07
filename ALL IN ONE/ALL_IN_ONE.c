#include <stdio.h>
#include <stdlib.h>
void Array();
void Insertion();
void Deletion();
void Search();
void Sort();
void MatrixMultiply();
// linked list
void LinkedList();
void SinglyLinkedList();
//
void InsertionAtBeginingOfSinglyLinkedList();
void InsertionAtEndOfSinglyLinkedList();
void DeletionFirstNodeSinglyLinkedList();

void DoublyLinkedList();
void CircularLinkedList();
void CircularSinglyLinkedList();
void CircularDoublyLinkedList();
// STACK
void Stack();
void push();
void pop();
void display();
// QUEUE
void Queue();
void Enqueue();
void Dequeue();
void SimpleQueue();
void CircularQueue();
void DoubleEndedQueue();
// Searching
void Searching();
void linearSearch();
void binarySearch();
// Sorting
void Sorting();
void bubbleSort();
void insertionSort();
void selectionSort();
void quickSort();
void mergeSort();
void heapSort();
void redixSort();
// TREE
void Tree();
// GRAPH
void Graph();
void Exit();

void Menu()
{
    int num;
    printf("************************************************\n");
    printf("**               MAIN PROJECT                 **\n");
    printf("**            1.    ARRAY                     **\n");
    printf("**            2.  Linked List                 **\n");
    printf("**            3.    Stack                     **\n");
    printf("**            4.    Queue                     **\n");
    printf("**            5.  Searching                   **\n");
    printf("**            6.   Sorting                    **\n");
    printf("**            7.    Tree                      **\n");
    printf("**            8.    Graph                     **\n");
    printf("**            9.    Exit                      **\n");
    printf("************************************************\n");
    printf("Enter your choice :");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        Array();
        break;
    case 2:
        LinkedList();
        break;
    case 3:
        Stack();
        break;
    case 4:
        Queue();
        break;
    case 5:
        Searching();
        break;
    case 6:
        Sorting();
        break;
    case 7:
        Tree();
        break;
    case 8:
        Graph();
        break;
    case 9:
        Exit(0);
        break;
    default:
        printf("Invailid number :");
        break;
    }
}

void Array()
{
    int num;
    printf("************************************************\n");
    printf("**              Array Operation               **\n");
    printf("**            1.  Insertion                   **\n");
    printf("**            2.  Deletion                    **\n");
    printf("**            3.    Search                    **\n");
    printf("**            4.    Sort                      **\n");
    printf("**            5.  MatrixMultiply              **\n");
    printf("**            6.    Exit                      **\n");
    printf("************************************************\n");
    printf("Enter your choice : ");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        Insertion();
        break;
    case 2:
        Deletion();
        break;
    case 3:
        Search();
        break;
    case 4:
        Sort();
        break;
    case 5:
        MatrixMultiply();
        break;
    case 6:
        Exit(0);
        Menu();
        break;
    default:
        printf("Invailid number :");
        break;
    }
}
// Function
void Insertion()
{

    printf("Insertion Function called\n");
    //
    int a[10] = {1, 2, 4, 5, 6}; // Initial array
    int n = 5;                   // Number of elements in the array
    int k = 2;                   // Position to insert the new element (0-based indexing)
    int newelement;

    printf("Old Array : ");
    for (int j = 0; j < n; j++)
    {
        printf("%d ", a[j]); // Added space for better readability
    }
    printf("\n");

    printf("Enter new element want to insert : "); // New element to insert
    scanf("%d", &newelement);

    // Check if the array is full
    if (n >= 10)
    {
        printf("Array is full. Cannot insert new element.\n");
        return;
    }

    // Shift elements to the right
    for (int j = n; j > k; j--)
    {
        a[j] = a[j - 1]; // Correct shifting
    }

    // Insert new element
    a[k] = newelement;
    n++; // Increase element count

    // Print the updated array
    printf("New Array : ");
    for (int j = 0; j < n; j++)
    {
        printf("%d ", a[j]); // Added space for better readability
    }
    printf("\n"); // Add a newline at the end

    Array();
}

void Deletion()
{
    printf("Deletion Function called\n");
    //
    int a[10] = {1, 2, 4, 5, 6}; // Initial array
    int n = 5;                   // Number of elements in the array
    int elementToDelete;         // Element to be deleted
    int i, j, found = 0;         // Flag to check if element is found

    // Print the old array
    printf("Old Array : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    // Input the element to delete
    printf("Enter the element to delete: \n");
    scanf("%d", &elementToDelete);

    // Search for the element in the array
    for (i = 0; i < n; i++)
    {
        if (a[i] == elementToDelete)
        {
            found = 1; // Element found
            break;
        }
    }

    // If element is found, delete it
    if (found)
    {
        // Shift elements to the left
        for (j = i; j < n - 1; j++)
        {
            a[j] = a[j + 1];
        }
        n--; // Decrease the number of elements

        // Print the updated array
        printf("New Array: ");
        for (i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
        printf("\n");
    }
    else
    {
        printf("Element %d not found in the array.\n", elementToDelete);
    }
    Array();
}
void Search()
{
    printf("Search Function called\n");
    //
    int a[10] = {1, 2, 4, 5, 6}; // Initial array
    int n = 5;                   // Number of elements in the array
    int k;                       // Position where element will be deleted

    // Array print
    printf("Array : \n");
    for (int j = 0; j < n; j++)
    {
        printf("%d ", a[j]);
    }
    printf("\n");

    // Input the element to be searched
    printf("Enter the element to be searched: ");
    scanf("%d", &k);

    // Search the element
    for (int i = 0; i < n; i++)
    {
        if (a[i] == k)
        {
            printf("Element is found at %d position", i + 1);
            printf("\n");
        }
    }
    Array();
}
void Sort()
{
    printf("Sort Function called\n");
    //
    int size, temp;

    // Input size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // Input elements of the array
    printf("Enter %d elements of the array: \n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Sorting the array using Bubble Sort
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Output the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    Array();
}
void MatrixMultiply()
{
    printf("MatrixMultiply Function called\n");
    //
    int r1, c1, r2, c2;

    printf("Enter size rows and columns for the first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter size rows and columns for the second matrix: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2)
    {
        printf("Matrix multiplication is not possible.\n");
        return;
    }

    int a[r1][c1], b[r2][c2], result[r1][c2];

    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++)
            {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Resultant matrix:\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    Array();
}

//    LINKED LIST

void LinkedList()
{
    int num;
    printf("************************************************\n");
    printf("**            LinkedList Operation            **\n");
    printf("**            1.  Singly Linked List          **\n");
    printf("**            2.  Doubly Linked List          **\n");
    printf("**            3.  Circular Linked List        **\n");
    printf("**            4.  Circular Singly Linked List **\n");
    printf("**            5.  Circular Doubly Linked List **\n");
    printf("**            6.    Exit                      **\n");
    printf("************************************************\n");
    printf("Enter your choice : ");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        SinglyLinkedList();
        break;
    case 2:
        DoublyLinkedList();
        break;
    case 3:
        CircularLinkedList();
        break;
    case 4:
        CircularSinglyLinkedList();
        break;
    case 5:
        CircularDoublyLinkedList();
        break;
    case 6:
        Exit(0);
        Menu();
        break;
    default:
        printf("Invailid number :");
        break;
    }
}
// FUNCTION
// void SinglyLinkedList()
// {
//     printf("Singly Linked List Function called\n");
//     //
//     LinkedList();
// }
void SinglyLinkedList()
{
    int num;
    printf("************************************************\n");
    printf("**         Single LinkedList Operation        **\n");
    printf("**            1. Insertion At The Begining    **\n");
    printf("**            2. Insertion At End             **\n");
    printf("**            3. Delete First Node            **\n");
    printf("**            4.    Exit                      **\n");
    printf("************************************************\n");
    printf("Enter your choice : ");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        InsertionAtBeginingOfSinglyLinkedList();
        SinglyLinkedList();
        break;
    case 2:
        InsertionAtEndOfSinglyLinkedList();
        SinglyLinkedList();
        break;
    case 3:
        DeletionFirstNodeSinglyLinkedList();
        SinglyLinkedList();
        break;
    case 4:
        Exit(0);
        LinkedList(); // for going to previous operation
        break;
    default:
        printf("Invailid number :");
        break;
    }
}
// * Insertion At Begining Of Singly Linked List Define

struct node
{ //* Node declare
    int data;
    struct node *link;
};

void InsertionAtBeginingOfSinglyLinkedList()
{

    struct node *head = NULL;
    struct node *newNode = (struct node *)malloc(sizeof(struct node));

    printf("Old Singly Linked List : ");
    newNode->data = 10;
    newNode->link = head;

    head = newNode;

    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->link;
    }

    printf("NULL\n");

    // Step 7: Add another node at the beginning (repeat process)
    newNode = (struct node *)malloc(sizeof(struct node));

    int n;
    printf("Enter Value Of New Node : "); // * Taking Input From User
    scanf("%d", &n);

    printf("New Singly Linked List : ");
    newNode->data = n;
    newNode->link = head;
    head = newNode;

    // Print the updated list
    temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->link; // assign the address of next node
    }
    printf("NULL\n");

    SinglyLinkedList();
}

// * Insertion At End Of Singly Linked List Define

void InsertionAtEndOfSinglyLinkedList()
{
    struct node *head = NULL;

    // Allocate memory for the first node
    head = (struct node *)malloc(sizeof(struct node));
    head->data = 10;
    head->link = NULL;

    // Print the old linked list
    struct node *temp = head;
    printf("Old Linked List: ");
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->link;
    }
    printf("NULL\n");

    // Allocate memory for a second node
    temp = (struct node *)malloc(sizeof(struct node));

    int n;
    printf("Enter Value Of New Node : "); // * Taking Input From User
    scanf("%d", &n);

    temp->data = n;    // Assign data to the new node
    temp->link = NULL; // New node points to NULL

    // Link the second node to the first node
    head->link = temp;

    // Traversing the list and printing the data
    temp = head;
    printf("Updated Linked List: ");
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->link; // assign the address of next node
    }
    printf("NULL\n");

    SinglyLinkedList();
}

// * Deletion First Node In Singly Linked List Define

void DeletionFirstNodeSinglyLinkedList()
{
    // Create the linked list
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));

    if (head == NULL || second == NULL || third == NULL)
    {
        printf("Memory allocation failed.\n");
    }

    // Initialize the nodes
    head->data = 10;
    head->link = second;

    second->data = 20;
    second->link = third;

    third->data = 30;
    third->link = NULL;

    // Print the original list
    printf("Old Linked List:\n");
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->link; // assign the address of next node
    }
    printf("NULL\n");

    // Delete the first node
    if (head != NULL)
    {
        struct node *temp = head; // Store the current head in a temporary variable
        head = head->link;        // Move the head pointer to the next node
        free(temp);               // Free the memory of the old head
    }

    // Print the list after deleting the first node
    printf("\nNew Linked List : \n");
    temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->link;
    }
    printf("NULL\n");

    SinglyLinkedList();
}

//
void DoublyLinkedList()
{
    printf("Doubly Linked List  Function called\n");
    //
    // Define the Node structure
    typedef struct Node
    {
        int data;
        struct Node *next;
        struct Node *prev;
    } Node;

    // Step 1: Create nodes
    Node *head = NULL;
    Node *tail = NULL;
    Node *temp = NULL;

    // Step 2: Allocate memory for nodes
    head = (Node *)malloc(sizeof(Node));
    tail = (Node *)malloc(sizeof(Node));
    temp = (Node *)malloc(sizeof(Node));

    // Step 3: Assign data to nodes
    head->data = 10;
    tail->data = 20;
    temp->data = 30;

    // Step 4: Link nodes
    head->next = tail;
    head->prev = NULL;
    tail->next = temp;
    tail->prev = head;
    temp->next = NULL;
    temp->prev = tail;
    // Step 5: Traverse the list
    Node *traverse = head;
    while (traverse != NULL)
    {
        printf("%d ->", traverse->data);
        traverse = traverse->next;
    }
    printf("\n");

    LinkedList();
}

//
void CircularLinkedList()
{
    printf("Circular Linked List Function called\n");
    //

    // Define the Node structure
    typedef struct Node
    {
        int data;
        struct Node *next;
        struct Node *prev;
    } Node;

    // Step 1: Create nodes
    Node *head = NULL;
    Node *tail = NULL;
    Node *temp = NULL;

    // Step 2: Allocate memory for nodes
    head = (Node *)malloc(sizeof(Node));
    tail = (Node *)malloc(sizeof(Node));
    temp = (Node *)malloc(sizeof(Node));

    // Step 3: Assign data to nodes
    head->data = 10;
    tail->data = 20;
    temp->data = 30;

    // Step 4: Link nodes
    head->next = tail;
    head->prev = NULL;
    tail->next = temp;
    tail->prev = head;
    temp->next = NULL;
    temp->prev = tail;

    // Step 5: Traverse the list
    Node *traverse = head;
    while (traverse != NULL)
    {
        printf("->%d ->", traverse->data);
        traverse = traverse->next;
    }
    printf("\n");

    LinkedList();
}
//
void CircularSinglyLinkedList()
{
    printf("Circular Singly Linked List Function called\n");
    //
    // Define the Node structure
    typedef struct Node
    {
        int data;
        struct Node *next;
    } Node;

    // Step 1: Create nodes
    Node *head = NULL;
    Node *tail = NULL;
    Node *temp = NULL;

    // Step 2: Allocate memory for nodes
    head = (Node *)malloc(sizeof(Node));
    tail = (Node *)malloc(sizeof(Node));
    temp = (Node *)malloc(sizeof(Node));

    // Step 3: Assign data to nodes
    head->data = 10;
    tail->data = 20;
    temp->data = 30;

    // Step 4: Link nodes
    head->next = tail;
    tail->next = temp;
    temp->next = head; // Circular link

    // Step 5: Traverse the list
    Node *traverse = head;
    do
    {
        printf("%d ->", traverse->data);
        traverse = traverse->next;
    } while (traverse != head);
    printf("\n");

    LinkedList();
}
//
void CircularDoublyLinkedList()
{
    printf("Circular Doubly Linked List Function called\n");
typedef struct Node
    {
        int data;
        struct Node *next;
        struct Node *prev;
    } Node;

    // Step 1: Create head and tail pointers
    Node *head = NULL, *tail = NULL, *temp = NULL;

    int n;
    printf("Enter the number of nodes in the circular doubly linked list: ");
    scanf("%d", &n);

    // Step 2: Create nodes dynamically and link them
    for (int i = 0; i < n; i++) {
        // Allocate memory for a new node
        temp = (Node *)malloc(sizeof(Node));
        if (temp == NULL) {
            printf("Memory allocation failed\n");
            return;
        }

        // Take user input for the node's data
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &temp->data);

        // If it's the first node, initialize head and tail
        if (i == 0) {
            head = temp;
            tail = temp;
            head->next = head;  // Circular link to itself
            head->prev = head;
        } else {
            // Link the new node into the list
            tail->next = temp;
            temp->prev = tail;
            temp->next = head;  // Link the last node to the head (circular)
            head->prev = temp;  // Link head to the last node
            tail = temp;        // Update tail to the new node
        }
    }

    // Step 3: Traverse and print the list
    Node *traverse = head;
    printf("The circular doubly linked list is: ");
    do
    {
        printf("%d <-> ", traverse->data);
        traverse = traverse->next;
    } while (traverse != head);  // Stop when we loop back to the head
    printf("\n");

    // Calling another function (LinkedList) after this (you can define the function)
    LinkedList();
}

//  Stack

void Stack()
{
    int num;
    printf("************************************************\n");
    printf("**              Stack Operation               **\n");
    printf("**            1.    PUSH                      **\n");
    printf("**            2.    POP                       **\n");
    printf("**            3.   DISPLAY                    **\n");
    printf("**            4.    Exit                      **\n");
    printf("************************************************\n");
    printf("Enter your choice : ");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        push();
        break;
    case 2:
        pop();
        break;
    case 3:
        display();
        break;
    case 4:
        exit(0);

        Menu();
    default:
        printf("Invalid choice -> try again");
        break;
    }
}
// FUNCTION

#define MAX_SIZE 10

int stack[MAX_SIZE];
int top = -1;
void push()
{
    printf("Push function called \n");
    //
    int data;
    printf("Enter data to push: ");
    scanf("%d", &data);

    if (top == MAX_SIZE - 1)
    {
        printf("Stack overflow! Cannot push %d\n", data);
        return;
    }

    stack[++top] = data;
    printf("Pushed %d onto the stack\n", data);

    Stack();
}
//
void pop()
{
    printf("Pop function called \n");
    //
    if (top == -1)
    {
        printf("Stack underflow! Cannot pop\n");
        return;
    }

    int data = stack[top--];
    printf("Popped %d from the stack\n", data);

    Stack();
}
//
void display()
{
    printf("Display function called \n");
    //
    if (top == -1)
    {
        printf("Stack is empty\n");
        return;
    }

    printf("Stack elements: ");
    for (int i = 0; i <= top; i++)
    {
        printf("%d ", stack[i]);
    }
    printf("\n");
    Stack();
}
//

// Queue

void Queue()
{
    int num;
    printf("************************************************\n");
    printf("**               Queue Operation              **\n");
    printf("**            1.  Simple Queue                **\n");
    printf("**            2.  Circular Queue              **\n");
    printf("**            3.  Double Ended Queue          **\n");
    printf("**            4.    Exit                      **\n");
    printf("************************************************\n");
    printf("Enter your choice : ");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        SimpleQueue();
        break;
    case 2:
        CircularQueue();
        break;
    case 3:
        DoubleEndedQueue();
        break;
    case 4:
        Exit(0);
        Menu();
        break;
    default:
        printf("Invailid number :");
        break;
    }
}
// Function
//
void SimpleQueue()
{
    printf("Simple Queue function called\n");
    //
    int choice;
    int data;

    do
    {
        printf("************************************************\n");
        printf("**        Simple Queue Operations             **\n");
        printf("**            1. Enqueue                      **\n");
        printf("**            2. Dequeue                      **\n");
        printf("**            3.    Exit                      **\n");
        printf("************************************************\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter data to enqueue: ");
            scanf("%d", &data);
            Enqueue(data);
            break;
        case 2:
            Dequeue();
            break;
        case 3:
            Exit(0);
            Queue();
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice. Please choose a valid option.\n");
        }
    } while (choice != 3);

    Queue();
}
//
int queue[MAX_SIZE];
int front = -1;
int rear = -1;
void Enqueue()
{
    printf("Enqueue function called\n");
    //
    int data;
    printf("Enter data to enqueue: ");
    scanf("%d", &data);

    if (rear == MAX_SIZE - 1)
    {
        printf("Queue overflow! Cannot enqueue %d\n", data);
        return;
    }

    if (front == -1)
    {
        front = 0;
    }

    rear++;
    queue[rear] = data;
    printf("Enqueued %d into the queue\n", data);

    Queue();
}

//
void Dequeue()
{
    printf("Dequeue function called\n");
    //
    if (front == -1)
    {
        printf("Queue underflow! Cannot dequeue\n");
        return;
    }

    int data = queue[front];
    printf("Dequeued %d from the queue\n", data);

    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        front++;
    }

    Queue();
}

//
void CircularQueue()
{
    printf("Circuler Queue function called\n");
    //

    Queue();
}
void DoubleEndedQueue()
{
    printf("Double Ended Queue function called\n");
    //
    Queue();
}

//   Searching
void Searching()
{
    int num;
    printf("************************************************\n");
    printf("**             Searching Operation            **\n");
    printf("**            1. LINEAR SEARCH                **\n");
    printf("**            2. BINARY SEARCH                **\n");
    printf("**            3.    Exit                      **\n");
    printf("************************************************\n");
    printf("Enter your choice : ");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        linearSearch();
        break;
    case 2:
        binarySearch();
        break;
    case 3:
        Exit(0);
        Menu();
        break;
    default:
        printf("Invailid number :");
        break;
    }
}
// function
void linearSearch()
{
    printf("LINEAR SEARCH function called :\n");
    //
   int size;
    printf("Enter the size of elements in the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the element  of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int target;
    printf("Enter the target element to search for: ");
    scanf("%d", &target);

    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            printf("Element %d found at index %d.\n", target, i);
            break;
           // return;
        }
    }
    printf("Element %d not found in the array.\n", target);
 
    
    //
    Searching();
}

void binarySearch()
{
    printf("BINARY SEARCH function called :\n");
int n, target, left, right, mid;

    // Step 1: User input for array size
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Validate array size
    if (n <= 0) {
        printf("Array size must be greater than 0.\n");
        return;
    }

    int arr[n];

    // Step 2: User input for array elements (must be sorted for binary search)
    printf("Enter the elements of the array (in sorted order):\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 3: User input for target value
    printf("Enter the target value to search for: ");
    scanf("%d", &target);

    // Step 4: Binary search implementation
    left = 0;
    right = n - 1;
    int found = 0;

    while (left <= right) {
        mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            printf("Target %d found at index %d.\n", target, mid);
            found = 1;
            break;
        } else if (arr[mid] < target) {
            left = mid + 1;  // Search in the right half
        } else {
            right = mid - 1; // Search in the left half
        }
    }

    if (!found) {
        printf("Target %d not found in the array.\n", target);
    }
    Searching();
}

//   Sorting
void Sorting()
{
    int num;
    printf("************************************************\n");
    printf("**              Sorting Operation             **\n");
    printf("**            1.  Bubble sort                 **\n");
    printf("**            2.  Insertion sort              **\n");
    printf("**            3.  Selection sort              **\n");
    printf("**            4.  Quick sort                  **\n");
    printf("**            5.   Merge sort                 **\n");
    printf("**            6.   Heap sort                  **\n");
    printf("**            7.  Radix sort                  **\n");
    printf("**            8.    Exit                      **\n");
    printf("************************************************\n");
    printf("Enter your choice : ");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        bubbleSort();
        break;
    case 2:
        insertionSort();
        break;
    case 3:
        selectionSort();
        break;
    case 4:
        quickSort();

        break;
    case 5:
        mergeSort();
        break;
    case 6:
        heapSort();
        break;
    case 7:
        redixSort();
        break;
    case 8:
        Exit(0);
        Menu();
        break;
    default:
        printf("Invailid number :");
        break;
    }
}
// function
void bubbleSort()
{
    printf("Bubble Sort function called\n");
    //
    int n;

    // Step 1: User input for array size
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Validate array size
    if (n <= 0) {
        printf("Array size must be greater than 0.\n");
        return;
    }

    int arr[n];

    // Step 2: User input for array elements
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 3: Bubble Sort implementation
    for (int i = 0; i < n - 1; i++) {  // Outer loop
        for (int j = 0; j < n - i - 1; j++) {  // Inner loop
            if (arr[j] > arr[j + 1]) {
                // Swap the elements if they are in the wrong order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Step 4: Print the sorted array
    printf("The sorted array is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    Sorting();
}
//
void insertionSort()
{
    printf(" Insertion Sort function called\n");
    //
    int n;
    int arr[10];
    printf("Enter the size of array : \n");
    scanf("%d",&n);
    printf("Enter the array element\n");
    for(int i=0;i<n;i++){
      scanf("%d",&arr[i]);
    }
    // for(int i =0;i<n-1;i++){
    //     for(int j=);
    // }
    


    Sorting();
}
//
void selectionSort()
{
    printf(" Selection Sort function called\n");
    //
    int n;
    int a[10];
    printf("Enter the size of array : \n");
    scanf("%d",&n);
    printf("Enter the array element\n");
    for(int i=0;i<n;i++){
      scanf("%d",&a[i]);
    }
    for(int i =0;i<n;i++){
        int min =i;
        for(int j=i+1;j<n;j++){
            if(a[min]>a[j]){
                min =j;
            }
        }
        int temp;
        temp = a[i];
        a[i]=a[min];
        a[min]=temp;
        for(int i =0 ;i<n;i++){
        printf("%d ",&a[i]);
    }
    printf("\n");
    }
    Sorting();
}
//
void quickSort()
{
    printf(" Quick Sort function called\n");
    //
    Sorting();
}
//
void mergeSort()
{
    printf(" Merge Sort function called\n");
    //
    Sorting();
}
//
void heapSort()
{
    printf("Heap Sort function called\n");
    //
    Sorting();
}
//
void redixSort()
{
    printf("Redix Sort function called\n");
    //
    Sorting();
}

// Tree
void Tree()
{
    int num;
    printf("************************************************\n");
    printf("**              Tree Operation                **\n");
    printf("**            1.  Insertion                   **\n");
    printf("**            2.  Deletion                    **\n");
    printf("**            3.    Search                    **\n");
    printf("**            4.    Sort                      **\n");
    printf("**            5.  MatrixMultiply              **\n");
    printf("**            6.    Exit                      **\n");
    printf("************************************************\n");
    printf("Enter your choice : ");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        Insertion();
        break;
    case 2:
        Deletion();
        break;
    case 3:
        Search();
        break;
    case 4:
        Sort();
        break;
    case 5:
        MatrixMultiply();
        break;
    case 6:
        Exit(0);
        Menu();
        break;
    default:
        printf("Invailid number :");
        break;
    }
}

// Graph

void Graph()
{
    int num;
    printf("************************************************\n");
    printf("**              Graph Operation               **\n");
    printf("**            1.  Insertion                   **\n");
    printf("**            2.  Deletion                    **\n");
    printf("**            3.    Search                    **\n");
    printf("**            4.    Sort                      **\n");
    printf("**            5.  MatrixMultiply              **\n");
    printf("**            6.    Exit                      **\n");
    printf("************************************************\n");
    printf("Enter your choice : ");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        Insertion();
        break;
    case 2:
        Deletion();
        break;
    case 3:
        Search();
        break;
    case 4:
        Sort();
        break;
    case 5:
        MatrixMultiply();
        break;
    case 6:
        Exit(0);
        Menu();
        break;
    default:
        printf("Invailid number :");
        break;
    }
}

void Exit()
{
    printf("Exiting the program.....\n");
}

int main()
{
    Menu();
    return 0;
}