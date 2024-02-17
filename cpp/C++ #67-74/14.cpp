#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  vector<int> nums = { 5, 4, 3, 2, 1 };

  // Method One
    // reverse(nums.begin() , nums.end()) ;

  // Method Two
    
    // int x = nums.front() ;
    // nums.at(0) = nums.back() ;
    // nums.at(nums.size() - 1) = x ;
    
    // x = nums.at(nums.size() -2 ) ;
    // nums.at(nums.size() -2 )  = nums.at(1) ;
    // nums.at(1) = x ;

  // Method Three -> Use Swap + Loop For Challenge
  size_t size = nums.size() ;
  
  for (size_t i = 0; i < size / 2; ++i) {
        std::swap(nums[i], nums[size - i - 1]);
    }
  
  for (int i : nums)
  {
    cout << i << "\n";
  }

  return 0;
}

// Needed Output
/*
    1
    2
    3
    4
    5
*/