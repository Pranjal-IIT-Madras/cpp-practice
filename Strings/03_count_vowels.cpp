#include <iostream>
using namespace std;

int main()
{
    string ok;

    cin >> ok;

    int count = 0;

    for (int i = 0; i < ok.length(); i++)
    {
        if (ok[i] == 'a' ||
            ok[i] == 'e' ||
            ok[i] == 'i' ||
            ok[i] == 'o' ||
            ok[i] == 'u')
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
