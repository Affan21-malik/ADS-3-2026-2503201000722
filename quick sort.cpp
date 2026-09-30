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

// pivot last mai fix

/*

#include <iostream>
using namespace std;

int partition(int a[], int low, int high)
{
    int pivot = a[high];   // LAST element as pivot
    int i = low;
    int j = high - 1;

    while(i <= j)
    {
        while(i <= j && a[i] <= pivot)
        {
            i++;
        }

        while(j >= i && a[j] > pivot)
        {
            j--;
        }

        if(i < j)
        {
            swap(a[i], a[j]);
        }
    }

    swap(a[i], a[high]);

    return i;
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

*/


// pivot at mid 


/*


#include <iostream>
using namespace std;

int partition(int a[], int low, int high)
{
    int mid = (low + high) / 2;

    // Middle element ko pivot banaya
    // Pivot ko starting position par le aaye
    swap(a[low], a[mid]);

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

*/







// pivot at random 





/*


#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int partition(int a[], int low, int high)
{
    // Random index generate
    int randomIndex = low + rand() % (high - low + 1);

    // Random element ko starting position par le aaye
    swap(a[low], a[randomIndex]);

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
    srand(time(0));

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


*/