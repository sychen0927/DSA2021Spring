#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    int a0, b0, a, b, m, i;
    cin >> a0 >> b0;
    clock_t start_time = clock();
    for (i = 1; i <= 1000000; i++)
    {
        a = a0;
        b = b0;
        while ( a != b)
        {
            m = a > b ? (a-b) : (b-a);
            a = a < b ?  a : b;
            b = m;
        }
    }
    clock_t end_time = clock();
    cout << a << endl;
    cout << "Running time is " << end_time-start_time << " ms";
    return 0;
}