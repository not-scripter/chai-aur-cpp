#include <iostream>

using namespace std;

int main() {
  bool isStudent;
  int cups;

  cout << "are you a student (1 for yes and 0 for no)";
  cin >> isStudent;
  cout << "how many cups of tea have you perchased ?";
  cin >> cups;

  if (isStudent || cups >= 50) {
    cout << "you are eligable for a fisvount";
  } else {
    cout << "you are not eligable for a fisvount";
  }

  return 0;
}
