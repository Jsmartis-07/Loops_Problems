#include <iostream>

using namespace std;

int main() {
  for (int r = 1; r <= 6; r++) {
    for (int c=10; c<= 10+r-1; c++) {
      cout << c << " ";
    }
    cout << endl;
  }

  return 0;
}
