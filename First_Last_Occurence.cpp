#include<iostream>
using namespace std;

void firstcheck(int arr[],int n,int check){
    int first=0,last=0;
    for(int i=0;i<n;i++){
        if(arr[i]==check){
            first=i;
            for(int j=i+1;j<n;j++){
                if(arr[j]==check)
                last=j;
            }
            break;
        }
    }

    cout<<"The first index is: "<<first<<endl;
    cout<<"The last index is : "<<last<<endl;
}

int firstoccrec(int arr[],int n,int i,int check){
    if(i==n){
        return -1;
    }
    if(arr[i]==check){
        return i;
    }
    return firstoccrec(arr,n,i+1,check);
}

int main()
{
    int arr[]={4,2,1,2,5,2,7};
    firstcheck(arr,7,2);
    cout<<firstoccrec(arr,7,0,2)<<endl;
    return 0;
}