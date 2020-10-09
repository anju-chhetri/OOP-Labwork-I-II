#include <iostream>
using namespace std;
inline float interst(float p, float t, float r){
    return ((p*t*r)/100);
}
int main(){
    float result;
    result=intrest(12, 12, 12);
    cout<<"Final result is : "<<result;
}