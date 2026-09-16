#include <iostream>
using namespace std;

int partition(int a[], int low, int high)
{
    int pivot = a[low];
    int i = low + 1;
    int j = high;

    while(i <= j)
    {
        while(i <= high && a[i] <= pivot)
        {
            i++;
        }

        while(j >= low && a[j] > pivot)
        {
            j--;
        }

        if(i < j)
        {
            swap(a[i], a[j]);
        }
    }

    swap(a[low], a[j]);

    return j;
}

void quicksort(int a[], int low, int high)
{
    if(low < high)
    {
        int pivot = partition(a, low, high);

        quicksort(a, low, pivot - 1);
        quicksort(a, pivot + 1, high);
    }
}

int main()
{
    int n;
    int a[15];

    cout << "Enter the size: ";
    cin >> n;

    cout << "Enter array elements: ";

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    quicksort(a, 0, n - 1);

    cout << "Sorted array: ";

    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}