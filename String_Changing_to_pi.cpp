#include<iostream>
#include<string>
using namespace std;

void copi(string s){

    if(s.length()==0){
        return;
    }

    if(s[0]=='p' && s[1]=='i'){
        cout<<"3.14";
        copi(s.substr(2));
    }
    else{
        cout<<s[0];
        copi(s.substr(1));
    }
}

int main()
{
    copi("Hrl2pi0lo5");
    return 0;
}