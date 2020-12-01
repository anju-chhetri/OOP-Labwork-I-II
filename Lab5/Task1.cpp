#include <iostream>
using namespace std;
template <class T>
T sum(T a, T b){
    return(a+b);
}
int main(){
    cout<<"Sum of two integers "<<sum(2,3);
    cout<<"\nSum of two float numbers "<<sum(2.34,3.34);
}