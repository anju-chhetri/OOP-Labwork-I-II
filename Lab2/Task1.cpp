#include <iostream>
using namespace std;

class ask{
    private:
        string name;
        int roll_no;
        float marks;
        string address;
    public:
    void details();
    void display();
};
void ask::details(){
    cout<<"Enter the given details of student : ";
    cout<<"\n Name : ";
    cin>>name;
    cout<<" Roll number : ";
    cin>>roll_no;
    cout<<" Marks : ";
    cin>>marks;
    cout<<" Address : ";
    cin>>address;
}

void ask::display(){
    cout<<"The the details are : ";
    cout<<"\n Name "<<name<<"\n address : "<<address<<"\n marks : "<<marks <<"\n Roll number "<<roll_no;
}
int main(){
ask a;
a.details();
a.display();

}