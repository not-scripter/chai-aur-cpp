#include <iostream>
#include <string>
using namespace std;

int main() {
  string teaOrder;

  cout << "enter your tea order";
  getline(cin, teaOrder);

  if (teaOrder == "Green Tea") {
    cout << "you have ordered Green Tea" << endl;
  }

  return 0;
}
