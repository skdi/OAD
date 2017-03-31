#include <iostream>

using namespace std;

int potencia(int n, int k);

int main()
{
    int x, y;

    cin >> x >> y;

    cout << potencia(x, y) << endl;

    return 0;
}

int potencia(int n, int k)
{
    if (n == 0)
        return 1;
    else if (n == 1)
        return 1;
    else
        return n * potencia(n, k-1);
}
