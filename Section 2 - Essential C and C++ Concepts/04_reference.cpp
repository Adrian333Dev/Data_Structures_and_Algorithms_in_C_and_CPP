#include <iostream>
using namespace std;

int main()
{
  int a = 10;
  int &r = a; // r is a reference to a

  cout << "a: " << a << endl;
  cout << "r: " << r << endl << endl;

  r = 20; // modifies a
  cout << "a: " << a << endl;
  cout << "r: " << r << endl << endl;

  int b = 30;
  r = b; // modifies a
  cout << "a: " << a << endl;
  cout << "r: " << r << endl;
  cout << "b: " << b << endl << endl;

  return 0;
}