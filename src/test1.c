#include <stdio.h>
#include <string.h>
int main(void)
{	
	char uName[100], cmd[100]="net user ";
 	system("cls");
 	printf("Users:\n");
 	system("net user");
 	printf("Input Username: ");
 	gets(uName);
 	strcat(cmd, uName);
 	strcat(cmd, " *");
 	puts(cmd);
 	system(cmd);
    return 0;
}
