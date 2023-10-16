#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // Print spaces for formatting
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
char name='E';
        // Print numbers in decreasing order
        for (int k=i; k >= 1; k--) {
            cout << name << " ";
            name--;
        }

        // Move to the next line for the next row
        cout << endl;
    }

    return 0;
}
