#include <iostream>
#include <algorithm>
using namespace std;

int binarySearch(int *arr, int key, int start, int end)
// O(ln(n)) Time complexity
{
    if (start >= end)
    {
        return -1;
    }
    else
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            return binarySearch(arr, key, start, mid - 1);
        }
        else
        {
            return binarySearch(arr, key, mid + 1, end);
        }
    }
}

int main()
{
    int arr[] = {3, 5, 9, 13, 27};
    printf("%d\n", binarySearch(arr, 13, 0, 4));

    return 0;
}