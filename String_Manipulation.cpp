#include<iostream>
#include<string>
using namespace std;

int main()
{
    string st;
    cin>>st;
    cout<<st<<endl;
    cin.ignore(); //Used as a flush of data.

    string sw;
    getline(cin,sw);
    cout<<sw<<endl;

    string se="Sri Text";
    cout<<se<<endl;

    //String Manipulation Functions->

    //se.clear();  //for removing the contents of string "se"...
    //se.erase(<starting index>, <no of characters>);  //for removing the interval of characters...
    //se.find("ri");  //for finding the index of the first letter of the searching word...
    //se.insert(<index>,<string wanted to add>);   //for adding a small string to the specific index in the main string...
    //se.size(); or se.length();   //for finding the length of the string...
    //se.substr(<start index>,<length of substring>);   //for having the part of a string...
    //stoi(se);  //for changing the numerical string to integer(alphabets are not considered)...
    //transform(se.begin(),se.end(),se.begin(),::toupper);  //Changing the whole string to upper case...
    //transform(se.begin(),se.end(),se.begin(),::tolower);  //Changing the whole string to lower case...

    //#include<algorithm>
    //se.begin();  //for accessing the begin index of the string
    //se.end();   //for accessing the end index of the string...
    //sort(se.begin(),se.end());  //used for sorting the string se according to ASCII Values...
    //sort(se.begin(),se.end(),greater<int>());  //Used for sorting an string in descending order of int type...
 
    //int x=90;
    //cout<<to_string(x) + "5";  //will produce the output as 905;
    
    return 0;
}