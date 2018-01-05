/*
 * Leetcode problem 26 by Christian Stigen Larsen
 *
 * I wanted to eliminate edge cases implicitly, i.e. I wanted to avoid things
 * like `if ( nums.empty() ) ...`. Also, deleting inside a vector is inherently
 * expensive, because of memmovs, so it would actually be better to keep a
 * third iterator (plus a count variable) and put the next good value in there
 * and just move along (that's probably why the solution allows additional
 * items after at the end of the list).
 *
 * All in all, I think this solution is vastly inferior to the one given in the
 * solution. Whatever.
 */

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      auto a = nums.begin();

      while ( a < nums.end() ) {
        auto b = a + 1;
        while ( b < nums.end() && *a == *b )
          ++b;
        a = 1 + nums.erase(a, b - 1);
      }

      return nums.size();
    }
};

int main() {
  vector<int> nums = {1, 1};
  Solution s;
  int count = s.removeDuplicates(nums);
  cout << count << endl;
  for ( auto i : nums )
    cout << i << ", ";
  cout << endl;
  return 0;
}
