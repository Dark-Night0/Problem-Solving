#include <iostream>
using namespace std ;

int main(){

    int num ;

    cout << "Please Type A Number Between 0 And 150: ";
    cin >> num ;

    if (num >=1  && num < 10)
        cout << "00" << num <<endl;
        
    else if (num >= 10 && num < 100)
        cout << "0" << num <<endl;

    else if (num >= 100 && num < 150)
        cout << num <<endl;
    
    else 
        cout << "Please Type A Number Between 0 And 150: ";
    
    return 0 ;
}