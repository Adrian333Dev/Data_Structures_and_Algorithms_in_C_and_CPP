#include <iostream>
#include <stdio.h>
using namespace std;

// Monolithic program

int main()
{
  int length = 0, breadth = 0;
  cout << "Enter length and breadth: ";
  cin >> length >> breadth;

  int area = length * breadth;
  int perimeter = 2 * (length + breadth);

  cout << "Area: " << area << endl;
  cout << "Perimeter: " << perimeter << endl;
  return 0;
}