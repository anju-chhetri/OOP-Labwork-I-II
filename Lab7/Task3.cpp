#include<iostream>
#include <typeinfo>
using namespace std;
class PARENT{
    public:
        void virtual test(){}
};
class CHILD:public PARENT{
public:
    void test(){}
};
int main(){
   PARENT s,*p;
   CHILD ch;
   p= &ch;
   p=dynamic_cast<CHILD *>(p);
   cout<<typeid(*p).name();
   cout<< "\n"<<typeid(ch).name();
   cout<<"\n"<<typeid('d').name();
   cout<<"\n"<<typeid('d').hash_code();
    
}