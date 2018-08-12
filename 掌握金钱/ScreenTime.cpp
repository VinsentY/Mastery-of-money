#include "main.h"

int ScreenTime (int need,TIME time,MONEY money)
{
	switch (need)
	{
		case 1: if (time.year==money.time.year&&time.month==money.time.month&&time.day==money.time.day)
				{
					return 1;
				}
				return -1;
				break;
		case 2: if (time.year==money.time.year&&time.month==money.time.month)
				{
					return 1;
				}
				return -1;
			break;
		case 3: if (time.year==money.time.year)
				{
					return 1;
				}
				return -1;
			break;
	}
	return -1;
}