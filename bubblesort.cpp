#include <iostream>
using namespace std;

void bubblesort(int a[], int n)
{
    int temp;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int a[100], n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    bubblesort(a, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}


/*PS C:\Users\Student\Desktop\Avdhoot124> cd "c:\Users\Student\Desktop\Avdhoot124\" ; if ($?) { g++ bubblesort.cpp -o bubblesort } ; if ($?) { .\bubblesort }
Enter number of elements: 10
Enter 10 elements: 82 52 5 41 95 35 25 15 51 15
Sorted array: 5 15 15 25 35 41 51 52 82 95 
PS C:\Users\Student\Desktop\Avdhoot124> */