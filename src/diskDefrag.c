#include <stdio.h>
#include <conio.h>
#include <string.h>
int main(){
	char d[100], cmd[100]="defrag ";
	system("cls");
	printf("Disk Defragment");
	printf("choose disk");
	system("wmic logicaldisk get caption");
	fflush(stdin);
	scanf("%s", &d);
	strcat(cmd, d);
	strcat(cmd, " /U");
	system("cls");
	system(cmd);
	system("pause");
	return 0;
}
