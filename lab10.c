#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    int n,i,max=0;

    printf("Enter number of students: ");
    scanf("%d",&n);

    struct Student *s;

    s=(struct Student*)malloc(n*sizeof(struct Student));

    for(i=0;i<n;i++)
    {
        printf("Student %d\n",i+1);

        scanf("%d",&s[i].roll);
        scanf("%s",s[i].name);
        scanf("%f",&s[i].marks);

        if(s[i].marks>s[max].marks)
            max=i;
    }

    printf("\nHighest Marks Student\n");

    printf("Roll : %d\n",s[max].roll);
    printf("Name : %s\n",s[max].name);
    printf("Marks : %.2f\n",s[max].marks);

    free(s);

    return 0;
}