#include <iostream>

#include <iostream>
using namespace std;

int main() {
    int r, c;
    for (r = 1; r <= 5; r++) {
        for (c = 1; c <= 5; c++) {
            cout << c*c*c<< " ";
        }
        cout << "\n";
    }
    return 0;
}
