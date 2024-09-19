#include <iostream>

using namespace std;

int main() {
  float profitPercentage = 10;
  float ppDecimal = 1 + (profitPercentage / 100);
  float baseTeaPrice = 9.99;
  int roundedPrice = (int)baseTeaPrice;

  float teaQuantity;

  cin >> teaQuantity;

  int totalPrice = roundedPrice * teaQuantity * ppDecimal;

  cout << totalPrice << endl;

  return 0;
}
