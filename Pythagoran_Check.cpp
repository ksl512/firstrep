#include<iostream>
using namespace std;
int max(int a,int b,int c){
    if(a>b){
        if(a>c){
            return a;
        }
        else{
            return c;
        }
    }
    else{
        if(b>c){
            return b;
        }
        else{
            return c;
        }
    }
}
void pythagoran(int max,int b,int c){
    if(max*max==(b*b)+(c*c)){
        cout<<"This is a pythagoran triplet."<<endl; 
    }
    else{
        cout<<"Not a pythagoran triplet."<<endl;
    }
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int d=max(a,b,c);
    if(d==a){
        pythagoran(d,b,c);
    }
    else if(d==b){
        pythagoran(d,a,c);
    }
    else if(d==c){
        pythagoran(d,a,b);
    }
    return 0;
}