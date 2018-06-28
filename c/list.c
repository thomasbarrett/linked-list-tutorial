#include "list.h"

/*
 * Returns an initialized list
 *
 * @returns List initialized with a `size` of 0 and a null `first` node;
 */
List list_create() {
  // TODO: implement
}

/*
 * Adds an int to the end of a list and updates its size
 *
 * @param List* const self: the List to modify
 * @param int data: the data to add the list
 */
void list_add(List* const self, int data) {
  // TODO: implement
}

/*
 * Gets an int from the given index of a list
 *
 * @param List* const self: the List to access
 * @param int index: the index to access
 * @returns int the data at the given index of the list
 */
int list_get(const List* const self, int index) {
  // TODO: implement
}

/*
 * Returns the size of the list
 *
 * @param const List* const self: the List to query
 * @returns int the size of the list
 */
int list_size(const List * const self) {
  // TODO: implement
}

/*
 * Removes all data from a list and sets its size to 0
 *
 * @param List* const self: the List to modify
 */
void list_destroy(List* const self) {
  // TODO: implement
}
