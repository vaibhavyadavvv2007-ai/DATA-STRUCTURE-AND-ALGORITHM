#include <iostream>
#include <math.h>
using namespace std;
bool isprime(int n){
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n = 8;
    for (int i = 2; i <n; i++)
    {
        if (n % i == 0)
        {
            if(isprime(i) && (i!=2 && i!=3 && i!=5)){
                cout<<i;
                cout<<"false";
                return 0;
            }
        }
        cout<<"true";
        return 0;
    }
}
