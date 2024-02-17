#include <iostream>
using namespace std ;

int main (){

    // Friends Array
    string friends[] = {"Ahmed", "Mohamed", "ameer", "Ashraf", "Amany"};
    int size = sizeof(friends) / sizeof(string);
    
    // For Loop
    for (int i = 0 ; i < size ; i++){

        if (friends[i][0] == 'A')
            cout<<friends[i]<<endl;
        
        
    }
    
    // While Loop
    int i = 0 ;
    while(i < size){

        if (friends[i][0] == 'A'){
            cout<<friends[i]<<endl;
        }
        
        i++ ;
    }
/*
// Output Needed
"Ahmed"
"Ashraf"
"Amany"
*/
    return 0;
}