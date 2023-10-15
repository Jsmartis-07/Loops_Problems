#include <iostream>

#include <iostream>
using namespace std;

int main() {
    int r, c;
    for (r = 1; r <= 5; r++) {
        for ( c=1; c <= r; c++) {
            char name='a'+(r-1);
            cout << name<< " ";
        }
        cout << "\n";
    }
    return 0;
}
