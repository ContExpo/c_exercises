#include <stdio.h>
#include <stdlib.h>

// Define the custom data type Node
typedef struct Node {
    int data;
    Node* next;
} Node;

/**
 * \brief Creates a new unlinked node and returns its address
 * \param data The node data
 * \return The node address
 */
Node* createNode(int data) {

}

/**
 * \brief Deletes the parameter node BY USING FREE()
 * \param node
 */
void deleteNode(Node* node) {

}

/**
 * \brief Creates a new node and sets it as the head of the list
 * \param head Current head of the list
 * \param data The node data
 * \return The new head of the list
 */
Node* insertAtHead(Node** head, int data) {

}

/**
 * \brief Creates a new node and appends it as the end of the list
 * \param head Current head of the list
 * \param data The node data
 */
void insertAtTail(Node** head, int data) {

}

// Function to insert a node at the middle of the list
void insertAtMiddle(Node* previousNode, int data) {

}

/**
 * \brief Deletes the first node of the list
 * \param head Head of the list
 * \returns The new head of the list
 */
Node* deleteFirstNode(Node** head) {

}

/**
 * \brief Deletes the last node of the list
 * \param head Head of the list
 */
void deleteLastNode(Node** head) {

}

/**
 * \brief Deletes all nodes with the given value from the list
 * \param value An integer to be deleted
 */
void deleteValue(int value) {

}

/**
 * \brief Returns the number of nodes in the list
 * \param head The head of the list
 * \return A size_t that is the amount of elements in the list
 */
size_t list_size(Node* head) {

}

/**
 * \brief Prints the entire list in the standard output
 * \param head Head of the list
 */
void printList(Node* head) {

}

int main() {

}
