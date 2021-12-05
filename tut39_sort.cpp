#include <iostream>
using namespace std;

void sort(int *a, int *b)
{
    int temp = 0;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{

    int n;
    cout << "Enter the size of array: " << endl;
    cin >> n;
    int arr[n];

    cout << "Enter the elements :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Your given array is: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    for (int j = 0; j < n; j++)
    {

        for (int i = 0; i < n; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                sort(&arr[i], &arr[i + 1]);
            }
        }
    }
    cout << endl;
    cout << "Array after sorting is : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}