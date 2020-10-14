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
  friend void operator ++(COMPLEX);
  friend void operator ++(COMPLEX,int );
};
void operator ++(COMPLEX c2){
        cout<<"\nDuring prefix : "<<++c2.real<<" +i"<<++c2.img;
        cout<<"\nAfter prefix :  "<<c2.real<<" + i"<<c2.img;
    }
void operator ++(COMPLEX c3, int){
        cout<<"\nDuring postfix : "<<c3.real++<<" +i"<<c3.img++;
        cout<<"\nAfter postfix : "<<c3.real<<" +i"<<c3.img;
    }

int main(){
    COMPLEX c1(3,4),c2(8,9);
    ++c1; //operator ++(c1)
    c2++; //operator ++(c2,int)
}