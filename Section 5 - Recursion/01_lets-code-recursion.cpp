#include <iostream>
using namespace std;

void fn(int n)
{
  if (n > 0) {
    cout << n << " ";
    fn(n - 1);
  }
}

int main()
{
  int x = 3;
  fn(x);
  return 0;
}
