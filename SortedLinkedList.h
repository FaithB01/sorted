#include "ListNode.h"

class SortedLinkedList
{
private:
  //int length;
  ListNode *head;
  ListNode *currentPos;

public:
  SortedLinkedList();
  ~SortedLinkedList();
  int length;
  int getLength() const;
  void insertItem(ItemType item);
  void deleteItem(ItemType item);
  int searchItem(ItemType item);
  void reverse();
  void print();
  ItemType getNextItem();
  void resetList();
};
