#include <iostream>
using namespace std;

int main() {
    int n;
    std::cout << "Enter a value for n: ";
    std::cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <=i; j++)
        {
           cout<<"*"<<" ";
        }
        cout<<endl;
        for ( int j = 1;j<=n-i; j++)
        {
            /* code */
            cout<<"  ";
        }
        
}
}
