#include<stdio.h>

struct employee{
	int id_no;
	char name[20];
	char designation[20];
	int salary;
};

int main(){
	struct employee emp;
	printf("enter employee id : ");
	scanf("%d",&emp.id_no);
	printf("enter employee name : ");
	scanf("%s",&emp.name);
	printf("enter employee's designation : ");
	scanf("%s",&emp.designation);
	printf("enter employee's salary : ");
	scanf("%d",&emp.salary);
	
	printf("\n----employee details--------\n");
	printf("employee id = %d \n",emp.id_no);
	printf("employee name = %s \n",emp.name);
	printf("employee's designation = %s \n",emp.designation);
	printf("employee's salary = %d \n",emp.salary);
	
	return 0;
}
