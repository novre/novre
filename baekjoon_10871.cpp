#include <iostream>
using namespace std;

int main()
{
    int N, X, a;
    cin >> N >> X;
    
    for (int i = 1; i <= N; i++)
    {
        cin >> a;
        if (a < X)
        {
            cout << a << " ";
        }
    }
}
