#include <iostream>
using namespace std;
bool binarySearch(int arr[],int key ,int right, int left)

{
    if (right >= left)
        {
    int mid = (left+right)/2;
    if (arr[mid]== key)
    {
        return true;
    }
    else if (arr[mid]< key)
    {
      return binarySearch (arr,mid+1, right, key);
    }
    else
    {
        return binarySearch(arr,mid-1, left, key);
    }
}
return false;
}
int main ()
{
    int n, key;
    cin >> n>>key;
    int arr[n];
    for ( int i=0; i<n; i++ )
    {
        cin >> arr[i];
    }
    cout << binarySearch(arr,0, n-1,key );

    return 0;
}



