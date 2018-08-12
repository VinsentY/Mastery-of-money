#include "main.h"

void PrintLine (PIXEL *first,PIXEL *second)
{

	int S = 1;
	float L = 0.5f;
// 	int first->y = 15;
// 	int x = 20;
// 	int second->x = 785;
// 	int second->y = 585;

	if(first->y<585)
	{
		first->H += 1;
		putpixel(15,first->y,HSLtoRGB(first->H, S, L));

		putpixel(16,first->y,HSLtoRGB(first->H, S, L));
		first->y++;
		/*		putpixel(17,first->y,HSLtoRGB(H, S, L));*/
		// 		putpixel(x++,50,HSLtoRGB(H, S, L));
		// 		putpixel(x++,50,HSLtoRGB(H, S, L));
	}
	if(first->x<785&&first->y>=585)
	{

		first->H += 1;
		putpixel(first->x,585,HSLtoRGB(first->H, S, L));

		putpixel(first->x,586,HSLtoRGB(first->H, S, L));
		first->x++;
		/*		putpixel(17,first->y,HSLtoRGB(H, S, L));*/
		// 		putpixel(x++,50,HSLtoRGB(H, S, L));
		// 		putpixel(x++,50,HSLtoRGB(H, S, L));
	}




	if(second->y>15)
	{
		second->H += 1;
		putpixel(785,second->y,HSLtoRGB(second->H, S, L));

		putpixel(786,second->y,HSLtoRGB(second->H, S, L));
		/*		putpixel(17,first->y,HSLtoRGB(H, S, L));*/
		second->y--;
		// 		putpixel(x++,50,HSLtoRGB(H, S, L));
		// 		putpixel(x++,50,HSLtoRGB(H, S, L));
	}
	
	if(second->x>15&&second->y==15)
	{
		

		second->H += 1;
		putpixel(second->x,15,HSLtoRGB(second->H, S, L));

		putpixel(second->x,16,HSLtoRGB(second->H, S, L));
		second->x--;

		/*		putpixel(17,first->y,HSLtoRGB(H, S, L));*/
		
		// 		putpixel(x++,50,HSLtoRGB(H, S, L));
		// 		putpixel(x++,50,HSLtoRGB(H, S, L));
	}
// 	Sleep(0.99999);
}