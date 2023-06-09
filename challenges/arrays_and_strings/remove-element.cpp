#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  int removeElement(vector<int> &nums, int val)
  {
    int rmIdx = -1;
    int chainLen = 0;
    int count = 0;

    for (int i = 0; i < nums.size(); i++)
    {
      if (nums[i] == val)
      {
        if (rmIdx < 0)
          rmIdx = i;
        chainLen++;
        count++;
      }
      else if (rmIdx >= 0)
        swap(nums, i, rmIdx++);
    }

    return nums.size() - count;
  }

  void swap(vector<int> &nums, int i, int j)
  {
    int temp = nums[i];
    nums[i] = nums[j];
    nums[j] = temp;
  }

  void test(vector<int> &nums, int val)
  {
    int result = removeElement(nums, val);
    cout << result << endl;
    for (int i = 0; i < nums.size(); i++)
      cout << nums[i] << " ";
    cout << endl
         << "-------------------" << endl;
  }
};

int main()
{
  Solution solution;
  vector<int> nums1 = {3, 2, 2, 3};
  solution.test(nums1, 3);
  vector<int> nums2 = {3, 3, 2, 3, 3, 5, 1};
  solution.test(nums2, 3);
  // [0,1,2,2,3,0,4,2], val = 2
  vector<int> nums3 = {0, 1, 2, 2, 3, 0, 4, 2};
  solution.test(nums3, 2);

  return 0;
}