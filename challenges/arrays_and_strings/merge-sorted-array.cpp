#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
  void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
  {
    if (n == 0)
      return;
    if (m == 0)
    {
      nums1 = nums2;
      return;
    }
    int l = m - 1, r = n - 1, i = nums1.size() - 1;
    int min = std::min(nums1[0], nums2[0]);

    while (i >= 0)
    {
      if (r < 0)
        break;
      else if (l < 0)
        while (r >= 0)
          nums1[i--] = nums2[r--];
      else if (nums1[l] > nums2[r])
      {
        nums1[i--] = nums1[l];
        nums1[l--] = min;
      }
      else
        nums1[i--] = nums2[r--];
    }
  }
};

int main()
{
  Solution solution;
  vector<int> nums1 = {1, 2, 3, 0, 0, 0};
  vector<int> nums2 = {2, 5, 6};
  solution.merge(nums1, 3, nums2, 3);
  for (int i = 0; i < nums1.size(); i++)
    cout << nums1[i] << ", ";
  cout << endl;
  return 0;
}