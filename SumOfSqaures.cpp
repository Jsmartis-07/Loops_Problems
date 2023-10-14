#include <iostream>

using namespace std;

int main() {
    int n,squa,sum;
    cout<<"enter natural no. n: ";
    cin>>n;
    // squa=n*n;
    sum=0;
    for (int i = 0; i < n; i++)
    {
        squa=i*i;
        sum=sum+squa;
        /* code */
    }
    cout<<"sum of sqaures of first n natural no. is: "<<sum;
}
    