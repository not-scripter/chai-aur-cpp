#include <iostream>

using namespace std;

int main() {
  int teaBags;

  cout << "enter how many tea bags you have: ";
  cin >> teaBags;

  if (teaBags < 20) {
    teaBags += 10;
  }

  cout << "now you have 10 extra bags of tea, cheers!";

  return 0;
}
