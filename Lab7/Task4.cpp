#include <iostream>
#include <conio.h>
using namespace std;

class PARENT{
    public:
     void show(){
        cout<<"PARENT ";
    }
};
class CHILD:public PARENT{
    public:
    void show(){
        cout<<"CHILD";
    }
};
int main(){
    // PARENT *p=new CHILD();
    // //CHILD c;
    // p->show();
char a[10];
    for(int i=0;i<9;i++){
         a[i]=getch();
        cout<<"*";
    }
        for(int i=0;i<9;i++){
        cout<<a[i];
    }

}