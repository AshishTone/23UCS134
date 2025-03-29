#include<iostream>

using namespace std;

int binarySearch(int *arr,int low,int high,int target)
{
	if(low > high)
		return -1;
	int mid = (low+high)/2;
	if(arr[mid] == target)
		return mid;
	if(target > arr[mid])
		return binarySearch(arr,mid+1,high,target);
	if(target < arr[mid])
		return binarySearch(arr,low,mid-1,target);
	
	return -1;		
}

void display(int *arr,int size)
{
	for(int i = 0;i < size;i++)
		cout<<arr[i]<<"  ";
	cout<<endl;
}

int main()
{
	int arr[] = {12,13,14,15,16,17,18,14,19,20};
	cout<<"The Array: ";
	int size = sizeof(arr)/sizeof(arr[0]);
	display(arr,size);
	
	cout<<"Enter element to be searched: ";
	int n;
	cin>>n;
	int TF = binarySearch(arr,0,size-1,n);
	if(TF == -1)
		cout<<n<<" is not in the array";
	else
		cout<<n<<" is at "<<TF<<" index";
	
	return 0;
}
