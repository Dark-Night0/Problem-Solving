#include <iostream>
using namespace std ;

int main (){

    int nums[]{100, 300, 600, 900};
    string awards[]{"iPhone", "iPad", "PC", "Car"};

    if (nums[0] == 100)
        cout << "Number 100 Award Is: " << awards[0]<<endl ;
    
    if (nums[1] == 300)
        cout << "Number 300 Award Is: " << awards[1]<<endl ;

    if (nums[2] == 600)
        cout << "Number 600 Award Is: " << awards[2]<<endl ;

    if (nums[3] == 900)
        cout << "Number 900 Award Is: " << awards[3]<<endl ;

    return 0;
}