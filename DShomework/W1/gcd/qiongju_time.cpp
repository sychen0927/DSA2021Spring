#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    int a0, b0, a, b, i, j;
    cin >> a0 >> b0;
    clock_t start_time = clock();
    for (i = 1; i <= 1000000; i++)
    {
        a = a0;
        b = b0;
        int m = a < b ? a : b;
    for (j = m; j >= 1; j--)
    {
        if ( a % j == 0 && b % j == 0 )
        break;
    }
    }
    clock_t end_time = clock();
    cout << j << endl;
    cout << "Running time is " << end_time-start_time << " ms";
    return 0;
}