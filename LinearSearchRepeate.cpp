#include <bits/stdc++.h>
using namespace std;
void LinearSearch(int arr[], int n, int item)
{
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        if (item == arr[i])
        {
            cout << "Found at index " << i << endl;
            count++;
        }
        else if (i == n - 1 && count != 0)
        {
            return;
        }
    }
    cout << "Not Found" << endl;
}
int main()
{
    int array[] = {1, 7, 8, 1, 6, 8, 1, 9, 2};
    int i;
    cin >> i;
    int size = sizeof(array) / sizeof(array[0]);
    LinearSearch(array, size, i);
}