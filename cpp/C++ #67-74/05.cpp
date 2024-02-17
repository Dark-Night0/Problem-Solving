#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  vector<int> numbers = { 10, 20, 30, 40, 50, 60, 70, 80 };
  vector<int>::iterator it = numbers.begin();
  

  // Write Method One
  advance(it,sizeof(int)) ;

  // Write Method Two
  it = numbers.begin() + sizeof(int);

  // Write Method Three
  it = numbers.end() - sizeof(int) ;
  
  cout << *it << "\n"; // 50
  return 0;
}