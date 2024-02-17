#include <iostream>
using namespace std;

// Write Your Functions Here
float avg(int money [], int mosize){

    float add = 0 ;
    for (int i = 0 ; i < mosize ; i++){
        add+=money[i] ;
    }
    return add / mosize ;
}
int main()
{
  int money[] = { 10, 20, 15, 25, 30, 35 };
  int monsize = sizeof(money) / sizeof(money[0]);
  
  cout << avg(money, monsize) << "\n"; // 22.5
  return 0;
}