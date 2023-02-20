#include <iostream>
using namespace std;


int main()
{
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    cout<<"Entered Matrix is:"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
    for(int i=0;i<3;i++){
        for(int j=i;j<3;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    cout<<"The transposed matrix is:"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}