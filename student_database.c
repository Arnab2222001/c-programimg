
#include<stdio.h>
#define MAX 35
#include<stdlib.h>
struct student{
//Student Data
char name[MAX];

int studentId;
int age;
//------------
};
int main(){
struct student s1[MAX];
struct student s2[MAX];
int i,ch,nos=0;

while(1){
printf("\n|---------- Student Management System----------|\n");
printf("|----------------------------------------------|\n");
printf("|           1. Add Student                     |\n");
printf("|           2. Update Student                  |\n");
printf("|           3. Search Student                  |\n");
printf("|           4. All Student                     |\n");
printf("|           5. EXIT                            |\n");
printf("|           6. CLEAR                           |\n");
printf("|----------------------------------------------|\n");

printf("Enter Your Choice :- ");
scanf("%d",&ch);

switch(ch){

  case 1:
        printf("How many ?");
        scanf("%d",&nos);
        getchar();
        for(i=0;i<nos;i++){

        printf("Enter Student Name:- ");
        fgets(s1[i].name,MAX,stdin);
        printf("Enter Student Id:- ");
        scanf("%d",&s1[i].studentId);
        printf("Enter Student Age:- ");
        scanf("%d",&s1[i].age);
        getchar();
    }
    break;

  case 2:
    printf("Update Student");
     printf("enter the name which you want to update\n");
     
  case 4:
    // Display Student Data
    for (i=0;i<nos;i++){
        printf("%s",s1[i].name);
        printf("%d \n",s1[i].studentId);
        printf("%d \n",s1[i].age);
        }
        printf("Press Any Key To Continue");
        getch();
        break;
  case 5:
    exit(0);
    break;
  case 6:
    system("cls");
    break;
  default:
    printf("Invalid Choice");

}
system("cls");
}

return 0;
}


