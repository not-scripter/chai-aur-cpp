#include "iostream"
using namespace std;

// NOTE:pass by reference

void pourChai(int &cups) {
  cups = cups + 5;
  cout << "poured cups: " << cups << endl;
}

int main() {
  int chaiCups = 2;
  pourChai(chaiCups);
  cout << "total cups are" << chaiCups << endl;

  return 0;
};
