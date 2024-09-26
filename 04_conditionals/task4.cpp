#include <iostream>
using namespace std;

int main() {

  int choice;
  double price;

  cout << "select tea option";
  cout << "1, Green tea \n";
  cout << "2, Lemon tea \n";
  cout << "3, Long tea \n";
  cout << "Enter your choice in number \n";

  cin >> choice;

  switch (choice) {
  case 1:
    price = 2.0;
    cout << "you selected green tea" << price << endl;
    break;
  case 2:
    price = 3.0;
    cout << "you selected lemon tea" << price << endl;
    break;
  case 3:
    price = 4.0;
    cout << "you selected long tea" << price << endl;
    break;
  default:
    cout << "invalid choice" << endl;
    break;
  }

  return 0;
}
