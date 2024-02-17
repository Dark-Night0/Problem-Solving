#include <iostream>
#include <vector>
using namespace std;
int main(){

    vector<int> nums {100,200,300,400} ;
    //  1 Way 
    for (int i = 0 ; i < nums.size(); i++) {
        cout<<nums.at(i) <<endl;
    }

    cout<<"========\n" ;
    
    // 2 Way
    for(int &i : nums){
        cout<<i<<endl ;
    }
    
    cout<<"========\n" ;

    nums.push_back(500) ;
    cout<<"First Element Is: "<<nums.front() <<"\n";
    cout<<"Last Element Is: "<<nums.back() <<"\n";


    return 0 ;
}