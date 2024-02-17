#include <iostream>
using namespace std; 

int main(){
    // For Loop
    int result =10;

    for (int i= 0 ; i < 4 ; i++){
        cout<< result<<endl;
        result*=result ;
    }

    // While
    int i = 0 ;
    result = 10 ;

    while (i < 4){
        cout<<result <<endl;
        result*=result ;
        i++ ;
    }
    
    return 0 ;
}