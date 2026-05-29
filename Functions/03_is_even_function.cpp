#include <iostream>
using namespace std;

bool isEven(int x)
{
    if (x % 2 == 0)
        return true;
    else
        return false;
}

int main()
{
    int x;

    cin >> x;

    if (isEven(x))
        cout << "Even" << endl;
    else
        cout << "Odd" << endl;

    return 0;
}
