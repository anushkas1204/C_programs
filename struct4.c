#include<stdio.h>
struct employee{
	int id_no;
	char name[20];
	char designation[20];
	int salary;
};
int main(){
	
	int n;
	printf("Enter Number of employees");
	scanf("%d",&n);
	
	int i;
	struct employee emp[n];
	for(i=0;i<n;i++){
		printf("\n-----Enter details od employees -------\n");
		printf("Enter id = ");
		scanf("%d",&emp[i].id_no);
		printf("Enter name = ");
		scanf("%s",&emp[i].name);
		printf("Enter designation = ");
		scanf("%s",&emp[i].designation);
		printf("Enter salary = ");
		scanf("%d",&emp[i].salary);
	}
	printf("\n------------Employee records-------------\n");
	for(i=0;i<n;i++){
		printf("emp id = %d , Name = %s , Designation = %s , Salary = %d \n", emp[i].id_no, emp[i].name, emp[i].designation , emp[i].salary);	
	};
	return 0;
}
