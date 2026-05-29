#include <iostream>
using namespace std;

int main()
{
    int arr[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> arr[i][j];
        }
    }

    int largest = arr[0][0];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (arr[i][j] > largest)
            {
                largest = arr[i][j];
            }
        }
    }

    cout << largest << endl;

    return 0;
}
