#include <iostream>
using namespace std;

int main(){

    // For Loop
    int result  = 2 ;
    for (int i = 0 ; i < 7 ; i ++){
        cout<<result<<endl;
        result+=result ;
    }

    // While Loop

    int i = 0 ;
    result = 2 ;

    while (i < 7) {
        cout<<result<<endl ;
        result+=result;
        i++ ;
    }
    return 0 ;
}