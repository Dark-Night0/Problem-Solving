#include <iostream>
using namespace std ;

int main (){
    int check = 25;
    int nums[]{20, 25, 30, 70, 100};
    // int nums[]{20, 35, 30, 70, 100};
    // int nums[]{40, 20, 30, 70, 100};
    
    int last = sizeof(nums) / sizeof(int) -2;

    if (nums[0] > check)
        cout<< "{"<<nums[0]<<"}" << " + " << "{"<< nums[last] <<"}" <<" = " << nums[0]+nums[last];
        

    else if (nums[1] > check)
        
        cout<< "{"<<nums[1]<<"}" << " + " << "{"<< nums[last] <<"}" <<" = " << nums[1]+nums[last];

    else if (nums[2] > check)
        
        cout<< "{"<<nums[2]<<"}" << " + " << "{"<< nums[last] <<"}" <<" = " << nums[2]+nums[last];

    return 0 ;
}