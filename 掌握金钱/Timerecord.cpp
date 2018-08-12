#include "main.h"



void Timerecord(TIME *times)
{
	time_t timep;  
	struct tm *p;  
	time(&timep);  
	p =localtime(&timep); //此函数获得的tm结构体的时间，是已经进行过时区转化为本地时间  


	(*times).year = 1900+p->tm_year;
	(*times).month = 1+p->tm_mon;
	(*times).day = p->tm_mday;//读取时间到变量中



}