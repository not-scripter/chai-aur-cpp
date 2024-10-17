#include <iostream>
#include <list>
#include <vector>
using namespace std;

class Chai {
  // data membrrs (attributes)
public:
  string teaName;
  int servings;
  vector<string> ingreadients;

  // Member fuction
  void displayChaiDetails() {
    cout << "tea name : " << teaName << endl;
    cout << "servings : " << servings << endl;
    cout << "ingreadients : ";

    for (string ingreadient : ingreadients) {
      cout << ingreadient << " ";
    }
    cout << endl;
  }
};

int main() {

  Chai chaiOne;

  chaiOne.teaName = "lemon tea";
  chaiOne.servings = 2;
  chaiOne.ingreadients = {"lemon", "sugar", "water"};

  chaiOne.displayChaiDetails();

  Chai chaiTwo;
  chaiTwo.teaName = "green tea";
  chaiTwo.servings = 3;
  chaiTwo.ingreadients = {"sugar", "water"};

  chaiTwo.displayChaiDetails();

  return 0;
}
