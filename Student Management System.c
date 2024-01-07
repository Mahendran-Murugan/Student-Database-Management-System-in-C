#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void addStudent();
void display();

int i = 0, j;

struct Student
{
    char name[30];
    char rollno[30];
    int age;
    float marks;
} s[30];

void addStudent()
{
    printf("\nEnter your name:");
    scanf("%s", &s[i].name);
    printf("\nEnter your Roll no:");
    scanf("%s", &s[i].rollno);
    printf("\nEnter your Age:");
    scanf("%d", &s[i].age);
    printf("\nEnter your marks:");
    scanf("%f", &s[i].marks);
    i++;
    printf("\nStudent Successfully Added to Database....");
    printf("\n");
}

void display()
{
    printf("\nName\t\tRollno\t\tAge\t\tMarks");
    for (j = 0; j < i; j++)
    {
        printf("\n%s\t\t%s\t\t%d\t\t%.2f", s[j].name, s[j].rollno, s[j].age, s[j].marks);
    }
    printf("\n");
}

int main()
{
    int ch;
    do
    {
        printf("\n1.Add\n2.Display\n3.Exit\n\nSelect an operation:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            addStudent();
            break;

        case 2:
            display();
            break;

        case 3:
            printf("\nExited Successfully....\n");
            exit(1);
            break;

        default:
            break;
        }

    } while (ch != 3);
    return 0;
}