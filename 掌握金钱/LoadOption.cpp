#include "main.h"

void LoadOption (float *startspeed,float *passspeed)
{
	//���ļ��ж�ȡ�ٶ��趨
	FILE *fp;
	if (fp=fopen("�����ٶ�����.txt","r+"))
	{
		fscanf(fp,"%*[^:]%*c");
		fscanf(fp,"%f",startspeed);
		fscanf(fp,"%*[^:]%*c");
		fscanf(fp,"%f",passspeed);
	}
	else
	{
		exit(0);
	}
	fclose(fp);
}