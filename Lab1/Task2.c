#include <stdio.h>
struct student{
    char name[20];
    int roll_no;
    int marks;
    char address[30];
};

int main(){
int n;
printf("Enter the number of student : ");
scanf("%d", &n);
printf("Enter the Details : (Name, Roll number, Marks, Address)");
struct student s[n];
int i=0;
for (i=0; i<n; i++){
    printf("\n student  %d", i+1 );
    printf(" : \n");
    scanf("%s %d %d %s", s[i].name, &s[i].roll_no, &s[i].marks, s[i].address);
}
int j=0;
for ( j=0;j<n;j++){
    printf("\n student %d", j, " : \n");
    printf("\n Name : %s", s[j].name);
    printf("\n Roll number : %d ", s[j].roll_no);
    printf("\n Name : %d ", s[j].marks);
    printf("\n Name : %s", s[j].address);
    
}
}
