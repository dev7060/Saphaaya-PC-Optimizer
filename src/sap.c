#include <stdio.h>
#include <windows.h>
#include <string.h>

void mainScreen();
void clipBoard();
void del1();
void taskK();
void chkDsk();
void formatDisk();
void stopService();
void startupDisable();
void winUpdate();
void winDefender();
void wifiPass();
void internetHistory();
void connectWifi();
void productKey();
void dism();
int main(){
	system("COLOR 0A");
	system("Saphaaya Tool");
	//taskK();
	mainScreen();
	//del1();
	//chkDsk();
	//formatDisk();
	return 0;
	system("pause");
}
void mainScreen(){
	system("cls");
	char str1[100];
	char ch2;
	int ch;
	while(1){
		system("cls");
		printf("\n");
		printf("Collection of useful utilities in one place. Use with Caution. Recovery may not be possible. Refer to Docs for more.\n\n");
		printf("\nNote: Run with Administrator privilege");
		strcpy(str1, getenv("USERPROFILE"));
		strcat(str1, "\\AppData\\Local\\Temp\\*");
		printf("\n\n\t\t[->] 1) Delele temporary files of directory "); puts(str1); //done
		printf("\t\t[->] 2) View Startup Programs\n"); //done
		printf("\t\t[->] 3) (IE) Del Temporary Internet Files+Cookies+History+Form Data+Passwords"); //done
		printf("\n\t\t[->] 4) (IE) Option (3)+Files and Settings stored by Add-ons\n"); //done
		printf("\t\t[->] 5) System File Checker : Windows system files Automatic scan and Repair\n"); //done
		printf("\t\t[->] 6) Stop Running Task (unresponsive/hidden/unwanted)\n"); //done
		printf("\t\t[->] 7) Check disk and fix errors\n\t\t[->] 8) Format disk drive\n"); //done
		printf("\t\t[->] 9) Stop Running Service\n\t\t[->] 10) Stop Startup Service"); //done
		printf("\n\t\t[->] 11) Scan and Install Windows Update"); //done
		printf("\n\t\t[->] 12) Windows Defender Scan"); //done
		printf("\n\t\t[->] 13) Drivers List\n\t\t[->] 14) Remove DNS cache");//done
		printf("\n\t\t[->] 15) Show WiFi Password\n\t\t[->] 16) Connect to wifi");//done
		printf("\n\t\t[->] 17) Change users password (without knowing previous)");//done
		printf("\n\t\t[->] 18) Browse Internet History\n\t\t[->] 19) Clear clipboard data");//done
		printf("\n\t\t[->] 20) View Windows product key\n\t\t[->] 21) Internet Check/Site Ping");
		printf("\n\t\t[->] 22) Task Manager\n\t\t[->] 23) Disk Defragment");
		//quick access menu
		printf("\n\t\t[->] 24) Deployment Image Servicing and Management\n\t\t[->] 25) Boot options menu");
		printf("\n\t\t[->] 26) Disk cleanup\n\t\t[->] 27) Resource manager");
		printf("\n\t\t[->] 28) DirectX Diagnostic Tool");
		//add others category
		printf("\n\t\t[->] 29) View System Information\n\t\t[->] 30) Remote Shutdown Dialog");
		printf("\n\t\t[->] 31) Network ionformation\n\t\t[->] 32) Find Ip address of website");
		//option to run wincleanup utility
		printf("\n\n\t\t$ ");
		fflush(stdin);
		scanf("%d", &ch);
		if(ch==1){
			system("cls");
			del1();
		}
		else if(ch==2){
			system("cls");
			system("wmic startup get caption,command");
			system("pause");
		}
		else if(ch==3){
			system("cls");
			system("RunDll32.exe InetCpl.cpl,ClearMyTracksByProcess 255");
			printf("Returning...");
			system("pause");
		}
		else if(ch==4){
			system("cls");
			system("RunDll32.exe InetCpl.cpl,ClearMyTracksByProcess 4351");
			printf("Returning...");
			system("pause");
		}
		else if(ch==5){
			system("cls");
			//printf("Ctrl+C to abort...\n");
			system("sfc /scannow");
			printf("Returning...");
			system("pause");
		}
		else if(ch==6){
			taskK();
		}
		else if(ch==7){
			chkDsk();
		}
		else if(ch==8){
			formatDisk();
		}
		else if(ch==9){
			stopService();
		}
		else if(ch==10){
			//stopping startup services
			startupDisable();
		}
		else if(ch==11){
			winUpdate();
		}
		else if(ch==12){
			winDefender();
		}
		else if(ch==13){
			system("cls");
			system("driverquery");
			system("pause");
		}
		else if(ch==14){
			system("cls");
			system("ipconfig /flushdns");
			system("pause");
		}
		else if(ch==15){
			wifiPass();
		}
		else if(ch==16){
			connectWifi();
		}
		else if(ch==17){
			system("changePass.exe");
		}
		else if(ch==18){
			internetHistory();
		}
		else if(ch==19){
			clipBoard();
		}
		else if(ch==20){
			productKey();
		}
		else if(ch==21){
			system("internetCheck.exe");
		}
		else if(ch==22){
			system("taskmgr");
		}
		else if(ch==23){
			system("diskDefrag.exe");
		}
		else if(ch==24){
			dism();
		}
		else if(ch==25){
			system("msconfig");
		}
		else if(ch==26){
			system("cleanmgr.exe");
		}
		else if(ch==27){
			system("perfmon /res");
		}
		else if(ch==28){
			system("dxdiag");
		}
		else if(ch==29){
			system("systeminfo");
			system("pause");
		}
		else if(ch==30){
			system("shutdown /i");
			system("pause");
		}
		else if(ch==31){
			system("ipconfig /all");
			system("pause");
		}
		else if(ch==32){
			system("cls");
			char cmd[100]="nslookup ", temp[100];
			printf("input site name google.com ");
			scanf("%s", &temp);
			strcat(cmd, temp);
			system(cmd);
			system("pause");
		}
		else if(ch==99){
			exit(0);
		}
		else{
			printf("Invalid Choice!\n");
			mainScreen();
		}
	}
	// * to perform all
	//delete chrome history
}
void del1(){
	char str1[100];
	char temp[100]="del /S /Q ";
	system("cls");
	//admin previlidges required to clear everything
	strcpy(str1, getenv("USERPROFILE"));
	strcat(str1, "\\AppData\\Local\\Temp\\*");
	strcat(temp, str1);
	system(temp);
	printf("\n\nReturning.\n");
	system("pause");
}
void taskK(){
	system("cls");
	char string[1000];
	int i, j, start=0, m;
	char temp[100];
	char initial[100]="taskkill -im ";
	printf("Running Tasks:\n");
	system("tasklist");
	printf("\nTask name(s) to be stopped (use space b/w names for multiple, exit to return):");
	fflush(stdin);
	gets(string);
	if(strcmp(string, "exit")==0){
		return;
	}
	strcat(initial, string);
	system(initial);
	system("pause");
	/*
	for(i=0; i<strlen(string); i++){
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
	}
	system("pause");
	//words = spaces + 1;
	//puts(temp);
	*/
}
void chkDsk(){
	//chkdsk C: /f /r /x
	system("cls");
	char ch, drive[10], first[100]="chkdsk ", second[100]=" /f /r /x";
	printf("Caution.\n->This option takes time.\n->Disk drive would be force unmounted and hence can't be used during the process!\n");
	printf("->This process can't be stopped.\n->This option uses 'chkdsk' command.\nSure to proceed? (y/n)\n\n$ ");
	//printf("\nContinue?...");
	fflush(stdin);
	scanf("%c", &ch);
	if(ch=='y' || ch=='Y'){
		system("cls");
		printf("Available Drives:\n");
		system("wmic logicaldisk get name");
		printf("\nSelect drive (e.g. D:) $ ");
		scanf("%s", drive);
		if(strcmp(drive, "C:")==0){
			printf("Operation on C: not supported for now!");
			system("pause");
			return;
		}
		strcat(first, drive);
		strcat(first, second);
		//puts(first);
		system(first);
		system("pause");
	}
	else{
		printf("else part");
	}

}
void formatDisk(){
	//FORMAT F: /FS:NTFS /Q
	char start[100]="FORMAT ", middle[100], final[100]=" /FS:NTFS /Q";
	system("cls");
	printf("Available Partitions:\n");
	system("wmic logicaldisk get name");
	printf("\nSelect Volume (\"exit\" to return): $ ");
	scanf("%s", &middle);
	if(strcmp(middle, "exit")==0){
		return;
	}
	if(strcmp(middle, "C:")==0){
		printf("Operation on C: not supported!");
		system("pause");
		return;
	}
	strcat(start, middle);
	strcat(start, final);
	system(start);
	system("pause");
}
void stopService(){
	//stopping services
	char service[100];
	char initial[100]="sc stop ";
	system("cls");
	printf("Services Names:\n\n");
	system("sc query");
	printf("\nInput Name of Service: (exit to return)$ ");
	fflush(stdin);
	gets(service);
	if(strcmp(service, "exit")==0){
		return;
	}
	strcat(initial, service);	
	//puts(initial);
	system(initial);
	system("pause");
}
void startupDisable(){
	//  sc config "Name of Service" start= disabled
	char service[100], initial[100]="sc config ";
	char second[100]=" start= disabled";
	system("cls");
	printf("Services Names:\n");
	system("sc query");
	printf("\nInput Name of Service: (\"exit\" to return)$ ");
	fflush(stdin);
	gets(service);
	if(strcmp(service, "exit")==0){
		return;
	}
	strcat(initial, service);
	strcat(initial, second);
	//puts(initial);
	system(initial);
	system("pause");
}
void winUpdate(){
	char ch;
	system("cls");
	printf("Note : The progress-show of scanning and updating is not available in the CLI.\n");
	system("usoclient StartScan"); 
	printf("\nScan has been done. Start downloading? (if available) (y/n)\n\n$ ");
	fflush(stdin);
	scanf("%c", &ch);
	if(ch=='y'||ch=='Y'){  
		system("usoclient StartDownload");
		printf("\n-> If available, updates will now start downloading in the background.\n");
		printf("-> You can also check the progress in 'Settings' under 'Windows Update'\n\n");
		system("pause");
	}
	else{
		return;
	}
}
void winDefender(){
	int ch, str[100];
	system("cls");
	printf("1)Quick Scan\n2) Full Scan 3) Update 4) Update and Quick Scan\n");
	scanf("%d", &ch);
	//commands not working, slash issues
	if(ch==1){
		system("quickScan.bat");
	}
	else if(ch==2){
		system("fullScan.bat");
	}
	else if(ch==3){
		system("update.bat");
	}
	else if(ch==4){
		system("updateAndQuickScan.bat");
	}
	else {
		printf("Invalid choice!");
	}
	//C:\Program Files\Windows Defender>mpcmdrun.exe
	//help shows up automatically
}
void wifiPass(){
	system("wifiPass.exe");
}
void connectWifi(){
	/*
	NETSH WLAN SET HOSTEDNETWORK MODE=ALLOW SSID=”YOUR WIFI CONNECTION NAME” KEY=”YOUR WIFI CONNECTION PASSWORD”

    netsh wlan connect ssid=YOURSSID name=PROFILENAME
    
    check all avalable networks
"netsh wlan show networks"

connect to a known network say "mac"
"netsh wlan connect name=mac"
    */
    system("connectWIFI.exe");
}
void internetHistory(){
	system("cls");
	int ch;
	system("ipconfig /displaydns");
	printf("\n\nEnter 1 to export to a file");
	fflush(stdin);
	scanf("%d", &ch);
	if(ch==1){
		char name[100], cmd[100]="ipconfig /displaydns > ";
		printf("fileName (example.txt): ");
		fflush(stdin);
		gets(name);
		strcat(cmd, name);
		system(cmd);
		printf("done");
	}
	system("pause");
}
void clipBoard(){
	system("cls");
	system("echo off | clip");
	printf("done");
	system("pause");
}
void productKey(){
	system("cls");
	system("wmic path softwarelicensingservice get OA3xOriginalProductKey");
	system("pause");
}
void dism(){
	system("cls");
	int ch;
	char cmd[100]="";
	printf("1) Checkhealth 2) Scanhealth 3) Restore health");
	scanf("%d", &ch);
	if(ch==1){
		strcat(cmd, "DISM /Online /Cleanup-Image /CheckHealth");
		system(cmd);
	}else if(ch==2){
		strcat(cmd, "DISM /Online /Cleanup-Image /ScanHealth");
		system(cmd);
	}else if(ch==3){
		strcat(cmd, "DISM /Online /Cleanup-Image /RestoreHealth");
		system(cmd);
	}else{
		printf("invalid choice!");
	}
	system("pause");
}
