#include <iostream>

using namespace std;

int main() {
  int teaBags;
  float memberFor;

  cout << "enter how many tea bags you want to buy: ";
  cin >> teaBags;
  cout << "enter when you joined as a member in days: ";
  cin >> memberFor;

  if (teaBags >= 12 || memberFor >= 365) {
    cout << "you are eligible for the offer, congo" << endl;
  } else {
    cout << "sorry but you are not eligible for the offer" << endl;
  }

  return 0;
}
