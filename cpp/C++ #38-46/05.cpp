#include <iostream>
using namespace std ;
int main(){

    int vals[] = {100, 200, 600, 200, 100};
    // int vals[] = {100, 200, 200, 100};
    // int vals[] = {100, 300, 600, 200, 100};

    int start = 0 ;
    int end = sizeof(vals) / sizeof(int) -1;

    if (vals[start] == vals[end]){
        if (vals[++start] == vals[--end])
            cout << "Array Is Palindrome\n" ;

        else 
            cout <<"Array Is Not Palindrome\n";
    }
    else 
        cout <<"Array Is Not Palindrome\n";
    
    return 0;
}