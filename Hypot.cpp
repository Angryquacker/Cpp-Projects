#include <iostream>
#include <cmath>
using namespace std;

int main() {
  float sideX;
  float sideY;
  cin >> sideX;
  cin >> sideY;
  float hypo = hypot(sideX, sideY);
  cout << hypo << endl;
  return 0;
}
