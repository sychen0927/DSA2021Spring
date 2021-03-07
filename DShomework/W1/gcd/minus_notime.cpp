#include <iostream>
using namespace std;
int main()
{
    int a, b, m, i;
    cin >> a >> b;
    while ( a != b)
    {
        m = a > b ? (a-b) : (b-a);
        a = a < b ?  a : b;
        b = m;
    }
    cout << a << endl;
    return 0;
}