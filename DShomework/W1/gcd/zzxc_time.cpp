#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    int a0, b0, a, b, i = 1, j;
    cin >> a0 >> b0;
    clock_t start_time = clock();
    for (j = 1; j <= 1000000; j++)
    {
        a = a0;
        b = b0;
        int bigger = a > b ? a : b;
        int smaller = a < b ? a : b;
        while (bigger % smaller != 0)
    {
        i = bigger % smaller;
        bigger = smaller;
        smaller = i;
    }
    }
    clock_t end_time = clock(); 
    cout << i << endl;
    cout << "Running time is " << end_time-start_time << " ms";
    return 0;
}
