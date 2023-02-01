// C program for the above operation
#include <stdio.h>
#include <stdlib.h>

// Structure of a linked list node
struct node {
	int info;
	struct node* next;
};

// Pointer to last node in the list
struct node* last = NULL;

// Function to insert a node in the
// starting of the list
void insertAtFront(int data)
{
	// Initialize a new node
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));

	// If the new node is the only
	// node in the list
	if (last == NULL) {
		temp->info = data;
		temp->next = temp;
		last = temp;
	}

	// Else last node contains the
	// reference of the new node and
	// new node contains the reference
	// of the previous first node
	else {
		temp->info = data;
		temp->next = last->next;

		// last node now has reference
		// of the new node temp
		last->next = temp;
	}
}

void deletelast()
{
    struct node* temp;
  
    // If list is empty
    if (last == NULL)
        printf("\nList is empty.\n");
  
    temp = last->next;
  
    // Traverse the list till
    // the second last node
    while (temp->next != last)
        temp = temp->next;
  
    // Second last node now contains
    // the reference of the first
    // node in the list
    temp->next = last->next;
    last = temp;
}

// Function to print the list
void viewList()
{
	// If list is empty
	if (last == NULL)
		printf("\nList is empty\n");

	// Else print the list
	else {
		struct node* temp;
		temp = last->next;

		// While first node is not
		// reached again, print,
		// since the list is circular
		do {
			printf("\nRollno. = %d", temp->info);
			temp = temp->next;
		} while (temp != last->next);
	}
}

// Driver Code
int main()
{
	// Function Call
	insertAtFront(10);
	insertAtFront(20);
	insertAtFront(30);

	printf("Before Deletion:\n");
    viewList();
    
    // Function Call
    deletelast();
  
    // Print the list
    printf("\n\nAfter Deletion:\n");
    viewList();

	return 0;
}
