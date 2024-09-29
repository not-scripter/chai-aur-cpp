#include "iostream"
using namespace std;

// NOTE: lamda function

int main() {

  // lamda
  auto preparedChai = [](int cups) {
    cout << "preparing " << cups << "of tea.." << endl;
  };

  preparedChai(4);

  return 0;
};
