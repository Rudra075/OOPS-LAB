#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student s[5];
    int i,max=0;
    float sum=0;

    for(i=0;i<5;i++)
    {
        printf("Student %d\n",i+1);

        scanf("%d",&s[i].roll);
        scanf("%s",s[i].name);
        scanf("%f",&s[i].marks);

        sum+=s[i].marks;

        if(s[i].marks>s[max].marks)
            max=i;
    }

    printf("\nHighest Marks Student\n");
    printf("%d %s %.2f\n",s[max].roll,s[max].name,s[max].marks);

    printf("Average Marks = %.2f",sum/5);

    return 0;
}