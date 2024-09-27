#include <iostream>
#include <string>
using namespace std;

int main() {
  string response;

  do {
    cout << "do you want more tea (tes/no): ";
    getline(cin, response);
  } while (response != "no");

  return 0;
}
