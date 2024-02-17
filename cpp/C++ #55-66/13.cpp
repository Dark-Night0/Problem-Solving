#include <iostream>
using namespace std;

// Write Your Function Here
string greeting(string name , string gender=""){

    if (gender == "Male")
        return "Hello Mr "  + name ;

    else if (gender == "Female")
        return "Hello Miss "  + name ;
    
    else 
        return "Hello " + name ;

}

int main()
{
  cout << greeting("Osama", "Male") << "\n"; // Hello Mr Osama
  cout << greeting("Eman", "Female") << "\n"; // Hello Miss Eman
  cout << greeting("Sameh") << "\n"; // Hello Sameh


  return 0;
}