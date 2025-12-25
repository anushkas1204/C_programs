//structure is a User defined datatype allows you to store multiple variables or differnt datatypes under one name

//---------syntax---------------------

//struct structure_name{
//	data_type member1;
//	data_type member2;
//	data_type member3;
//	}
#include<stdio.h>

struct Student{
	int roll;
	float marks;
	char grade;
};
int main(){
	struct Student s1;
	struct Student s2;
	struct Student s3;
	
	s1.roll = 101;
	s1.marks = 56.78;
	s1.grade = 'B';
	
	s2.roll = 102;
	s2.marks = 86.11;
	s2.grade = 'A';
	
	s3.roll = 103;
	s3.marks = 91.67;
	s3.grade = 'A';
	
	printf("----------Student s1 details-----------\n");
	printf("Roll number = %d \n",s1.roll);
	printf("Marks = %.2f \n",s1.marks);
	printf("Grade = %c \n",s1.grade);
	
	printf("----------Student s2 details-----------\n");
	printf("Roll number = %d \n",s2.roll);
	printf("Marks = %.2f \n",s2.marks);
	printf("Grade = %c \n",s2.grade);
	
	printf("----------Student s3 details-----------\n");
	printf("Roll number = %d \n",s3.roll);
	printf("Marks = %.2f \n",s3.marks);
	printf("Grade = %c \n",s3.grade);
	return 0;
}
