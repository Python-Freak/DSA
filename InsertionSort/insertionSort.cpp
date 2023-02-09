#include <iostream>
#include <cstdlib>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

void printArr(int *arr, int n)
{
    cout << "[";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << "\b\b]" << endl;
}

void insertionSort(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        int temp = arr[i];
        int j;
        for (j = i - 1; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }
}

int main(int args, char *argc[])
{
    // CODE HERE
    int a[4] = {33, 21, 77, 12};
    insertionSort(a, 4);
    printArr(a, 4);
    return 0;
};