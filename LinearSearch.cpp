#include <bits/stdc++.h>
using namespace std;
void LinearSearch(int arr[], int n, int item)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == item)
        {
            cout << "Found at Index " << i << endl;
            return;
        }
    }
    cout << "Not found" << endl;
}
int main()
{
    int arr[] = {1, 6, 4, 3, 9, 2};
    int n, item;
    cin >> item;
    n = sizeof(arr) / sizeof(arr[0]);
    LinearSearch(arr, n, item);
}