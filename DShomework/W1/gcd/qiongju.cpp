#include <iostream>
using namespace std;
int main()
{
    int a, b, i;
    cin >> a >> b;
    int m = a < b ? a : b;
    for (i = m; i >= 1; i--)
    {
        if ( a % i == 0 && b % i == 0 )
        break;
    }
    cout << i;
    return 0;
}