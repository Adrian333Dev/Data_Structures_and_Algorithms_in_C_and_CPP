#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution
{
public:
  bool containsDuplicate(vector<int> &nums)
  {
    set<int> repo;
    for (int n : nums)
    {
      if (repo.find(n) != repo.end())
        return true;
      repo.insert(n);
    }
    return false;
  }
};