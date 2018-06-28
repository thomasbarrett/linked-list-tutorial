#ifndef INT_LIST_H
#define INT_LIST_H

class Node {
private:
  int data;
  Node* next;
public:
  // constructor
  Node(int data);

  // returns the last node in list
  Node* getLast();

  // returns the indexed node in list
  Node* get(int index);

  // destructor
  ~Node();

  // allows List to access private fields
  friend class List;
};

class List {
private:
  int size;
  class Node* first;
public:
  // constructor
  List();

  // add data
  void add(int data);

  // get data
  int get(int index) const;

  // destructor
  ~List();
};

#endif
