#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,sum=0,num;
    float avg;
    printf("Enter the number of students in class\n");
    scanf("%d",&num);
    int marks[num];
    printf("Enter the marks of all students");
    for(i=0;i<num;i++)
    {
        scanf("%d",&marks[i]);
        sum=sum+marks[i];
    }
    avg=(float)sum/num;
    printf("Average of the class is %f\n",avg);
    return 0;
}
