#include <iostream>
using namespace std;

int doble(int a)
{
    int r;
    r = a * 2;
    return r;
}
int sumatoria(int n)
{
    int x = 0;
    int i=0;
    while (i <= n)
    {
        x = x + i;
        i = i + 1;
    }

    return x;
}

int main()
{
    int x = 10;
    int sum = sumatoria(x);
    int r = doble(x);
    cout << r << endl;
    cout << sum << endl;
    return 0;
}
