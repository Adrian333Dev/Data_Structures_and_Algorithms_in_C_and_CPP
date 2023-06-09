#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  void rotate(vector<int> &nums, int k)
  {
    k = k % nums.size();
    if (k == 0)
      return;
    reverse(nums);
    reverse(nums, 0, k - 1);
    reverse(nums, k);
  }

  void swap(vector<int> &nums, int i, int j)
  {
    int temp = nums[i];
    nums[i] = nums[j];
    nums[j] = temp;
  }

  void reverse(vector<int> &nums, int l = 0, int r = -1)
  {
    if (r == -1)
      r = nums.size() - 1;
    while (l < r)
      swap(nums, l++, r--);
  }

  void test(vector<int> &nums, int k, vector<int> &expected)
  {
    rotate(nums, k);
    cout << "nums: ";
    for (int i = 0; i < nums.size(); i++)
      cout << nums[i] << " ";
    cout << endl;
    cout << "expected: ";
    for (int i = 0; i < expected.size(); i++)
      cout << expected[i] << " ";
    cout << endl;
    cout << "-----" << endl;
  }
};

int main()
{
  Solution solution;
  vector<int> nums1 = {1, 2, 3, 4, 5, 6, 7};
  vector<int> expected1 = {5, 6, 7, 1, 2, 3, 4};
  vector<int> nums2 = {-1, -100, 3, 99};
  vector<int> expected2 = {3, 99, -1, -100};
  vector<int> nums3 = {-1};
  vector<int> expected3 = {-1};
  vector<int> nums4 = {1, 2};
  vector<int> expected4 = {1, 2};
  vector<int> nums5 = {1, 2};
  vector<int> expected5 = {1, 2};
  solution.test(nums1, 3, expected1);
  solution.test(nums2, 2, expected2);
  solution.test(nums3, 2, expected3);
  solution.test(nums4, 0, expected4);
  solution.test(nums5, 2, expected5);
  return 0;
}