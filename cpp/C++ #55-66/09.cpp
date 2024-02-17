#include <iostream>
using namespace std;

// Write Your Function Here
int sumall(int arr[] , int size , int exculde){
    int result = 0 ;

    for (int i = 0 ; i  < size ; i++){
        if (arr[i] == exculde)
            continue ;
        result+=arr[i] ;
    }
    return result ;
}

int main()
{
  int numbers[] = { 13, 20, 3, 30, 5, 7, 40, 13 }; // 20 + 3 + 30 + 5 + 7 + 40 = 105
  int numssize = sizeof(numbers) / sizeof(numbers[0]);
  int noneed = 13;

    cout << sumall(numbers, numssize, noneed) << "\n";
    
  return 0;
}