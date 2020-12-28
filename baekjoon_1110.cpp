#include <iostream>
using namespace std;

int main()
{
    int b, a0, n = 0;
    cin >> a0;
    int a = a0;

    while (true)
    {        
        b = (a / 10) + (a - (a / 10) * 10); // summation of each number
        a = (a - (a / 10) * 10) * 10 + (b - (b / 10) * 10); // new a
        n = n + 1;
        if (a == a0)
        {
            break;
        }
    }
    cout << n;
}
