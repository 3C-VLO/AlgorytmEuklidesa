#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    while (a * b != 0)
    {
        if (a > b)
            a = a % b;
        else
            b = b % a;
    }

    cout << a + b;

    return 0;
}
