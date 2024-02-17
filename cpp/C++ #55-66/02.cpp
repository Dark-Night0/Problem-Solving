#include <iostream>
using namespace std ;

float money(float salary , int days){
    
    int weeks = days / 7 ;
    int total =  days - 2 * weeks;
    
    return salary / total ;
}
int main(){

    cout << money(2015, 21) << "\n"; // 134.333
    cout << money(4500, 40) << "\n"; // 150    
    
    return 0 ;
}