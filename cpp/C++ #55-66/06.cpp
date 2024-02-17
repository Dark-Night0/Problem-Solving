#include <iostream>
using namespace std;

// Write Your Function Here
string swapping(string wordSwap){

    string result = "";

    for (int i = 0 ; wordSwap[i] != '\0' ; i++){

        if (islower(wordSwap[i]) && wordSwap[i] != 'H' && wordSwap[i] != 'h')
            result+=char(toupper(wordSwap[i])) ;

        else if (isupper(wordSwap[i]) && wordSwap[i] != 'H' && wordSwap[i] != 'h' )
            result+=char(tolower(wordSwap[i])) ;
        
        else 
            result+= wordSwap[i];
    }
    return result ;
}
int main()
{
  cout << swapping("hero Of THe PROgramming") << "\n"; // hERO oF tHE proGRAMMING
  return 0;
}