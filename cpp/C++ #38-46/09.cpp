#include <iostream>
#include <array>
using namespace std ;

int main(){

    array<int,6> nums ;

    nums= {10, 20, 30, 40, 20, 50};
    
    cout << sizeof(nums) / sizeof(int) << "\n";
    cout << nums.size() << "\n";
    

    return 0;
}