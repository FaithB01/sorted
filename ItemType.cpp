#include <iostream>
#include "ItemType.h"
#include <stdio.h>

#include <windows.h>

using namespace std;

ItemType::ItemType() {}

Comparison ItemType::compareTo(ItemType item)
{
  if (getValue() > item.getValue())
  {

    return GREATER;
  }
  else if (getValue() < item.getValue())
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
  return value;
}

void ItemType::initialize(int num)
{
  value = num;
}
