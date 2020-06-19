#include <stdio.h>
int main(){
	char string[1000];
	int i, j, start=0, m;
	char temp[100];
	char initial[100]="taskkill -im ";
	printf("Running Tasks:\n");
	system("tasklist");
	printf("\nTask name(s) to be stopped (use space b/w names for multiple):");
	gets(string);
	strcat(initial, string);
	system(initial);
	/*for(i=0; i<strlen(string); i++){
		if(string[i]==' '){
			m=0;
			for(j=start; j<=(i-1); j++){
				temp[m]=string[j];
				m++;
			}
			temp[m]='\0';
			start = i+1;
			puts(temp);
			strcat(initial, temp);
			strcpy(initial, "taskkill -im ");
			puts(initial);
			printf("%d\n", strlen(initial));
			system(initial);
		}
		if(string[i+1]=='\0'){
			m=0;
			for(j=start; j<=i; j++){
				temp[m]=string[j];
				m++;
			}
			temp[m]='\0';
			puts(temp);
			strcat(initial, temp);
			puts(initial);
			strcpy(initial, "taskkill -im ");
			printf("%d\n", strlen(initial));
			system(initial);
		}
	}*/
	
	system("pause");
}
