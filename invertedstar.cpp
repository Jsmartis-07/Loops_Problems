#include <iostream>

#include <iostream>
using namespace std;

int main() {
    int r, c;
    for (r = 1; r <= 5; r++) {
        for ( c=5; c >=r; c--) {
            
            cout <<"*"<< " ";
        }
        cout << "\n";
    }
    return 0;
}
