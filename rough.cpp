#include <bits/stdc++.h>
using namespace std;
int BS(int arr[], int l, int r, int it)
{

    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (arr[mid] == it)
            return mid;
        else if (arr[mid] > it)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int array[] = {1, 9, 4, 6, 3, 8, 5, 7};
    int size = sizeof(array) / sizeof(array[0]);
    int item;
    cin >> item;
    sort(array, array + size);
    for (int j = 0; j < size; j++)
        cout << array[j] << " ";
    int i = BS(array, 0, size - 1, item);
    if (i >= 0)
    {
        cout << "Found at Index " << i << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
}