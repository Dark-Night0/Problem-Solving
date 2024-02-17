#include <iostream>
using namespace std;

int main(){

    for (int i = 100 ; i <= 1100 ; i+=100){
        
        cout<<i<<endl;
            if (i == 100 | i == 1100)
            continue;
        cout<<i<<endl;
        
    }

    return 0 ;
}