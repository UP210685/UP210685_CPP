#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n=10;
    int r;
    double c;
    string bin="";

    if (n >= 0)
    {
        while (c <= 1)
        {

            n = n - c;
            c = n/2;
            r = n%2;
            bin = bin + "r";

        }
        cout<<bin<< endl;
        
    }
    
    
}
