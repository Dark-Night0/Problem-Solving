#include <iostream>
using namespace std;

int main(){
    short result = 30 ;
    // 1
    for (int i  = 10 ; i > 0 ; --i){
        cout<<result<<endl;
        result-=3 ;
    }
    
    cout<<"===========\n" ;
    
    // 2
    result = 30 ;
    for (int i  = 10 ; i > 0 ; --i){
        
        if (result % 2 !=0)
            cout<<result<<endl;
        
        result-=3 ;
    }

    return 0 ;
}