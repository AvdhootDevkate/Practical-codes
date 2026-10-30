#include<iostream>
using namespace std;
int binary_search(int a[],int n,int x)
{
    int first,last,mid;
     
    first=0;
    last=n-1;
    
    while(first<=last)
    {
        mid=(first+last)/2;
        if(a[mid]==x) return(mid);
   else if(a[mid]<x) first=mid+1;
                  else last=mid-1;
    }
    return(-1);
}          
int main()
{
    int a[10],x,n;
    cout<<"How many elements";
    cin>>n;
    cout<<"Enter"<<n<<"Elements";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the element to be searched";
    cin>>x;
    int position=binary_search(a,n,x);
    if(position==-1)cout<<"Element not found";
    else cout<<"Element found at position:"<<position;
    return(0);
} 

/*PS D:\Avdhoot124> cd "d:\Avdhoot124\" ; if ($?) { g++ binary_search_program.cpp -o binary_search_program } ; if ($?) { .\binary_search_program }
How many elements5
Enter5Elements10 25 5 1 51
Enter the element to be searched5
Element found at position:2
PS D:\Avdhoot124>*/