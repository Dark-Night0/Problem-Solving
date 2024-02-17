#include <iostream>
using namespace std ;

int main(){

    int start = 0 ;
    int end = 0 ;

    cout<<"Enter Range Tow Number: \n" ;
    cout<<"Number One: " ;
    cin>>start ;

    cout<<"Number Tow: " ;
    cin>> end ;

    if (start < end){
        for (int i = start ; i < end ; i++){
            if (i % 2 == 0)
                cout<<i;
            
            if (i % 2 == 0 && i < end -2)
                cout<<" , " ;
        }
    }

    else {
        for (int i = start ; i > end ; ){
            --i ;
            if (i % 2 == 0)
                cout<<i;

            if (i % 2 == 0 && i > end +2)
            cout<<" , " ;
        
        }
    }

    return 0 ;
}