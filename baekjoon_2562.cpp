#include <iostream>
using namespace std;

int main()
{
    int a, l, max = 0, n = 0;

    for (int i = 1; i <= 9; i++)
    {
        cin >> a; // number
        n = n + 1;
        if (a > max)
        {
            max = a;
            l = n;
        }
    }
    cout << max << "\n" << l;
}
