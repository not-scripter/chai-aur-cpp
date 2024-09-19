#include <iostream>

using namespace std;

int main() {
  float teaPrise = 49.99;
  int roundedPrice = (int)teaPrise;

  int teaQuantity = 2;
  int totalPrice = teaPrise * teaQuantity;

  cout << totalPrice << endl;

  return 0;
}
