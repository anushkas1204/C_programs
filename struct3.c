#include<stdio.h>

struct Student{
    int roll_no;
    char name[20];
    float marks;
};

int main(){
    int n;
    printf("Enter Number of students : ");
    scanf("%d",&n);

    struct Student students[n];
    int i;

    for(i=0;i<n;i++){
        printf("\nEnter details for student = %d \n", i+1);

        printf("Roll no : ");
        scanf("%d", &students[i].roll_no);

        printf("Name : ");
        scanf("%s", &students[i].name);

        printf("Marks : ");
        scanf("%f", &students[i].marks);
    }

    printf("\n-----------Student Records----------\n");
    for(i=0;i<n;i++){
        printf("Roll No = %d, Name = %s , Marks = %.2f\n",
               students[i].roll_no,
               students[i].name,
               students[i].marks);
    }

    return 0;
}

