#include<iostream>

using namespace std;

int partition(int arr[],int low,int high)
{
    int pivot = arr[high];
    int track = low - 1;
    for(int i = low;i < high;i++)
    {
        if(arr[i] < pivot)
        {
            track++;
            swap(arr[i],arr[track]);
        }
    }
    track++;
    swap(arr[track],arr[high]);
    return track;
}

void quickSort(int arr[],int low,int high)
{
    if(low >= high)
        return;
    int pi = partition(arr,low,high);
    quickSort(arr,low,pi - 1);
    quickSort(arr,pi + 1,high);
}

void display(int arr[],int size)
{
    for(int i = 0;i < size;i++)
    {
        cout<<arr[i]<<"  ";
    }
}

int main()
{
    int arr[] = {12,76,32,45,23,67,24,25,27,28,98,12,13,15};
    cout<<"Before : ";
    display(arr,(sizeof(arr)/sizeof(arr[0])));
    quickSort(arr,0,((sizeof(arr)/sizeof(arr[0]))-1));
    cout<<"\nAfter : ";
    display(arr,(sizeof(arr)/sizeof(arr[0])));
    return 0;
} 