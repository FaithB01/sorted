enum Comparison
{
  GREATER,
  LESS,
  EQUAL
};

using namespace std;

class ItemType
{
public:
  ItemType();                          //This is a Default Constructor
  Comparison compareTo(ItemType item); // Compare the value of item with the current object's value and return GREATER, LESS or EQUAL.
  int getValue() const;                //Return the value instance variable
  void initialize(int num);            //Initializes the data member by variable num
private:
  int value;
};
