#include <iostream>

#include <iostream>
using namespace std;

int main() {
    int r, c;
    for (r = 4; r >=1; r--) 
    {
        char name='A'+(r-1);
        for ( char c='A'; c<=name; c++) {
            
            cout <<c<< " ";
        }
        cout << "\n";
    }
    return 0;
}
