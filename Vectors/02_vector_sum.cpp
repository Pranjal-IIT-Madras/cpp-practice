#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    int sum = 0;

    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
    }

    cout << sum << endl;

    return 0;
}
