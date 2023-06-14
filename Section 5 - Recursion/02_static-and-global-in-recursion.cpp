#include <iostream>
using namespace std;

int fn(int n)
{
  static int x = 0;
  if (n > 0)
    return fn(n - 1) + ++x;
  return 0;
}

int main()
{
  int x = 5;
  cout << fn(x) << endl;
  return 0;
}