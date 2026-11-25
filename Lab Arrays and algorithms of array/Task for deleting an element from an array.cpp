#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5;
    int position;

    cout<<"Old Array: ";
    for (int i = 0; i < n; i++)
    {
    cout << arr[i] << " ";
    }

    cout << "\nEnter the position to delete: ";
    cin >> position;

    if (position < 0 || position >= n)
    {
    cout<<"Invalid position!";
    }
    else
    {
    
    for (int i = position; i < n - 1; i++)
    {
    arr[i] = arr[i + 1];
    }

    n--;

    cout<<"Updated Array: ";
    for (int i = 0; i < n; i++)
    {
    cout<<arr[i]<< " ";
    }
    }

    return 0;
}
