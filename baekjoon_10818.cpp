#include <iostream>
using namespace std;

int main()
{
    int N, a;
    cin >> N; // number of elements
    int min = 1000001, max = -1000001;

    for (int i = 1; i <= N; i++)
    {
        cin >> a; // number
        if (a < min)
        {
            min = a;
        }
        if (a > max)
        {
            max = a;
        }
    }
    cout << min << " " << max;
}
