#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n = 4;
    int i=0;
    int r;
    int f;


    while (i <= n)
    {
        if (i == 0)
        {
            r=1;
        }
        
        r = i*1;
        f = f+r;
        i = i+1;
    }
    printf("El resultado del factorial es %d", f);
    
    return 0;
}
