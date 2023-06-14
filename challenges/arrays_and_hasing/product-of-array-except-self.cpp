#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  vector<int> productExceptSelf(vector<int> &nums)
  {
    int len = nums.size();
    vector<int> prev(len, nums[0]);
    vector<int> next(len, nums[len - 1]);

    for (int i = 1; i < len; i++)
    {
      prev[i] = prev[i - 1] * nums[i];
      next[i] = next[i - 1] * nums[len - 1 - i];
    }

    for (int i = 0; i < len; i++)
    {
      int prevProd = i == 0 ? 1 : prev[i - 1];
      int nextProd = i == len - 1 ? 1 : next[len - i - 2];
      nums[i] = prevProd * nextProd;
    }

    return nums;
  }
};

int main()
{
  Solution sol;
  vector<int> nums = {1, 2, 3, 4};
  sol.productExceptSelf(nums);
  for (int i = 0; i < nums.size(); i++)
  {
    cout << nums[i] << " ";
  }
  return 0;
}