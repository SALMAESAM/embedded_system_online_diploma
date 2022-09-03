
#include <stdio.h>
#include <stdlib.h>
struct student {  char name[50];
          float mark;
          int roll;
          };
int main()
{
    struct student s [10];
    int i;
    printf("Enter information students:");
    for(i=0;i<10;i++)
    {
        s[i].roll=i+1;
        printf("\n For roll number %d \n",s[i].roll);
        printf("Enter name :" );
        scanf("%s",&s[i].name);
        printf("Enter marks: ");
        scanf("%f",&s[i].mark);


        printf("\n");
    }
printf("displaying information of student:\n\n");
for(i=0;i<10;i++)
{
    printf("\n information of roll number %d",s[i].roll);
    printf("\nName:%s\n",s[i].name);
    printf("marks:%.1f",s[i].mark);
}



    return 0;
}
