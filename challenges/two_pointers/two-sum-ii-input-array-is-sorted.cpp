#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  vector<int> twoSum(vector<int> &numbers, int target)
  {
    int l = 0, r = numbers.size() - 1;
    while (l < r)
    {
      int sum = numbers[l] + numbers[r];
      if (sum < target) l++;
      else if (sum > target) r--;
      else return {l+1, r+1};
    }
    return {-1, -1};
  }
};

int main()
{
  Solution solution;
  vector<int> numbers = {2, 7, 11, 15};
  int target = 9;
  vector<int> output = solution.twoSum(numbers, target);
  for (int i = 0; i < output.size(); i++)
  {
    cout << output[i] << " ";
  }
  cout << endl;
}