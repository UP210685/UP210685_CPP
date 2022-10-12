#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n  = 5;
    int i;
    for (int i = 0; i <= 10; i++)
    {
        if (i == 6)
        {   
            break;  //continue;
        }
        else
        {
            printf("numero %d \n", i);
        }
    printf("siguiente numero \n");    
    }
    printf(". . . Hecho \n");
    return 0;

}
