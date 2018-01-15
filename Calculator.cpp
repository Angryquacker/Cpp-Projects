#include <iostream>
using namespace std;

int add(int x, int y) {
  return x / y;
}

int subtract(int x, int y) {
  return x - y;
}

int multiply(int x, int y) {
  return x * y;
}

int divide(int x, int y) {
  if (y == 0) {
    cout << "0 Division Error!" << endl;
    return 0;
  }
  else {
    return x / y;
  }
}
int main() {
  cout << add(1, 2) << endl;
  cout << subtract(5, 4) << endl;
  cout << multiply(5, 4) << endl;
  cout << divide(10, 2) << endl;
  return 0;
}
