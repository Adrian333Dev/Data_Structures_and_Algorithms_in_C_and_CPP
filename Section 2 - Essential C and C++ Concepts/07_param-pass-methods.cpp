#include <iostream>
using namespace std;

void passByValue(int x)
{
  x = 99;
}

void passByReference(int &x)
{
  x = 66;
}

void passByAddress(int *x)
{
  *x = 55;
}

int main()
{
  int x = 3;

  // Passing by value, reference, and address
  cout << "x = " << x << endl;
  passByValue(x);
  cout << "x = " << x << endl;
  passByReference(x);
  cout << "x = " << x << endl;
  passByAddress(&x);
  cout << "x = " << x << endl;

  return 0;
}