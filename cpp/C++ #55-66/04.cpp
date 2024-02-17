#include <iostream>
using namespace std;

// Your Function Here
int calculation(int n1 , int n2 , int n3) ;
int calculation(int n1 , int n2 ) ;
int calculation(int n1)  ;


int main()
{
  cout << calculation(50, 100, 150) << "\n"; // 300
  cout << calculation(100, 50) << "\n"; // 300
  cout << calculation(100) << "\n"; // 300
  return 0;
  }

int calculation(int n1 ) {
    int area =  300 - n1;
    return n1  + area ;
}

int calculation(int n1 , int n2 ) {
    int area =  300 - (n1 + n2);
    return n1 + n2 + area ;
}

int calculation(int n1 , int n2 , int n3) {
    return n1 + n2 + n3 ;
}