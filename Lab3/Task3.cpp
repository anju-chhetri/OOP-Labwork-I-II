#include <iostream>
using namespace std;

class COMPLEX{
    private :
        int real;
        int img;
    public:

    void ask(){
            cout<<"\nEnter the real and imaginary value : ";
            cin>>real>>img;
    }
    void operator +(COMPLEX);
};
void COMPLEX::operator+(COMPLEX c3){
     cout<<"\nSum of complex numbers:  "<<real + c3.real <<" + i"<<img + c3.img;
}
int main(){
    COMPLEX c1,c2;
    c1.ask();
    c2.ask();
    c1+c2; //c1.operator+(c2)
}