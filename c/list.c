#include "list.h"

/*------------------ Begin: Fileprivate Helper Functions ---------------------*/

/*
 * Returns an initialized node
 *
 * @returns Node initialized with a `data` set to `num` and `next` set to NULL
 */
static Node node_create(int num) {

}

/*
 * Returns the last node in a chain of linked nodes
 *
 * Precondition:
 * - assume that self will never be null
 *
 * @param Node* const self: the head of the list
 * @returns Node* the last node in the list
 */
static Node* node_get_last(Node* self) {

}

/*
 * Gets an Node* from a specified index in linked list
 *
 * Precondition:
 * - assume that self will never be null
 * - assume that the index will never be out of bounds
 *
 * @param Node* const self: the linked list to access
 * @param int index: the index to access
 * @returns Node* the node at the specified index
 */
static Node* node_get(Node* self, int i) {

}

/*
 * Destroy all nodes that follow and free self
 *
 * Precondition:
 * - assume that self will never be null
 *
 * @param Node* const self: the Node to destroy
 */
static void node_destroy(Node* self) {

}

/*------------------- End: Fileprivate Helper Functions ----------------------*/


/*------------------- Begin: Public Interface Functions ----------------------*/

/*
 * Returns an initialized list
 *
 * @returns List initialized with a `size` of 0 and a null `first` node;
 */
List list_create() {
  // TODO:
}

/*
 * Adds an int to the end of a list and updates its size
 *
 * Precondition:
 * - assume that self will never be null
 *
 * @param List* const self: the List to modify
 * @param int data: the data to add the list
 */
void list_add(List* const self, int data) {
  // TODO:
}

/*
 * Gets an int from the given index of a list
 *
 * Precondition:
 * - assume that self will never be null
 * - assume that the index will never be out of bounds
 *
 * @param List* const self: the List to access
 * @param int index: the index to access
 * @returns int the data at the given index of the list
 */
int list_get(const List* const self, int index) {
  // TODO:
}

/*
 * Returns the size of the list
 *
 * Precondition:
 * - assume that self will never be null
 *
 * @param const List* const self: the List to query
 * @returns int the size of the list
 */
int list_size(const List * const self) {
  // TODO:
}

/*
 * Removes all data from a list and sets its size to 0
 *
 * Precondition:
 * - assume that self will never be null
 *
 * @param List* const self: the List to modify
 */
void list_destroy(List* const self) {
  // TODO:
}

/*--------------------- End: Public Interface Functions ----------------------*/
