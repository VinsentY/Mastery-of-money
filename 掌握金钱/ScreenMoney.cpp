#include "main.h"

int ScreenMoney (float little,float big,MONEY money)
{
	if (money.number>=little&&money.number<=big)
	{
		return 1;
	}

	return 0;
}