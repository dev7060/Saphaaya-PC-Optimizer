#include <stdio.h>
int main(){
	char ch2;
	FILE *fp = fopen("name.txt", "r");
	ch2 = fgetc(fp);
	while(ch2!=EOF){
		printf("%c", ch2);
		ch2 = fgetc(fp);
	}
}
