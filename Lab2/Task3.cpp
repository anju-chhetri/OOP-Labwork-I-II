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
        COMPLEX sum_complex(COMPLEX, COMPLEX);
        void show();
};
COMPLEX COMPLEX::sum_complex(COMPLEX c2, COMPLEX c3){
real=c2.real + c3.real;
img=c2.img + c3.img;
}
void COMPLEX :: show(){
    cout<<"The sum of complex number is : "<<real<<" + i "<<img;
} 
int main(){
COMPLEX ca(4, 5), cb(1,2), cc;
cc.sum_complex(ca, cb);
cc.show();

}