#include <iostream>
using namespace std;
void division(int a, int b){
try{
    if((a-b)==0)throw(a-b);
    else{cout<<"\na/(a-b) is : "<<a/(a-b);}
}
catch(int a){
    cout<<"\nCaught inside division function";
    throw;
}
}
int main(){
    try{
    division(6,3);
    division(3,3);
    }
    catch(int  ){
        cout<<"\nCaught inside main. ";
    }
}