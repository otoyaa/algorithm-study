#include <iostream>
using namespace std;

int search(int arr[], int n, int number_target)
{
    int i; // create index variable
    for (i = 0; i < n; i++)
        if (arr[i] == number_target)
            return i;
    return -1;
}

int main(void)
{
    int arr[] = {2, 0, 1, 4, 10, 4, 7, 77, 23, 3}; // create arr
    int n = sizeof(arr) / sizeof(arr[0]);          // same of len() in python
    int x = 10;

    int result = search(arr, n, x);
    (result == -1)
        ? cout << "Not found " << x << " in array." << endl
        : cout << "Finded " << x << " at index " << result << endl;

    return 0;
}