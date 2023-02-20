#include<iostream>
using namespace std;
void selsort1(int arr[],int n){
    
    for (int i=0;i<n;i++){
        int d=arr[i];
        int min=i;
        for(int j=i;j<n;j++){
            if(arr[j]<d){
                min=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void selsort2(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[5]={56,45,36,76,97};
    selsort1(arr,5);
    selsort2(arr,5);
    return 0;
}