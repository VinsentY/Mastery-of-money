#include "main.h"



void Timerecord(TIME *times)
{
	time_t timep;  
	struct tm *p;  
	time(&timep);  
	p =localtime(&timep); //�˺�����õ�tm�ṹ���ʱ�䣬���Ѿ����й�ʱ��ת��Ϊ����ʱ��  


	(*times).year = 1900+p->tm_year;
	(*times).month = 1+p->tm_mon;
	(*times).day = p->tm_mday;//��ȡʱ�䵽������



}