#include "main.h"



int CompareTime (Node *p,Node *q)
{
	if (q->money.time.year>p->money.time.year)//早的数据排在前面
	{
		return 0;
	}
	else if (q->money.time.year<p->money.time.year)
	{
		return 1;
	}
	else
	{
		if (q->money.time.month>p->money.time.month)
		{
			return 0;
		}
		else if (q->money.time.month<p->money.time.month)
		{
			return 1;
		}
		else
		{
			if (q->money.time.day>p->money.time.day)
			{
				return 0;
			}
			else if (q->money.time.day<p->money.time.day)
			{
				return 1;
			}
		}
	}
		
	return 0;
}

