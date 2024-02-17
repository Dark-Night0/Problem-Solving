#include <iostream>
using namespace std;

// Write Your Function Here
int minpositive(int arr[] , int size){
  
// Default Big Number Because Edit in This Value 
  int minPos = INT8_MAX ;

  for (int i = 0 ; i < size ; i ++){

  if (arr[i] > 0 && arr[i] < minPos)
      minPos = arr[i];

  }

  return minPos ;
}
int main()
{
  int numbers[] = {-10, 2, -20, 15, 100, 10, 5, -50, 0 }; // 5
  int numssize = sizeof(numbers) / sizeof(numbers[0]);

  cout << minpositive(numbers, numssize) << "\n";
  return 0;
}