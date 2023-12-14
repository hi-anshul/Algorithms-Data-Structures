#include <iostream>

using namespace std;

int main()
{
    int r, i, n;

    for (n = 3240; n > 0;)
    {
        if (n > 0)
        {
            r = n % 10;
            n = n / 10;
            cout << r << endl;
        }
    }
}