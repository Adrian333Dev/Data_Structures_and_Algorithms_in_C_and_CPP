#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  int minSubArrayLen(int target, vector<int> &nums)
  {
    int sum = 0, l = 0, r = 0, len = 0;
    while (r < nums.size())
    {
      if (sum >= target)
        break;
      sum += nums[r++];
    }
    if (sum < target)
      return len;
    len = r - l;

    while (l <= r)
    {
      sum -= nums[l++];
      if (sum >= target)
        len = r - l;
      else if (r == nums.size())
        return len;
      else
        sum += nums[r++];
    }
  }
};

int main()
{
  // 1. nums= [2,3,1,2,4,3], target = 7 => 2
  // 2. nums= [1,4,4], target = 4 => 1
  // 3. nums= [1,1,1,1,1,1,1,1], target = 11 => 0
  // 4. nums= [1,2,3,4,5], target = 11 => 3
  // 5. nums= [5,1,3,5,10,7,4,9,2,8], target = 15 => 2

  Solution s;
  vector<int> nums1 = {2, 3, 1, 2, 4, 3};
  vector<int> nums2 = {1, 4, 4};
  vector<int> nums3 = {1, 1, 1, 1, 1, 1, 1, 1};
  vector<int> nums4 = {1, 2, 3, 4, 5};
  vector<int> nums5 = {5, 1, 3, 5, 10, 7, 4, 9, 2, 8};
  cout << s.minSubArrayLen(7, nums1) << endl;
  cout << s.minSubArrayLen(4, nums2) << endl;
  cout << s.minSubArrayLen(11, nums3) << endl;
  cout << s.minSubArrayLen(11, nums4) << endl;
  cout << s.minSubArrayLen(15, nums5) << endl;

  return 0;
}