#include <iostream>
using namespace std;

// Write Your Function Here
int firstnegative(int arr[] , int size) {
    // Default Big Number Because Edit in This Value 
    int maxNeg = -INT8_MAX ;
  
  for (int i = 0 ; i < size ; i ++){

  if (arr[i] < 0 && arr[i] > maxNeg)
      maxNeg = arr[i];

  }
  return maxNeg ;

}
int main()
{
  int numbers[] = { -10, -20, 15, 100, 10, 5, -50, 0, -5, -10 }; // -5
  int numssize = sizeof(numbers) / sizeof(numbers[0]);

  cout << firstnegative(numbers, numssize) << "\n";
  return 0;
}