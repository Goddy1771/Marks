#include<stdio.h.> 
int main()
{
    int marks;
    Printf("Enter marks: ");
    scanf("%d %d", &marks, &grade);
    if(marks>=70)
    {
        printf("Grade A\n");
    }
    else if(marks>=60)
    {
        printf("Grade B\n");
    }
    else if(marks>=50)
    { 
        printf("Grade C\n");
    }
    else if(marks>=40)
    {
        printf("Grade D\n");
    }
    else
{ 
    printf("Grade F\n");
}
getch();
}