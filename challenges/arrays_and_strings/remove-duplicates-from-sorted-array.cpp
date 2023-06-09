#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  int removeDuplicates(vector<int> &nums)
  {
    int uniqueIdx = 0;
    for (int i = 1; i < nums.size(); i++)
    {
      if (nums[uniqueIdx] != nums[i])
        nums[++uniqueIdx] = nums[i];
    }
    return uniqueIdx + 1;
  }

  void test(vector<int> &nums)
  {
    removeDuplicates(nums);
    for (int i = 0; i < nums.size(); i++)
    {
      cout << nums[i] << " ";
    }
    cout << endl;
  }
};

int main()
{
  Solution solution;
  // [1,1,2] => [1,2,_]
  // [0,0,1,1,1,2,2,3,3,4] => [0,1,2,3,4,_,_,_,_,_]

  vector<int> nums1 = {1, 1, 2};
  vector<int> nums2 = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

  solution.test(nums1);
  solution.test(nums2);

  return 0;
}