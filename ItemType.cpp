#include <iostream>
#include "ItemType.h"
#include <stdio.h>

using namespace std;

ItemType::ItemType() {}

int item;
Comparison ItemType::compareTo(ItemType item)
{
  if (value > item.value)
  {

    return GREATER;
  }
  else if (value < item.value)
  {

    return LESS;
  }
  else
  {

    return EQUAL;
  }
}

int ItemType::getValue() const
{
  cout << value << "" << endl;
  //return value;
}

void ItemType::initialize(int num)
{
  value = num;
}
