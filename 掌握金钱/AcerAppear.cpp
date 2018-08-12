#include "main.h"

void AcerAppear (CO *co3,CO *co4,int startthird,IMAGE img,int *startfourth,int back_startfourth)
{
	/*CO co = {232,co3->copper_y,0,co3->copper_vy};*/
// 	if (back_startfourth>=2)
// 	{
// 		co4->copper_y = 268;
// 		co4->copper_vy = 0;
// 	}
	
	if (back_startfourth==2)
	{
		co3->copper_vy = 1.2;
		*startfourth = 3;
	}
	if (back_startfourth==3)
	{
		co4->copper_vy = 1.2;
		*startfourth = 4;
	}
	if(startthird==1)
	{	
		putimage(co3->copper_x, co3->copper_y, &img);
		putimage(co4->copper_x, co4->copper_y, &img);//¼ä¾à
		co3->copper_y = co3->copper_y + co3->copper_vy;	
		co4->copper_y = co4->copper_y + co4->copper_vy;	
		if (co3->copper_vy>0)
		{
			co3->copper_vy = co3->copper_vy - 0.001;
		}
		if (co4->copper_vy>0)
		{
			co4->copper_vy = co4->copper_vy - 0.001;
		}
		if (co3->copper_y>268&&*startfourth==0)
		{
			co3->copper_vy = 0;
			co3->copper_y =268;
			co4->copper_vy = 0;
			co4->copper_y =268;
			*startfourth = 1;//°å¿é1

		}
		
	}
	
	
}