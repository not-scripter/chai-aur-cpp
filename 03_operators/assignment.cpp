#include <iostream>

using namespace std;

int main() {
  int teaBags;

  cout << "enter the number of tea bags you have: ";
  cin >> teaBags;

  if (teaBags < 10) {
    // teaBags = teaBags + 5;
    teaBags += 5;
  }
  cout << "your total bags of tea are: " << teaBags;

  return 0;
}
