#include <iostream>
using namespace std;

class COMPLEX{
    private :
        int real;
        int img;
    public:
    COMPLEX(int a, int b){
        real = a;
        img = b;
    }
    void operator ++(){
        ++real;
        ++img;
        cout<<"\n During prefix : "<<++real<<" +i"<<++img;
        cout<<"\n After prefix :  "<<real <<" + i"<<img;
    }
    void operator ++(int){
        cout<<"\n During postfix : "<<real++<<" +i"<<img++;
        cout<<"\n After postfix : "<<real<<" + i"<<img;
    }
};
int main(){
    COMPLEX c1(3,4);
    ++c1; //c1.operator ++()
    c1++; //c1.operator ++(int)
}