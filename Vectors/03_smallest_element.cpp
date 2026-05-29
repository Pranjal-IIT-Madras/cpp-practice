#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;

    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    int smallest = arr[0];

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    cout << smallest << endl;

    return 0;
}
