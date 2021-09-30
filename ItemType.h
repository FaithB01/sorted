enum Comparison
{
  GREATER,
  LESS,
  EQUAL
};

using namespace std;

class ItemType
{
private:
  int value;

public:
  ItemType();                          //This is a Default Constructor
  Comparison compareTo(ItemType item); // Compares the value of item with the current object's value and return GREATER, LESS or EQUAL.
  int getValue() const;                //Return the value instance variable
  void initialize(int num);            //Initializes the data member by variable num
};
