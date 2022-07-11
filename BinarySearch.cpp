#include <bits/stdc++.h>
using namespace std;
int BinarySearch(int arr[], int l, int r, int item)
{
    int mid;
    mid = (l + r) / 2; // or l+(r-l)/2
    if (arr[mid] == item)
    {
        return mid;
    }
    else if (arr[mid] > item)
    {
        return BinarySearch(arr, l, mid - 1, item);
    }
    else
        return BinarySearch(arr, mid + 1, r, item);

    return -1;
}
int main()
{
    int array[] = {3, 5, 2, 7, 8, 9, 0, 4};
    int size = sizeof(array) / sizeof(array[0]);
    int it;
    cin >> it;
    sort(array, array + size);
    int index = BinarySearch(array, 0, size - 1, it);
    if (index >= 0)
        cout << "Found at Index " << index << endl;
    else
        cout << "NOt Found";
}