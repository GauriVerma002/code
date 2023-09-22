#include <iostream>
#include<iomanip>
using namespace std;
  int fact(int n)
  {
    int num=1;
    for(int i=1; i<=n; i++)
    {
      num=num*i;
    }
    return num;
  }
  int nCr(int n, int r)
  {
    int num=1;
    for(int i=n; i>r; i--)
    num*=i;
    return (num/fact(n-r));
  }

  void pascalTriangle(int n)
  {
    for(int i = 0; i<n; i++){
      for(int j = 0; j<(n-i-1); j++)
         cout <<setw(3)<< " ";
      for(int j = 0; j<(i+1); j++)
         cout <<setw(3)<< nCr(i, j) <<setw(3)<< " ";
      cout << endl;
    }
  }

  int main()
  {
    int n;
    cout << "Enter Number of lines: ";
    cin>>n;
    pascalTriangle(n);
    return 0;
  }