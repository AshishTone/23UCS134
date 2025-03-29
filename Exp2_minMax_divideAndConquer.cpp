#include<iostream>

using namespace std;

int findMax(int arr[],int low,int high)
{
    if(low >= high)
        return arr[low];
    int mid = (low + high)/2;

    int max1 = findMax(arr,low,mid-1);
    int max2 = findMax(arr,mid+1,high);

    return max(max1,max2);
}

int findMin(int arr[],int low,int high)
{
    if(low >= high)
        return arr[low];
    int mid = (low + high)/2;

    int min1 = findMin(arr,low,mid-1);
    int min2 = findMin(arr,mid+1,high);

    return min(min1,min2);
}

int main()
{
    int arr[] = {21,23,45,456,323,346,876,34,232,879,232,3};
    cout<<"Maximum of the array is: "<<findMax(arr,0,((sizeof(arr)/sizeof(arr[0]))-1))<<endl;
    cout<<"Minimum of the array is: "<<findMin(arr,0,((sizeof(arr)/sizeof(arr[0]))-1))<<endl;

    return 0;
}