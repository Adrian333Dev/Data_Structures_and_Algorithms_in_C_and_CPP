#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Rectangle
{
  int length;
  int breadth;
};

void fnPassByValue(struct Rectangle r)
{
  r.length = 20;
  cout << "Length: " << r.length << endl;
  cout << "Breadth: " << r.breadth << endl;
}

void fnPassByAddress(struct Rectangle *p)
{
  p->length = 30;
  cout << "Length: " << p->length << endl;
  cout << "Breadth: " << p->breadth << endl;
}

void fnPassByReference(struct Rectangle &r)
{
  r.length = 40;
  cout << "Length: " << r.length << endl;
  cout << "Breadth: " << r.breadth << endl;
}

struct Rectangle *createRectangle()
{
  struct Rectangle *r;
  r = new Rectangle;
  // r = (struct Rectangle *)malloc(sizeof(struct Rectangle)); // ! C
  r->length = 10;
  r->breadth = 5;
  return r;
}

int main()
{
  struct Rectangle r = {10, 5};
  fnPassByValue(r);
  cout << "Length: " << r.length << endl;
  cout << "Breadth: " << r.breadth << endl;

  cout << endl;

  fnPassByAddress(&r);
  cout << "Length: " << r.length << endl;
  cout << "Breadth: " << r.breadth << endl;

  cout << endl;

  struct Rectangle *p = createRectangle();
  cout << "Length: " << p->length << endl;
  cout << "Breadth: " << p->breadth << endl;
  return 0;
}