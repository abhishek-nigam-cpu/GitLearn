#include <iostream>
using namespace std;
bool checkPrime(int num)
{
    if (num <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= num; ++i)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    cout<<checkPrime(5)<<endl;
    cout<<checkPrime(10)<<endl;
    return 0;
}