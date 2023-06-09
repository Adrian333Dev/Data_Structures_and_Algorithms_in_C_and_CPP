#include <iostream>
using namespace std;

void fn1(int arr[])
{
  arr[0] = 100;
  arr[1] = 200;
}

void fn2(int *arr)
{
  arr[0] = 300;
  arr[1] = 400;
}

int *createArray(int size)
{
  int *arr = new int[size];
  for (int i = 0; i < size; i++)
    arr[i] = std::rand();
  return arr;
}

int main()
{
  int arr[] = {1, 2, 3, 4, 5};

  fn1(arr);
  cout << arr[0] << " " << arr[1] << endl;

  fn2(arr);
  cout << arr[0] << " " << arr[1] << endl;

  int *arr2 = createArray(10);
  for (int i = 0; i < 10; i++)
    cout << arr2[i] << " ";

  delete[] arr2;

  return 0;
}