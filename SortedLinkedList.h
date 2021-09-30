#include "ListNode.h"

class SortedLinkedList
{
public:
  SortedLinkedList();
  int getLength() const;
  void insertItem(ItemType item);
  void deleteItem(ItemType item);
  int searchItem(ItemType &item);
  ItemType getNextItem();
  void resetList();
  void reverse();
  void print();
  ~SortedLinkedList();

private:
  int length;
  ListNode *head;
  ListNode *currentPos;
};
