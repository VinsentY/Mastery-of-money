#include "main.h"

void SearchbyRemark ()
{

	HWND window = GetConsoleWindow();
	SetWindowPos(window, HWND_TOP, 545, 220, 0, 0, SWP_NOSIZE);//ËõÐ¡´°¿Ú´óÐ¡

	SwitchToThisWindow(window,TRUE);

	system("color 0e");
	system("mode con cols=30 lines=15");

	int choice = 0;
	char *getremark = (char *)malloc(sizeof(char)*10);

	printf("    ¨n¨n¨n¨n¨n¨n¨k¨k¨k¨k¨k¨k¨k¨k¨n¨n¨n¨n¨n¨n\n");
	printf(" ¨X¨T¨T¨k¡ôÕÆ¡ôÎÕ¡ô½ð¡ôÇ®¡ô¨k¨k¨T¨[\n");
	printf(" ¨U¡ù1.ÊäÈë±¸×¢¹Ø¼ü×Ö      ¨U\n");
	printf(" ¨^¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨a\n");

	scanf("%s",getremark);//ÊäÈë¹Ø¼ü´Ê

	system("cls");
	printf("    ¨n¨n¨n¨n¨n¨n¨k¨k¨k¨k¨k¨k¨k¨k¨n¨n¨n¨n¨n¨n\n");
	printf(" ¨X¨T¨T¨k¡ôÕÆ¡ôÎÕ¡ô½ð¡ôÇ®¡ô¨k¨k¨T¨[\n");
	SetColor(12,0);
	printf(" ¨U¡ù1.ÊäÈë±¸×¢¹Ø¼ü×Ö      ¨U\n");
	SetColor(14,0);
	printf(" ¨^¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨a\n");
	Sleep(450);

	system("cls");
	printf("    ¨n¨n¨n¨n¨n¨n¨k¨k¨k¨k¨k¨k¨k¨k¨n¨n¨n¨n¨n¨n\n");
	printf(" ¨X¨T¨T¨k¡ôÕÆ¡ôÎÕ¡ô½ð¡ôÇ®¡ô¨k¨k¨T¨[\n");
	printf(" ¨U¡ù1.Ê±¼äÅÅÐò            ¨U\n");
	printf(" ¨U¡ù2.½ðÇ®ÅÅÐò   ¡¡       ¨U\n");
	printf(" ¨^¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨a\n");
	printf("ÅÅÐò>>");
	do 
	{
		fflush(stdin);
		scanf("%d",&choice);
	} while (choice >2 || choice < 1);


	switch(choice)
	{
	case 1: 
		system("cls");
		printf("    ¨n¨n¨n¨n¨n¨n¨k¨k¨k¨k¨k¨k¨k¨k¨n¨n¨n¨n¨n¨n\n");
		printf(" ¨X¨T¨T¨k¡ôÕÆ¡ôÎÕ¡ô½ð¡ôÇ®¡ô¨k¨k¨T¨[\n");
		SetColor(12,0);
		printf(" ¨U¡ù1.Ê±¼äÅÅÐò            ¨U\n");
		SetColor(14,0);
		printf(" ¨U¡ù2.½ðÇ®ÅÅÐò   ¡¡       ¨U\n");
		printf(" ¨^¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨a\n");

		Sleep(450);
		break;
	case 2:
		system("cls");
		printf("    ¨n¨n¨n¨n¨n¨n¨k¨k¨k¨k¨k¨k¨k¨k¨n¨n¨n¨n¨n¨n\n");
		printf(" ¨X¨T¨T¨k¡ôÕÆ¡ôÎÕ¡ô½ð¡ôÇ®¡ô¨k¨k¨T¨[\n");
		printf(" ¨U¡ù1.Ê±¼äÅÅÐò            ¨U\n");
		SetColor(12,0);
		printf(" ¨U¡ù2.½ðÇ®ÅÅÐò   ¡¡       ¨U\n");
		SetColor(14,0);
		printf(" ¨^¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨T¨a\n");

		Sleep(450);
		break;

	}

	switch(choice)
	{
	case 1:ReadSortRemark(getremark,CompareTime);
		break;
	case 2:ReadSortRemark(getremark,CompareNum);
		break;
	}
}
	
	

