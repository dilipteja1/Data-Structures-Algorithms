#include <iostream>
using namespace std;
typedef long long int ll;

void max_heapify(int arr[], int i, int n)
{
    int largest;
    int left = (2 * i)+1;
    int right = (2 * i )+ 2;
    if (left < n && arr[left] > arr[i])
        largest = left;
    else 
        largest = i;

    if (right < n && arr[right] > arr[largest])
        largest = right;
    if (largest != i)
    {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;
        max_heapify(arr, largest, n);
    }
}

void build_heap(int arr[], int n)
{
    for (int i = n / 2; i >= 0; i--)
    {
        max_heapify(arr, i, n);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    build_heap(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}