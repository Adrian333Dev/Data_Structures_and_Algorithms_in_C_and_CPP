#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Rectangle
{
  int length;
  int breadth;
};

int main()
{
  // int a = 10;
  // int *p = &a;
  // cout << "a: " << a << endl;
  // cout << "&a: " << &a << endl;
  // cout << "p: " << p << endl;
  // cout << "*p: " << *p << endl;
  // cout << "&p: " << &p << endl;

  // int A[5] = {2, 4, 6, 8, 10};
  // int *q = A;
  // for (int i = 0; i < 5; i++)
  //   cout << p[i] << endl;

  // int *p;
  // p = (int *)malloc(5 * sizeof(int));
  // p = new int[5];

  // p[0] = 3;
  // p[1] = 5;
  // p[2] = 7;
  // p[3] = 9;
  // p[4] = 11;

  // for (int i = 0; i < 5; i++)
  //   cout << p[i] << endl;

  // delete[] p;
  // free(p);

  int *p1;
  char *p2;
  float *p3;
  double *p4;
  struct Rectangle *p5;

  cout << "sizeof(p1): " << sizeof(p1) << endl;
  cout << "sizeof(p2): " << sizeof(p2) << endl;
  cout << "sizeof(p3): " << sizeof(p3) << endl;
  cout << "sizeof(p4): " << sizeof(p4) << endl;
  cout << "sizeof(p5): " << sizeof(p5) << endl;

  return 0;
}