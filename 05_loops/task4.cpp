#include <iostream>
#include <string>
using namespace std;

int main() {

  string response;

  while (true) {
    cout << "do you want mlre tea (y/n): ";
    cin >> response;

    if (response == "n") {
      break;
    }

    cout << "here is your another cup of tea. \n";
  }

  cout << "no more tea will served to you" << endl;

  return 0;
}
