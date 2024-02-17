#include <iostream>
using namespace std;

int main(){
    // Friends Array
    string friends[] = {"Ahmed", "Mohamed", "Sayed", "Gamal"};
    int size = sizeof(friends) / sizeof(string);

    for (int i = 0 ; i < size ; i++){

        if (i == 0 || i == size -1 )
            continue;

        cout<<friends[i]<<endl;
    }

    int i = 0 ;
    // While Loop
    while ( i < size)
    {   
        if (i == 0 || i == size -1 ){
            i++ ;
            continue;
        }

        cout<<friends[i] <<endl;
        i++ ;
        
    }
    


/*
// Output Needed
"Mohamed"
"Sayed"
*/
    return 0;
}