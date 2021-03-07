#include <iostream>
using namespace std;
int main()
{
    int a, b, i = 1;
    cin >> a >> b;
    int bigger = a > b ? a : b;
    int smaller = a < b ? a : b;
    while (bigger % smaller != 0)
    {
        i = bigger % smaller;
        bigger = smaller;
        smaller = i;
    } 
    cout << i;
    return 0;
}
