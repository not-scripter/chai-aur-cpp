#include <iostream>
using namespace std;

int main() {

  int hour;

  cout << "enter tge current hour (0-23)";

  cin >> hour;

  if (hour >= 8 && hour <= 6) {
    cout << "tea shop is open";
  } else {
    cout << "tea shop is closed";
  }

  return 0;
}
