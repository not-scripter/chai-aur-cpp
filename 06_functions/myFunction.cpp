// returnType functionName(parameters){
// functiknBody
// }

#include <iostream>
#include <string>
using namespace std;

int checkTempareture(int tempareture) { return tempareture; };

// decrayion of function
void serveChai(int cups);

void makeChai() { cout << "boiling water , adding tea, straining..."; };

// function overloading && default parameter
void serveChai(string teaType = "masala tea") {
  int cups = 8; // formal parameter
  cout << "serving " << teaType << endl;
}

int main() {

  int temp = checkTempareture(44);
  cout << temp;

  /* makeChai(); */
  /**/
  /* serveChai(3); */

  serveChai();

  return 0;
}

void serveChai(int cups) { cout << "serving" << cups << "of chai" << endl; }
