#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int mat1[a][b];
    int mat2[b][c];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>mat1[i][j];
        }
    }
    for(int i=0;i<b;i++){
        for(int j=0;j<c;j++){
            cin>>mat2[i][j];
        }
    }
    int am[a][c],col;
    for(int i=0;i<a;i++){
        for(int j=0;j<c;j++){
            am[i][j]=0;
        }
    }
    cout<<endl;
    for(int row=0;row<a;row++){
        for(col=0;col<c;col++){
            for(int k=0;k<b;k++){
                am[row][col]+=mat1[row][k]*mat2[k][col];
            }
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<c;j++){
            cout<<am[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}