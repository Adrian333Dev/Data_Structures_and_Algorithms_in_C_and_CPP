#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  int removeDuplicates(vector<int> &nums)
  {
    // nums = [1,1,1,2,2,3] => 5, nums = [1,1,2,2,3,_]
    // nums = [1,1,1,1,2,2,2]
    // nums = [1,1,2,1,1,2,2]
    // nums = [1,1,2,2,1,1,2]
    // nums = [0,0,1,1,1,1,2,3,3] => 7, nums = [0,0,1,1,2,3,3,_,_,_]
    int uniqueIdx = 0;
    int count = 1;
    for (int i = 1; i < nums.size(); i++)
    {

      // if (nums[uniqueIdx] != nums[i])
      // {
      //   nums[++uniqueIdx] = nums[i];
      // }
      // else if (count < 2)
      //   count++;
    }
    return uniqueIdx + 1;
  }

  void test(vector<int> &nums)
  {
    int len = removeDuplicates(nums);
    cout << "len: " << len << endl;
    for (int i = 0; i < len; i++)
      cout << nums[i] << " ";
    cout << endl
         << "-----------------" << endl;
  }
};

int main()
{
  Solution solution;
  vector<int> nums1 = {1, 1, 1, 2, 2, 3};
  solution.test(nums1);
  vector<int> nums2 = {0, 0, 1, 1, 1, 1, 2, 3, 3};
  solution.test(nums2);
  return 0;
}