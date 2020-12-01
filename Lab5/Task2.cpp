#include <iostream>
using namespace std;

template<class t>
class temp{
    private:
        t l,b;
    public:
        temp(t a, t k){
            l=a;
            b=k;
        }
        t rectangle(){
            return(l*b);
        }
};
int main(){
    temp<int> obj(2,3);
    temp<float> obj1(2.1,3.1);
    cout<<"Area of rectangle with integer dimensions "<<obj.rectangle();
    cout<<"\nArea of rectangle with float dimensions "<<obj1.rectangle();
    
}