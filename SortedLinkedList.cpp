#include <iostream>
#include <stdio.h>
#include <cstddef>
#include "SortedLinkedList.h"

using namespace std;

SortedLinkedList::SortedLinkedList()
{
  length = 0;
  head = NULL;
  currentPos = NULL;
}

int SortedLinkedList::getLength() const
{
  return length;
}

void SortedLinkedList::insertItem(ItemType item)
{
  ListNode *loc = head;
  ListNode *predLoc = NULL;
  bool passed = false;
  ListNode *node = new ListNode;
  node->item = item;
  while (loc != NULL && !passed)
  {
    if (loc->item.compareTo(item) == LESS)
    {
      predLoc = loc;
      loc = loc->next;
    }
    else
      passed = true;
  }
  if (predLoc == NULL)
  {
    node->next = head;
    head = node;
  }
  else
  {
    node->next = loc;
    predLoc->next = node;
  }
  length++;
}

void SortedLinkedList::deleteItem(ItemType item)
{
  ListNode *temp;
  ListNode *loc = head;
  if (length < 1)
  {
  }
  else if (length == 1)
  {
    temp = loc;
    head = NULL;
    delete temp;
    length--;
  }
  else if (loc->item.compareTo(item) == EQUAL)
  {
    temp = loc;
    head = head->next;
    delete temp;
    length--;
  }
  else
  {
    while (loc->next != NULL && (item.compareTo((loc->next)->item) != EQUAL))
    {
      loc = loc->next;
    }
    if (loc->next == NULL)
      cout << "Item not found" << endl;
    else
    {
      temp = loc->next;
      loc->next = (loc->next)->next;
      delete temp;
      length--;
    }
  }
}

int SortedLinkedList::searchItem(ItemType &item)
{
  ListNode *loc = head;
  while (loc->next != NULL && (item.compareTo((loc->next)->item) != EQUAL))
  {
    loc = loc->next;
  }
  if (loc->next == NULL)
  {
    cout << "Item not found" << endl;
  }
  else
  {
    return item;
  }
}

ItemType SortedLinkedList::getNextItem()
{
  currentPos++;
  return item[currentPos];
}

void SortedLinkedList::resetList()
{
  currentPos = NULL;
}

void SortedLinkedList::reverse()
{
}

void SortedLinkedList::print()
{
  ListNode *temp = head;
  if (length > 0)
  {
    while (temp != NULL)
    {
      cout << temp->item.getValue() << " ";
      temp = temp->next;
    }
  }
  cout << endl;
}
SortedLinkedList::~SortedLinkedList()
{
  ListNode *temp;
  while (head != NULL)
  {
    temp = head;
    head = head->next;
    delete temp;
  }
  length = 0;
}
