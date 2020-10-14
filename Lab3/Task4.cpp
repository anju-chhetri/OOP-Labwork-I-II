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
    friend void operator +(COMPLEX , COMPLEX);
};
void operator+(COMPLEX c3, COMPLEX c4){
     cout<<"\nSum of complex numbers:  "<<c3.real + c4.real <<" + i"<<c3.img + c4.img;
}
int main(){
    COMPLEX c1,c2;
    c1.ask();
    c2.ask();
    c1+c2; //c1.operator+(c2)
}