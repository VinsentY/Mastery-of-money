#include "main.h"

////////////////////////////////
//ͼ�ο�ʹ�ã�easyX
////////////////////////////////

int main ()
{
	
 	HWND window = GetConsoleWindow();
 	SetWindowPos(window, HWND_TOP, 335, 45, 800, 600, SWP_SHOWWINDOW);//�̶�����λ��
	float passspeed = 0.5;//������ɶ����ٶȱ���
	int choice = 0;//ѡ�����
	choice = Register(&passspeed);//����ϵͳ
	while(1)
	{	
		Function(choice); 
		choice = Menu(passspeed);//������
	}
}