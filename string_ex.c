#include<stdio.h>
#include<string.h>

int main(){
	
	//strlen

	char name[] = "Anushka abc";
	printf("Length = %d",strlen(name));
	
	//strcpy
	char a[20] = "Hello";
	char b[20];
	strcpy(b,a);
	printf("\nCopied String = %s",b);
	
	//strcat
	char x[10] = "Anushka";
	char y[10] = "Shewale";
	strcat(x,y);
	printf("\nConcatinated String = %s",x);
	
	char p[10] = "Welcome";
	char q[10] = "to";
	char r[10] = "pune";
	strcat(p,q);
	strcat(p,r);
	printf("\nNew Concatinated String = %s \n",p);
	
	//str compare -strcmp
	//to Ignore the case sensitiveness use - strcasecmp
	char s1[10] = "Hello";
	char s2[10] = "hello";
	if(strcasecmp(s1,s2)== 0){
		printf("Strings are equal");
	}else{
		printf("Strings are not equal");
	}
	
	//strupr
	char str[] = "Hello its anushka";
	strupr(str);
	printf("\nString in Uppercase = %s \n",str);
	
	//strlwr
	char str1[] = "HELLO ITS ANUSHKA";
	strlwr(str1);
	printf("\nString in Lowercase = %s \n",str1);
	
	//strrev
	char str2[] = "program";
	strrev(str2);
	printf("\nString in Reverse order = %s \n",str2);
	
	char str3[] = "India";
	int len = strlen(str3);
	printf("\nfirst char = %c \n",str3[0]);
	printf("last char = %c ",str3[len - 1]);
	
	//count characters without strlen
	int i = 0 ;
	while(str3[i] != '\0'){
		i++;
	}
	printf("\nlength of string = %d \n",i);
	
	//count the words in the sen
	char str4[] = "India is best";
	int j,count=1;
	for(j=0; str4[j] != '\0'; j++){
		if(str4[j] == ' '){
			count++;
		}
	}
	printf("\nwords = %d \n",count);
	
	//replace a with @ in the word banana	
	char str5[]= "banana";
	int k;
	for (k = 0; str5[k] != '\0'; k++) {
        if (str5[k] == 'a') {
            str5[k] = '@';
        }
    }
	printf("%s",str5);
	
	//take the string from the user and check the string is pallindrome 
	char str6[10];
	char str7[10];
	printf("\nenter the word to check pallindrome = ");
	scanf("%s",str6);
	strcpy(str7,str6);
	strrev(str7);
	if(strcmp(str6,str7) == 0){
			printf("pallindrome string\n");
	}else{
			printf("Not pallindrome string\n");
	}

	
	return 0;
	
}
