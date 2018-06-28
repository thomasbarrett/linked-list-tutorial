/*
 * A single node in a linked list of int nodes. It both stores data and a
 * pointer to the next node in the list. If the pointer is null, it signifies
 * that the node is the current node in the list.
 *
 * Fields:
 * int data: the data stored in the node
 * struct node* next: the next node in the linked list of nodes
 */
struct node {
  int data;
  struct node* next;
};

/*
 * A data structure that wraps a pointer to a linked list of int nodes and
 * tracks the size of the list. If the first node in the list is null, it
 * signifies that the list is empty. Every time a node is added to the node
 * list, the `size` field should be incremented. Every time a node is removed,
 * it should be decremented. By keeping track of list size, querying the size
 * is an O(1) operation instead of an O(N) operation.
 *
 * Fields:
 * int size: the size of the linked list
 * struct node* first: the first node in the list
 */
struct list {
  int size;
  struct node* first;
};

// defines the struct node and struct list types as full types
typedef struct node Node;
typedef struct list List;

/*
 * Returns an initialized list
 *
 * @returns List initialized with a `size` of 0 and a null `first` node;
 */
List list_create();

/*
 * Adds an int to the end of a list and updates its size
 *
 * Precondition:
 * - assume that self will never be null
 *
 * @param List* const self: the List to modify
 * @param int data: the data to add the list
 */
void list_add(List* const self, int data);

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
int list_get(const List* const self, int index);

/*
 * Returns the size of the list
 *
 * Precondition:
 * - assume that self will never be null
 *
 * @param const List* const self: the List to query
 * @returns int the size of the list
 */
int list_size(const List * const self);

/*
 * Removes all data from a list and sets its size to 0
 *
 * Precondition:
 * - assume that self will never be null
 *
 * @param List* const self: the List to modify
 */
void list_destroy(List* const self);
