#include<iostream>
using namespace std;
int linear_search(int a[],int n,int x)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==x) return(i);
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
    int position=linear_search(a,n,x);
    if(position==-1)cout<<"Element not found";
    else cout<<"Element found at position:"<<position;
    return(0);
}

/*PS D:\Avdhoot124> cd "d:\Avdhoot124\" ; if ($?) { g++ linear_search_program.cpp -o linear_search_program } ; if ($?) { .\linear_search_program }
How many elements10
Enter10Elements15 20 25 30 35 40 45 50 55 60 
Enter the element to be searched45
Element found at position:6
PS D:Avdhoot124\>*/