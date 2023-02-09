#include <iostream>
#include <cstdlib>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

int findMin(int *arr, int s, int e)
{
    int min = arr[s];
    int minInd = s;
    for (int i = s; i < e; i++)
    {
        if (arr[i] < min)
        {
            minInd = i;
            min = arr[i];
        }
    }
    return minInd;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        int min = findMin(arr, i, n);
        swap(arr[i], arr[min]);
    }
}

void printArr(int *arr, int n)
{
    cout << "[";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << "\b\b]" << endl;
}

int main(int args, char *argc[])
{
    // CODE HERE
    int a[4] = {33, 21, 77, 12};
    selectionSort(a, 4);
    printArr(a, 4);
    return 0;
};