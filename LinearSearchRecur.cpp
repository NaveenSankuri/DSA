#include <bits/stdc++.h>
using namespace std;
int LinearSearch(int arr[], int index, int item)
{
    if (arr[index] == item)
    {
        return index;
    }
    else if (index == -1)
    {
        return -1;
    }
    return LinearSearch(arr, index - 1, item);
}
int main()
{
    int array[] = {3, 5, 1, 6, 9, 7};
    int i;
    cin >> i;
    int size;
    size = sizeof(array) / sizeof(array[0]);
    int index = LinearSearch(array, size - 1, i);
    if (index >= 0)
    {
        cout << "Found at index " << index << endl;
    }
    else
    {
        cout << "Not Found";
    }
    return 0;
}