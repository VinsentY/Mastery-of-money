#include "main.h"

void LoadOption (float *startspeed,float *passspeed)
{
	//从文件中读取速度设定
	FILE *fp;
	if (fp=fopen("动画速度设置.txt","r+"))
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