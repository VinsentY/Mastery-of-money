#include "main.h"

void Printword (WORDS pic,int startfourth,int *back_startfourth,CO co1,CO co2,CO co3,CO co4)
{
	if (startfourth>=1)
	{
		putimage(100,100,&pic.zhang);
		*back_startfourth = 1;
	}
	if (startfourth>=2&&co1.copper_y>600)
	{
		putimage(250,100,&pic.wo);
		*back_startfourth = 2;
	}
	if (startfourth>=3&&co3.copper_y>600)
	{
		putimage(440,100,&pic.jin);
		*back_startfourth = 3;
	}
	if (startfourth>=4&&co4.copper_y>600)
	{
		putimage(600,100,&pic.qian);
		*back_startfourth = 5;
	}
	
}