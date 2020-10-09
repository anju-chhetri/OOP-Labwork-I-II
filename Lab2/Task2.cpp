#include <iostream>
using namespace std;
class student{
private:
    string name,address;
    int marks,roll_no;
public:
    void ask(){
        cin>>name>>address>>roll_no>>marks;
    }
void show();
};


void student::show(){
    cout<<" Name : "<<name;
    cout<<"\n Address : "<<address;
    cout<<"\n Roll number :"<<roll_no;
    cout<<"\n Marks : "<<marks;
    } 

int main(){
    int n;
    student call;
    cout<<"Enter the number of students :";
    cin>>n;
    student s[n];
    cout<<"Enter their details (Name, Address, Roll number, Marks): ";
    for (int i=0;i<n;i++){
        cout<<"\n Student "<<i+1<< ":\n";
        s[i].ask();
    }
    for (int i=0;i<n;i++){
        cout<<"\n Student "<<i+1<<" : \n";
        s[i].show();
    }
}