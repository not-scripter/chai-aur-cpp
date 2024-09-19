#include <iostream>
#include <string>

using namespace std;

int main() {
  string userTea;
  int teaQuantity;

  cout << "what would you like to order ?\n";
  getline(cin, userTea);
  cout << "how many cups of" << userTea << "would you like to have ? \n";
  cin >> teaQuantity;

  cout << userTea << teaQuantity << endl;

  return 0;
}
