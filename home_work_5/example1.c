#include <stdio.h>
#include <stdlib.h>
struct student {
    char name[100];
    int roll ;
    float mark;
};



int main()
{
    struct student s;
    printf("Enter information of students :\n\n");
    printf("Enter name: ");
    scanf("%s",&s.name);
    printf("Enter roll number : ");
    scanf("%d",&s.roll);
    printf("Enter marks: ");
    scanf("%f",&s.mark);
    printf("\n Displaying Information \n");
    printf("Name : %s \n",s.name);
    printf("Roll : %d  \n",s.roll);
    printf("Mark : %f \n",s.mark);

    return 0;
}
