#include <iostream>
using namespace std;

void fibo(int num)
{
   int n1=0,n2=1,n3=0;
   cout << n1 << " " << n2 << " ";
    for (int i = 2; i < num; ++i)
    {
        n3 = n1 + n2;
        cout << n3 << " ";
        n1 = n2;
        n2 = n3;
    }
}

int main()
{
    int num;
    cout << "Enter the number of elements: ";
    cin >> num;
    fibo(num);
    return 0;
}