#include <stdio.h>
#include <iostream>
using namespace std;

struct Rectangle
{
  int length;
  int breadth;
};

int main()
{
  struct Rectangle r1 = {10, 5};
  cout << "The area of the rectangle is: " << r1.length * r1.breadth << endl;

  return 0;
}