#include <iostream>
#include <cmath> 
using namespace std;

// Way 1
// void thepower(int num , int base ){

//     int result = 1 ;
//     for (int i = 0 ; i < base ; i ++){
//         result *= num ;
//     }
//     cout<< result ;
// }

// Way 2
// void thepower(int num , int base ){
    
//     cout<<pow(num , base) ;

// }

// way 3

int thepower(int num , int base ){

    if (base == 1 )
        return num ;
    
    cout<< base <<endl;

    return num *  thepower(num , base -1 ) ;
}
// 2 * (fn(num , 4))
// 2 * ( 2 * fn(num , 3))
// 2 * ( 2 * (2 * (fn(num , 2 ) ) ) )
// 2 * ( 2 * (2 * ( 2 * (fn(num , 1) ) ) )  return 2 from fn(num,1) because if condition 


int main(){

      cout <<thepower(2, 5); // 32


    return 0 ;
}