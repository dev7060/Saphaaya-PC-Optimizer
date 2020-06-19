#include <stdio.h>
#include <conio.h>
#include <string.h>
int main(){
	char cmd[100]="netsh wlan show profiles \"", str[100];
	system("cls");
	printf("Available Profiles:\n");
	system("netsh wlan show profiles");
	printf("Name: ");
	fflush(stdin);
	gets(str);
	strcat(cmd, str);
	strcat(cmd, "\" key=clear");
	system("cls");
	system(cmd);
	printf("Key-content under Security Settings shows the key\n");
	system("pause");
	return 0;
}
