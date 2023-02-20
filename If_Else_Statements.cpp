#include<iostream>
using namespace std;
int main(){
    int savings;
    cin>>savings;
    if (savings>5000){
        cout<<"Archit\n";
    }
    else if(savings>2000)
    {
        cout<<"Manjit\n";
    }
    else
    {
        cout<<"Room pe baitenge..:_)";
    }
    return 0;
}