#include <iostream>
using namespace std ;

int main (){

    // Edit Anything Except Values
int a = 100;
int b = 15001500;
double c = 100.54565746;

// Do Not Edit
cout << sizeof(a) << " Bytes\n"; // 2 Bytes
cout << sizeof((double)b) << " Bytes\n"; // 8 Bytes
cout << sizeof((long double)c) << " Bytes\n"; // 16 Bytes


    return 0 ;
}