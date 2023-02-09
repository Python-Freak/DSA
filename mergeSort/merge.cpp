#include <iostream>
#include <cstdlib>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = s + (e - s) / 2;
    int i = s;
    int j = mid + 1;
    while (i <= mid && j <= e)
    {
        if (arr[i] < arr[j])
        {
            i++;
        }
        else
        {
            swap(arr[j++], arr[i]);
        }
    }
}

void mergeSort(int *arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int mid = s + (e - s) / 2;

    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);
    merge(arr, s, e);
}

template <typename T>
void printArr(T *arr, int n)
{
    cout << "[ ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\b ] " << endl;
}

int main(int args, char *argc[])
{
    // CODE HERE
    int arr[] = {3, 4, 1, 6, 2, 5, 7};
    int n = 7;
    mergeSort(arr, 0, n - 1);
    printArr<int>(arr, n);
    return 0;
};