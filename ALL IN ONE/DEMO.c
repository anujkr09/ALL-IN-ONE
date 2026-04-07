#include<stdio.h>



// * Functions delares
void Menu();



// * Array Declare
void Array();
    void InsertionInArray();
    void DeletionInArray();
    void SearchingInArray();
    void SortInArray();
    void MatrixMultiplyInArray(); 
    // ^ complete



// * Linked List Declare
void LinkedList();
    void SinglyLinkedList();
        void InsertionAtBeginingOfSinglyLinkedList();
        void InsertionAtEndOfSinglyLinkedList();
        void DeletionFirstNodeSinglyLinkedList();


// * Stack Declare
// void Stack();



// * Queue Declare
// void Queue();



// void Tree();



// void Searching();
// void Sorting();
// void Exit();



// * Function calls
int main(){
    Menu(); // call function
    return 0;
}



// *Menu
void Menu(){
    int n;
    printf("*\n");
    printf("*              Choose Option By Number              *\n");
    printf("*\n");
    printf("*                   1. Array                        *\n");
    printf("*                   2. Linked List                  *\n");
    printf("*                   3. Stack                        *\n");
    printf("*                   4. Queue                        *\n");
    printf("*                   5. Tree                         *\n");
    printf("*                   6. Searching                    *\n");
    printf("*                   7. Sortind                      *\n");
    printf("*                   8. Exit                         *\n");
    printf("*\n");

    // * Taking Input
    printf("Enter your choice : "); 
    scanf("%d", &n);

    switch(n){
        case 1: 
            Array();
            break;
        case 2:
            LinkedList();
            break;
        // case 3:
        //     Stack();
        //     break;
        // case 4: 
        //     Queue();
        //     break;
        // case 5:
        //     Tree();
        //     break;
        // case 6:
        //     Searching();
        //     break;
        // case 7:
        //     Sorting();
        //     break;
        case 8:
            printf("You Exit");
            break;
        default: 
            printf("You enter wrong choice \n");
            Menu();
            break;
    }
}


// * Array Define
void Array(){
    int n;

    printf("*\n");
    printf("*                    Operations                     *\n");
    printf("*\n");
    printf("*                   1. Insertion                    *\n");
    printf("*                   2. Deletion                     *\n");
    printf("*                   3. Search                       *\n");
    printf("*                   4. Sort                         *\n");
    printf("*                   5. Matrix Multiply              *\n");
    printf("*                   6. Exit                         *\n");
    printf("*\n");
    printf("Enter your choice : ");
    scanf("%d", &n);

    switch (n){
        case 1:
            InsertionInArray();
            Array();
            break;
        case 2:
            DeletionInArray();
            Array();
            break;
        case 3:
            SearchingInArray();
            Array();
            break;
        case 4:
            SortInArray();
            Array();
        case 5:
            MatrixMultiplyInArray();
            Array();
        case 6:
            Menu();
            break;
        default:
            printf("You enter wrong choice \n");
            Array();
            break;
        }
};



// * Insertion In Array Function Define
void InsertionInArray(){
    int a[10] = {1, 2, 4, 5, 6};  // Initial array
    int n = 5;                    // Number of elements in the array
    int k = 2;                    // Position to insert the new element (0-based indexing)
    int newelement;


    printf("Old Array : ");
    for (int j = 0; j < n; j++) {
        printf("%d ", a[j]);  // Added space for better readability
    }
    printf("\n");

    printf("Enter new element want to insert : "); // New element to insert
    scanf("%d", &newelement);

    // Check if the array is full
    if (n >= 10) {
        printf("Array is full. Cannot insert new element.\n");
        return;
    }

    // Shift elements to the right
    for (int j = n; j > k; j--) {
        a[j] = a[j - 1];  // Correct shifting
    }

    // Insert new element
    a[k] = newelement;
    n++;  // Increase element count

    // Print the updated array
    printf("New Array : ");
    for (int j = 0; j < n; j++) {
        printf("%d ", a[j]);  // Added space for better readability
    }
    printf("\n"); // Add a newline at the end

}



// * Delation In Array Function Define
void DeletionInArray(){
    int a[10] = {1, 2, 4, 5, 6};  // Initial array
    int n = 5;                    // Number of elements in the array
    int elementToDelete;          // Element to be deleted
    int i, j, found = 0;          // Flag to check if element is found

    // Print the old array
    printf("Old Array : \n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    // Input the element to delete
    printf("Enter the element to delete: \n");
    scanf("%d", &elementToDelete);

    // Search for the element in the array
    for (i = 0; i < n; i++) {
        if (a[i] == elementToDelete) {
            found = 1; // Element found
            break;
        }
    }

    // If element is found, delete it
    if (found) {
        // Shift elements to the left
        for (j = i; j < n - 1; j++) {
            a[j] = a[j + 1];
        }
        n--; // Decrease the number of elements

        // Print the updated array
        printf("New Array: ");
        for (i = 0; i < n; i++) {
            printf("%d ", a[i]);
        }
        printf("\n");
    } else {
        printf("Element %d not found in the array.\n", elementToDelete);
        }
}


// * Searching In Array Define
void SearchingInArray(){
    int a[10] = {1, 2, 4, 5, 6}; // Initial array
    int n = 5;                   // Number of elements in the array
    int k;                       // Position where element will be deleted


    // Array print
    printf("Array : \n");
    for (int j = 0; j < n; j++) {
        printf("%d ", a[j]);
    }
    printf("\n");

    // Input the element to be searched
    printf("Enter the element to be searched: ");
    scanf("%d", &k);

    // Search the element
    for (int i = 0; i < n; i++) {
        if (a[i] == k) {
            printf("Element is found at %d position",i+1);
            printf("\n");
        }
    }
}


// * void Sort In Array Define
void SortInArray(){
    int size, temp;

    // Input size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // Input elements of the array
    printf("Enter %d elements of the array: \n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Sorting the array using Bubble Sort
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Output the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}



// * Matrix Multiply In Array Define
void MatrixMultiplyInArray(){
    int r1, c1, r2, c2;

    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Matrix multiplication is not possible.\n");
        return;
    }

    int a[r1][c1], b[r2][c2], result[r1][c2];

    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Resultant matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}



// ! ****************************************************************************/



// * Linked List
void LinkedList(){
    int n;

    printf("*\n");
    printf("*               Choose Linked List :                *\n");
    printf("*\n");
    printf("*             1. Singly Linked List                 *\n");
    printf("*             2. Doubly Linked List                 *\n");
    printf("*             3. Circular Linked List               *\n");
    printf("*             4. Circular Doubly Linked List        *\n");
    printf("*             5. Exit                               *\n");
    printf("*\n");

    // * Taking Input
    printf("Enter your choice : "); 
    scanf("%d", &n);

    switch (n){
        case 1:
            SinglyLinkedList();
            LinkedList();
            break;
    //     case 2:
    //         DoublyLinkedList();
    //         break;
    //     case 3:
    //         CircularLinkedList();
    //         break;
    //     case 4:
    //         CircularDoublyLinkedList();
    //         break;
        // case 5:
        //     Menu();
        default:
            printf("You enter wrong choice \n");
            break;
        }
} 



// * Singly Linked List Define
void SinglyLinkedList(){
    int n;

    printf("*\n");
    printf("*                   Operations                      *\n");
    printf("*\n");
    printf("*           1. Insertion At The Begining            *\n");
    printf("*           2. Insertion At End                     *\n");
    printf("*           3. Insertion At Specific Position       *\n");
    printf("*           4. Delete First Node                    *\n");
    printf("*           5. Delete Specific Node                 *\n");
    printf("*           6. Exit                                 *\n");
    printf("*\n");
    
    // * Taking Input
    printf("Enter your choice : "); 
    scanf("%d", &n);

    switch(n){
        case 1:
            InsertionAtBeginingOfSinglyLinkedList();
            SinglyLinkedList();
            break;
        case 2:
            InsertionAtEndOfSinglyLinkedList();
            SinglyLinkedList();
            break;
        case 3:
            // DeletionFirstNodeSinglyLinkedList();
            // break;
        case 4:
            DeletionFirstNodeSinglyLinkedList();
            break;
        // case 5:
        //     MatrixMultiplyInArray();
        //     Array();
        // case 6:
        //     Menu();
        //     break;
        default:
            printf("You enter wrong choice \n");
            Array();
            break;
        }
}



// * Insertion At Begining Of Singly Linked List Define

struct node{ //* Node declare
    int data;
    struct node* link;
};

void InsertionAtBeginingOfSinglyLinkedList(){

    struct node* head=NULL;
    struct node* newNode = (struct node*)malloc(sizeof(struct node));

    printf("Old Singly Linked List : ");
    newNode->data = 10;
    newNode->link = head;

    head = newNode;

    struct node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->link;
    }

    printf("NULL\n");

    // Step 7: Add another node at the beginning (repeat process)
    newNode = (struct node*)malloc(sizeof(struct node));

    int n;
    printf("Enter Value Of New Node : "); // * Taking Input From User
    scanf("%d",&n);

    printf("New Singly Linked List : ");
    newNode->data = n;
    newNode->link = head;
    head = newNode;

    // Print the updated list
    temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->link; // assign the address of next node
    }
    printf("NULL\n");
}



// * Insertion At End Of Singly Linked List Define

void InsertionAtEndOfSinglyLinkedList(){
    struct node* head = NULL;

    // Allocate memory for the first node
    head = (struct node*)malloc(sizeof(struct node));
    head->data = 10;
    head->link = NULL;

    // Print the old linked list
    struct node* temp = head;
    printf("Old Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->link;
    }
    printf("NULL\n");

    // Allocate memory for a second node
    temp = (struct node*)malloc(sizeof(struct node));

    int n;
    printf("Enter Value Of New Node : "); // * Taking Input From User
    scanf("%d", &n);

    temp->data = n;  // Assign data to the new node
    temp->link = NULL; // New node points to NULL

    // Link the second node to the first node
    head->link = temp;

    // Traversing the list and printing the data
    temp = head;
    printf("Updated Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->link; // assign the address of next node
    }
    printf("NULL\n");
}



// * Deletion First Node In Singly Linked List Define

void DeletionFirstNodeSinglyLinkedList(){
    // Create the linked list
    struct node* head = (struct node*)malloc(sizeof(struct node));
    struct node* second = (struct node*)malloc(sizeof(struct node));
    struct node* third = (struct node*)malloc(sizeof(struct node));

    if (head == NULL || second == NULL || third == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
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
    struct node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->link; // assign the address of next node
    }
    printf("NULL\n");

    // Delete the first node
    if (head != NULL) {
        struct node* temp = head; // Store the current head in a temporary variable
        head = head->link;       // Move the head pointer to the next node
        free(temp);              // Free the memory of the old head
    }

    // Print the list after deleting the first node
    printf("\nNew Linked List : \n");
    temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->link;
    }
    printf("NULL\n");
}



// ! ****************************************************************************/



// * Stack
// void Stack(){
//     int m;
//     printf("Operations : \n\n");
//     printf("1. Insertion\n");
//     printf("2. Deletion\n");
//     printf("3. Exit\n");

//     switch (m){
//         case 1:
//             InsertionInStack();
//             break;
//         case 2:
//             DeletionInStack();
//             break;
//         case 3:
//             Menu();
//         default:
//             printf("You enter wrong choice \n");
//             break;
//         }
// }