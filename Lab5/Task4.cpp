#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the numbers a and b: ";
    cin>>a>>b;
    try{
        if((a-b)==0)throw(a-b);
        else{cout<<"a/(a-b) is : "<<a/(a-b);}
    }
    catch(int a){
        cout<<"Denominator cannot be "<<a<<".";
    }
}