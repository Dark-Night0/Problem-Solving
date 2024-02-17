#include <iostream>
using namespace std;

int main(){

    // Test Case 1
// int age = 18;
// int points = 450;

// Test Case 2
// int age = 20;
// int points = 450;

// Test Case 3
int age = 20;
int points = 650;

if (age > 18){
    cout << "Yes Age Is Ok" <<endl;
    if (points > 500 )
        cout << "Yes Points Is Ok" <<endl;
    else
        cout << "No Points Is Not Ok" <<endl;
}

else if (age <= 18 ){

    cout << "No Age Is Not Ok" <<endl;
    if (points > 500 )
        cout << "Yes Points Is Ok" <<endl;
    else
        cout << "No Points Is Not Ok" <<endl;
}

    return 0 ;
}