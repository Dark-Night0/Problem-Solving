#include <iostream>
#include <cmath>
using namespace std ;
int main(){

    int vals[]{100, 200, 250, 400, 200};
    // int vals[]{100, 200, 500, 400, 200};
    // int vals[]{100, 200, 600, 400, 200};

    int start = 0 ; 
    int end = sizeof(vals) / sizeof(int) -1;
    int middle = ceil(end / 2) ;

    if ((vals[start] + vals[end]) > vals[middle]){
        cout<<"First Number + Last Number Is Larger Than Middle Number\n";
        short res = vals[start] + vals[end] ;
        cout<< vals[start] << " + " << vals[end]<< " = " << res << endl;
        cout << res << " > " << vals[middle] ;
    }

    else if ((vals[++start] + vals[--end]) > vals[middle]){
        cout<<"Seound Number + Before Last Number Is Larger Than Middle Number\n";
        short res = vals[start] + vals[end] ;
        cout<< vals[start] << " + " << vals[end]<< " = " << res << endl;
        cout << res << " > " << vals[middle] ;
    }
    
    else {
        cout<<"Middle Number Is The Largest \n" ;
        cout<< vals[middle] ;
    }





    

    return 0 ;
}