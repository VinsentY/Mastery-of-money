#include "main.h"



void Store (MONEY money,int cost_type)
{
	FILE *fp = fopen("�˵�.text","a");	
	if (fp)
	{
		//fprintf(fp,"����   ��������   ���  ��ע\n");

		fprintf(fp,"%4d/",money.time.year);//д���������ļ�
		fprintf(fp,"%02d/",money.time.month);
		fprintf(fp,"%02d\t",money.time.day);		
		fprintf(fp,"%s\t",PutType(cost_type));//����������ת������������
		fprintf(fp,"%5.1f\t",money.number);
		fprintf(fp,"%s\n",money.remark);
		
		

	}
	else
	{
		printf("   �ļ���ʧ��");
	}
	fclose(fp);
}
