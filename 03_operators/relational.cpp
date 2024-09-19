#include <iostream>

using namespace std;

int main() {
  int cups;
  cout << "enter the number of cups you havr: ";
  cin >> cups;

  if (cups >= 20) {
    cout << "you will get a GOLD badge" << endl;
  } else if (cups >= 10 && cups < 20) {
    cout << "you will get a SILVER badge" << endl;
  } else {
    cout << "no badge for you, soo sorry" << endl;
  }

  return 0;
}
