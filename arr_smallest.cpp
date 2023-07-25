#include <iostream>
using namespace std;
int main()
{
    int arr[] = {57, 54, 34, 23, 67};
    int n = sizeof(arr) / sizeof(arr[0]);
    int min_element = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min_element)
            min_element = arr[i];
    }
    cout << "The smallest element of array is: " << min_element;
}