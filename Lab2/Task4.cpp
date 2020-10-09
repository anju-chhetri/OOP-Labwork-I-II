#include <iostream>
using namespace std;

class COMPLEX{
    private:
        int real, img;
    public:
        COMPLEX(){
        real=0;
        img=0;
    }
        COMPLEX(int i, int j){
        real =i;
        img = j;
    }
        COPLEX(COMPLEX &c){
        real=c.real;
        img=c.img;
    }
        ~COMPLEX(){
            cout<<"\n Object deleted. ";
        }
        void sum_complex(COMPLEX, COMPLEX);
        void show();
};
void COMPLEX::sum_complex(COMPLEX c2, COMPLEX c3){
real=c2.real + c3.real;
img=c2.img + c3.img;
}
void COMPLEX :: show(){
    cout<<"\nThe sum of complex number is : "<<real<<" + i "<<img;
} 
int main(){
COMPLEX ca(4, 5), cb(1,2), cd,cc(ca);
cout<<"\n Sum using normal constructor : ";
cd.sum_complex(ca, cb);
cd.show();
cout<<"\n Sum using copy constructor";
cd.sum_complex(cc,cb);
cd.show();

}