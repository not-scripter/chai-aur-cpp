#include <iostream>

using namespace std;

int main() {
  int cups;
  double pricePerCup, totalPrice, discountedPrice;

  cout << "enter the cups of tea";
  cin >> cups;
  cout << "enter the price per cup";
  cin >> pricePerCup;

  totalPrice = cups * pricePerCup;

  if (totalPrice > 100) {
    discountedPrice = totalPrice - (totalPrice * 0.05);
    cout << "discountedPrice is " << discountedPrice << endl;
  } else {
    cout << "totalPrice is " << discountedPrice << endl;
  }

  return 0;
}
