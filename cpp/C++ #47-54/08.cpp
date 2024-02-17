#include <iostream>
using namespace std;

int main(){
    
    int result = 2 , adding = 2 ;

    // For Loop
    for (int i = 0 ; i < 6 ; i ++){
        cout<<result<<endl;
        result+=result + adding ;
    }

    int i = 0 ;
    result = 2 ;
    
    // While Loop
    while (i < 7){
        cout<<result<<endl;
        result+=result + adding ;
        i++;

    }

    return 0;
}