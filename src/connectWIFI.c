#include <stdio.h>
#include <conio.h>
#include <string.h>
int main(){
	//workd for wpa2psk
	system("cls");
	printf("Networks with WPA2PSK authentication supported for now!\n");
	FILE *fp1, *fp2, *fp3, *final, *fp4;
	char ch1, ssid[50], pass[50];
	fp1 = fopen("part1.txt", "r");
	final = fopen ("final.xml", "w");
	ch1 = fgetc (fp1);
	while(ch1!=EOF){
		fputc(ch1, final);
		ch1=fgetc(fp1);
	}
	printf("\nSDID name: ");
	gets(ssid);
	fputs(ssid, final);
	fp2 = fopen ("part2.txt", "r");
	ch1 = fgetc (fp2);
	while(ch1!=EOF){
		fputc(ch1, final);
		ch1=fgetc(fp2);
	}
	fputs(ssid, final);
	fp3 = fopen ("part3.txt", "r");
	ch1 = fgetc (fp3);
	while(ch1!=EOF){
		fputc(ch1, final);
		ch1=fgetc(fp3);
	}
	printf("pass: ");
	gets(pass);
	fputs(pass, final);
	fp4 = fopen ("part4.txt", "r");
	ch1 = fgetc (fp4);
	while(ch1!=EOF){
		fputc(ch1, final);
		ch1=fgetc(fp4);
	}
	fclose(final);
	system("netsh wlan add profile filename=\"final.xml\"");
	system("del final.xml");
	return 0;
}
