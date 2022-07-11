#include <bits/stdc++.h>
using namespace std;
int BinarySearch(int arr[], int l, int r, int item)
{
    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        // if item is at mid
        if (arr[mid] == item)
            return mid;

        // If item greater, ignore left half, consider only right half
        if (arr[mid] < item)
            l = mid + 1;

        // If item is smaller, ignore right half, consider only left half
        else
            r = mid - 1;
    }

    // if we are able to reach here
    // means item wasn't present
    return -1;
}
int main()
{
    int array[] = {1, 5, 6, 3, 9, 0, 4};
    int size;
    size = sizeof(array) / sizeof(array[0]);
    sort(array, array + size);
    int item;
    cin >> item;
    int index = BinarySearch(array, 0, size - 1, item);
    if (index >= 0)
    {
        cout << "Found at index " << index << endl;
    }
    else
        cout << "Not Found" << endl;
}