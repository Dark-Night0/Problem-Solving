#include <iostream>
using namespace std ;
int main(){

    int index = 10;
    int jump = 2;

for (;;)
{
  // Write Your Code Here
    if (index == jump)
        break;

    cout<<index<<endl;
    index-=jump ;
    
}

/*
// Output Needed
10
8
6
4
*/

    return 0;
}