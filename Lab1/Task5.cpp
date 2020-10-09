#include <iostream>
using namespace std;

class default_arg{
    private:
        int i;
    public:
        void show(int i=10){
            cout<<i;
        }
};

int main(){
   default_arg d;
    d.show();
}