#include <iostream>
using namespace std;

int main() {
  int teaCups;

  cout << "enter tge number of vups of tea to serve: ";
  cin >> teaCups;

  // while loop
  while (teaCups > 0) {
    teaCups--;
    cout << "serving a cup of tea \n" << teaCups << endl;
  }

  cout << "all tea cups are served";

  return 0;
}
