/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n,i=10000,x;
    cout<<"Введите пятизначное число = ";
    cin>>n;
    while(n)
    {
        x = n/i;
        n=n%i;
        i= i/=10;
        cout<<x<<endl;
    }

    return 0;
}
