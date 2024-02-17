#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  vector<int> n1 = { 1, 2, 3 };
  vector<int> n2 = { 4, 5, 6 };

  // Your Merge Code Here
  /*
  U Can Usage This Code to Concatenation but in version 11 To up in C++
    vector<int> allvectors = n1 + n2 ;
  */
    vector<int> allvectors ;

    merge(n1.begin() , n1.end() , n2.begin() , n2.end() , back_inserter(allvectors)) ;


  for (int i : allvectors)
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
    6
*/