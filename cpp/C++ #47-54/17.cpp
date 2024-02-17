#include <iostream>
using namespace std;

int main(){
    int end = 1000 ;

    for (int i = 1 ; i < end ; i++){
        if (i < 10)
            cout<<"00"<<i<<endl;

        else if (i < 100 && i > 9)
            cout<<"0"<<i<<endl;
        
        else 
            cout<<i<<endl;
    }

    return 0 ;
}