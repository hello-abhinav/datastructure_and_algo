#include<iostream>
using namespace std;
int binarySearch(int arr[],int left,int right,int find);
int main()
{
    int n,find;
    // n is the no. of elements in the array
    cin>>n>>find;
    int arr[n];
    for(int i=0;i<n;i++)  cin>>arr[i];
    
    int x=binarySearch(arr,0,n-1,find);
    if(x==1) cout<<"element found"<<endl;
    else cout<<"element is not present"<<endl;
    return 0;
}
int binarySearch(int arr[],int left,int right,int find)
{
        if(left<=right)
        {
                int mid=(left+ right )/2;
                if(arr[mid]==find)  return 1;
                if(arr[mid]>find)  return binarySearch(arr,left,mid-1,find);
                 return binarySearch(arr,mid+1,right,find);
        }
        else      return -1;
}