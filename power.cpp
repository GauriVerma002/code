#include <iostream>
using namespace std;
void highest(int x, int y)
{
    int l = 1;
    for (int i = 0; i < y; ++i)
    {
        l *= x;
    }
    cout << "x raised power of y = " << l << endl;
}
int main()
{
    int n, p;
    cout << "enter number its power ";
    cin >> n >> p;
    highest(n, p);
    return 0;
}