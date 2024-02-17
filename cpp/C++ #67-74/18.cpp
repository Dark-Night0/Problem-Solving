#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  vector<int> firstnumbers = { 10, 30, 50, 70 };
  vector<int> secondnumbers = { 20, 40, 60, 80 };

    vector<int> newVector ;
    //  A know  After Marge Do Not Need Sorting :)
    // merge(firstnumbers.begin() , firstnumbers.end() , secondnumbers.begin() , secondnumbers.end() , back_inserter(newVector)) ;


    newVector.insert(newVector.end() , secondnumbers.begin() , secondnumbers.end()) ;
    newVector.insert(newVector.end() , firstnumbers.begin() , firstnumbers.end()) ;

    sort(newVector.begin() , newVector.end()) ;

    for (int &i : newVector ){
        cout<<i<<endl;
    }

  return 0;
}

// Output Needed
/*
    10
    20
    30
    40
    50
    60
    70
    80
*/