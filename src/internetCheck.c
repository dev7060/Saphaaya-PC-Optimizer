#include <stdio.h>
int main(){
	char ip[100], cmd[100]="ping ";
	system("cls");
	printf("Input ip(xx.xxx.xx.xx)/site(google.com)\n");
	scanf("%s", ip);
	strcat(cmd, ip);
	system(cmd);
	system("pause");	
}
