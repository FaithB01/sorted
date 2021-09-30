#include <iostream>
#include <stdio.h>
#include <fstream>
#include <cstddef>
#include "SortedLinkedList.h"

using namespace std;

int main(int argc, char *argv[])
{
  SortedLinkedList list;
  ItemType item;
  int input;
  fstream fs;
  char command;
  fs.open(argv[1], fstream::in);
  if (fs.is_open())
  {
    fs >> input;
    while (!fs.eof())
    {
      item.initialize(input);
      list.insertItem(item);
      fs >> input;
    }
  }
  else
  {
    cout << "Failed to open  file" << endl;
  }
  cout << "Commands:\n\t(i) - Insert \n\t(d) - Delete \n\t(s) - Search \n\t(n) - Print next iterator\n\t(r) - Reset Iterator\n\t(p) - Print list\n\t(l) - Print length\n\t(b) - Reverse\n\t(q) - Quit program";
  do
  {
    cout << "\nEnter  command: ";
    cin >> command;
    if (command == 'i')
    {
      list.print();
      cout << "Enter Number: ";
      cin >> input;
      item.initialize(input);
      list.insertItem(item);
      list.print();
    }
    else if (command == 'd')
    {
      list.print();
      cout << "Enter Number: ";
      cin >> input;
      item.initialize(input);
      list.deleteItem(item);
      list.print();
    }
    else if (command == 's')
    {
      cout << "Enter a value to search: ";
      cin >> input;
      item.initialize(input);
      if (list.searchItem(item) != -1)
        cout << "Index " << list.searchItem(item) << endl;
    }
    else if (command == 'n')
    {

      cout << list.getNextItem().getValue() << endl;
    }
    else if (command == 'r')
    {
      list.resetList();
      cout << "Iterator reset." << endl;
    }
    else if (command == 'p')
    {
      list.print();
    }
    else if (command == 'l')
    {
      cout << "List length is " << list.getLength() << endl;
    }
    else if (command == 'b')
    {
      cout << "Before" << endl;
      list.print();
      cout << "After" << endl;
      list.reverse();
      list.print();
    }
    else
    {
    }

  } while (command != 'q');
  cout << "Quit program" << endl;
  return 0;
}
