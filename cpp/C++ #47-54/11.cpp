#include <iostream>
using namespace std;

int main(){

    // Friends Array
string friends[] = {"Ahmed", "Osama", "Ameer"};

int size = sizeof(friends) / sizeof(string) ;
int count = 0 ;

    for (int i = 0 ; i < size ; i++){
        for (int x = 0 ;; x++){
            if (friends[i][x] == '\0')
                break;

            

        }
        cout<<endl;
    }

/*
// Output Needed
=========
= Ahmed =
==================
== A, h, m, e, d =
==================

=========
= Osama =
==================
== O, s, a, m, a =
==================

=========
= Ameer =
==================
== A, m, e, e, r =
==================
*/

    return 0 ;
}