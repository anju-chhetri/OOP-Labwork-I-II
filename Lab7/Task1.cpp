#include <iostream>
using namespace std;

int main(){
int a=97;
int *iptr=&a;
char *chptr;
void *ptr=reinterpret_cast<void *> (iptr);
chptr=reinterpret_cast<char *> (ptr);
cout<<chptr;
}
 