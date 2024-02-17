#include <iostream>
using namespace std ;
int main (){
    int end = 10 ;
    int count = 0 ;
    for (int i = 0 ; i <= end;i++){

        cout<<i<<endl;
    }

    while(count <= end){
        cout<<count<<endl;
        count++;
    }
    
    count = 0 ;

    do {

        cout<<count<<endl;
        count++;
    }while(count <= end) ;

    return 0 ;
}