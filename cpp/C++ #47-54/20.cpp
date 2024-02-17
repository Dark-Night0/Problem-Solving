#include <iostream>
using namespace std;

int main(){

    string names[] = {"Osama", "Ahmed", "Mahmoud", "Hagar", "Eman", "Salwa"};
    int size = sizeof (names) / sizeof(string);
    int count = 0 ;

    for (int i = 0 ; i < size ; i ++){
        for (int x = 0 ; names[i][x] != '\0' ; x++ )
            count ++ ;

        if (count == 5)
            cout<<names[i]<<endl;
            
        count = 0 ; 
    }

/*
// Output Needed
"Osama"
"Ahmed"
"Hagar"
"Salwa"
*/
    return 0;
}