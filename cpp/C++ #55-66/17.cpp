#include <iostream>
using namespace std;

// Write Your Function Here
int pricing(int phonePay , int UsephoneFromAll , int priceNewPhone , float taxes ){

    // Calc Just The New Phone
    int priceNew  = (phonePay - UsephoneFromAll) * priceNewPhone ;
    
    // Calc Just The Old Phone's
    int priceOld  = (priceNewPhone - 200 ) * UsephoneFromAll ;
    
    // Calc Price Old & New Phone's
    float allPrice = priceNew + priceOld;
    
    // Calc Taxes Price 
    float priceTaxes =  allPrice * (taxes / 100)  ;
    
    // Discount Taxes Price From All Price The Company
    return allPrice - priceTaxes ;
}

int main()
{
  cout << pricing(50, 10, 800, 20) << "\n"; // 30400
  return 0;
}