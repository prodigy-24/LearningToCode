#include <stdio.h>
#include <string.h>
int main(void) 
{
	char name[100];
	int age;
	printf("enter your name\n");
	scanf("%s", name);
	for(int i = 0; i < strlen(name); i++) {
		if (name[i] >= 'a' && name[i] <='z' ) {
			printf("%c", toupper (name  [i]) );
		}
		else{
			printf("%c",name [i]);
			
		}
	}
	
}
