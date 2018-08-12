#include "main.h"

int ScreenRemark (char *getremark,MONEY money)
{
	if(strstr(money.remark,getremark)!=NULL)   
	{
		return 1;
	}
	else   
	{
		return 0;
	}
}