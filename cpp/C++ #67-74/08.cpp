#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  vector<int> numbers = { 10, 20, 30, 40, 50 };
  vector<int>::iterator iter = numbers.begin();

  // Write Line Here
    advance(iter,2) ;
  cout << *iter << "\n"; // 30

  // Write Line Here
    advance(iter , 2) ;
  cout << *iter << "\n"; // 50

  // Write Line Here
    /*
        Because point iter Now in last Elements in vector index => 0
        Because he kept moving forward until he reached the end
        if i want giv up , i give up using negative value (Logic)
    */
    
    advance(iter , -3) ;
    cout << *iter << "\n"; // 20

  return 0;
}