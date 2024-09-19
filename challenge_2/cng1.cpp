#include <iostream>

using namespace std;

int main() {
  float gst = 0.10;
  int teaPacks, teaPackPrice, totalPrice, totalPriceWOGst;

  cout << "enter how many tea packs you want: ";
  cin >> teaPacks;
  cout << "enter the price per tea pack you want: ";
  cin >> teaPackPrice;

  totalPriceWOGst = teaPacks * teaPackPrice;
  totalPrice = totalPriceWOGst + (totalPriceWOGst * gst);

  cout << "Total price of the tea packs you selected is " << totalPrice << endl;

  return 0;
}
