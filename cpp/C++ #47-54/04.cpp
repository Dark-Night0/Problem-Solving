#include <iostream>
using namespace std ;
int main(){
    // For Loop
    for (int i = 0 ; i < 20 ; i++){
        if (i % 2 == 0 || i == 0)
            cout<<i<<endl;
    }

    // While Loop
    int i = 0 ; 
    while (i < 20)
    {
        if (i % 2 == 0 || i == 0)
           cout<<i<<endl;

        i++ ;
    }
    
    return 0 ;
}