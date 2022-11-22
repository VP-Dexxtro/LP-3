#include<iostream>
#include<cmath>
using std::cout;
using std::cin;
using std::endl;

void fib(int n)
{
    int t1=0;
    int t2=1;
    int nexterm;
    for(int i=1; i<=n; i++){
        cout<<t1<<"   ";
        nexterm=t1+t2;
        t1=t2;
        t2=nexterm;
    }
    return;
}

int main()
{
    int n;
    cout<<"Enter the number of terms of fibonacci series: ";    cin>>n;
    cout<<"The first "<<n<<" terms of fibonacci series are:\n";
    fib(n);
    return 0;
}