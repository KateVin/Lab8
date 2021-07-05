/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    char a;
    cout<<"Введите любой символ нижнего регистра = ";
    cin>>a;
    a=toupper(a);
    cout<<"Этот же символ в верхнем регистре = "<<a;
    return 0;
}
