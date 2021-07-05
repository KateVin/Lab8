/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int* create_mas(int size = 10)
{
    srand(time(NULL));
    int *m = new int[size];
    for(int i = 0; i < size; i++)
    {
        cout<<"m["<<i<<"] = ";
        cin>>m[i];
    }
    return m;
}

void sred()
{
    int n = 10;
    int* m = create_mas(n);

    int summ = 0;
    for (int i = 0; i < n; i++) {
        summ += m[i];
    }

    double srednee = summ / n;
    cout << "Среднее арифм. =  " << srednee << endl;
}

int main()
{
    sred();

    return 0;
}
