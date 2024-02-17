#include <iostream>
using namespace std;

// Write Your Function Here
int books(int smBook_2 , int medBooks_4 , int bigBooks_6 , int shelf_20){
    
    int spaces =  shelf_20 * 20 - ((smBook_2 * 2) +  (medBooks_4 * 4) + (bigBooks_6 * 6 )) ;

    if (spaces > 0)
        return spaces ;
    
    return 0 ;
}

int main()
{
  cout << books(10, 4, 3, 4) << "\n"; // 26
  cout << books(10, 4, 3, 2) << "\n"; // 0
  return 0;
}