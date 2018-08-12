#include "main.h"

////////////////////////////////
//�˺���Ϊ�������Ϻ�������ԭ������
////////////////////////////////


#define RANGE 80			// �ƹ�����뾶
#define WIDTH 400			// �������
#define HEIGHT 300			// �����߶�
#define ZOOM 2				// ��ʾʱ�����ű���
#define PI 3.1415926536		// Բ����

DWORD* g_bufMask;			// ָ�򡰽����IMAGE ��ָ��
DWORD* g_bufRender;			// ָ����Ⱦ IMAGE ��ָ��
IMAGE animation;

void AboutUs(float passspeed)
{
	// ��ʼ����ͼ����
	initgraph(WIDTH * ZOOM, HEIGHT * ZOOM);
	HCURSOR hcur = LoadCursor(NULL, IDC_ARROW);		// ����ϵͳԤ�õ������ʽ
	HWND hwnd = GetHWnd();
	SetClassLong(hwnd, GCL_HCURSOR, (long)hcur); 
	BeginBatchDraw();
	DWORD* bufScreen = GetImageBuffer(NULL);

	// ��������
	MakeMask();

	// ������Ⱦ����
	IMAGE imgRender(WIDTH, HEIGHT);
	g_bufRender = GetImageBuffer(&imgRender);

	// ���������Ϣ����
	MOUSEMSG msg;

	while(true)
	{
		
		// ��ȡһ������ƶ�����Ϣ
		do
		{
			msg = GetMouseMsg();
		}
		while((msg.uMsg != WM_MOUSEMOVE) || MouseHit());

		// �����λ��ģ��ƹ�
		Lighting(msg.x / ZOOM, msg.y / ZOOM);

		// ����Ⱦ�������������ʾ�ڻ�ͼ������
		int ps = 0, pr = 0;
		for (int y = 0; y < HEIGHT; y++)
			for (int x = 0; x < WIDTH; x++, pr++)
			{
				ps = y* ZOOM * WIDTH * ZOOM + x * ZOOM;
				for (int zy = 0; zy < ZOOM; zy++)
				{
					for (int zx = 0; zx < ZOOM; zx++)
						bufScreen[ps++] = g_bufRender[pr];
					ps += ZOOM * (WIDTH - 1);
				}
			}

			// ˢ����ʾ������ʱ
			FlushBatchDraw();
			if (_kbhit()||msg.mkLButton)
			{
				EndBatchDraw();
				closegraph();	
				OthAnimation();
				return;
			}
	}
}

// �������ֿ⡱
void MakeMask()
{
	// �������ֿ⡱ IMAGE ����
	static IMAGE g_imgMask(WIDTH, HEIGHT);
	g_bufMask = GetImageBuffer(&g_imgMask);

	// ���û�ͼĿ��
	SetWorkingImage(&g_imgMask);

	// ���ơ��ֿ⡱
	settextstyle(70, 0, _T("Courier"));
	outtextxy(30, 75, _T("  We  Are"));
	outtextxy(30, 175, _T("Code Lover"));
	settextstyle(10, 0, _T("Courier"));


	// �ָ���ͼĿ��ΪĬ�ϴ���
	SetWorkingImage(NULL);
}


// ��ָ��λ�á�������
void Lighting(int _x, int _y)
{
	int i;	// ����ѭ������

	// ��� Render ����
	memset(g_bufRender, 0, WIDTH * HEIGHT * 4);

	// ����ƹ�����������
	for(double a = 0; a < 2 * PI; a += PI / 180)	// Բ��ѭ��
	{
		for(int r = 0; r < RANGE; r++)				// �뾶ѭ��
		{
			// �������䵽��λ��
			int x = (int)(_x + cos(a) * r);
			int y = (int)(_y + sin(a) * r);

			// ���߳�����Ļ��Χ����ֹ
			// ��Ϊ�˼�ȫƾģ�����㣬���������Ϻ�����һ�У�
			if (x < 0 || x >= WIDTH || y <= 0 || y >= HEIGHT - 1)
				break;

			// ���������������ֹ
			if(g_bufMask[y * WIDTH + x])
				break;

			// ���ߵ���
			g_bufRender[y * WIDTH + x] += 0x101000;	// 0x101000 �Ǻܵ��Ļ�ɫ
		}
	}

	// �����ع���ȵĵ�
	for (i = WIDTH * HEIGHT - 1; i >= 0; i--)
		if (g_bufRender[i] > 0xffff00)
			g_bufRender[i] = 0xffff00;

	// ������ģ�������ܿ������
	for(i = WIDTH; i < WIDTH * (HEIGHT-1); i++)
		if (!g_bufMask[i])
			for (int j = 0; j < 2; j++)
			{
				g_bufRender[i] = RGB(
					(GetRValue(g_bufRender[i - WIDTH]) + GetRValue(g_bufRender[i - 1]) + GetRValue(g_bufRender[i])
					+ GetRValue(g_bufRender[i + 1]) + GetRValue(g_bufRender[i + WIDTH])) / 5,
					(GetGValue(g_bufRender[i - WIDTH]) + GetGValue(g_bufRender[i - 1]) + GetGValue(g_bufRender[i])
					+ GetGValue(g_bufRender[i + 1]) + GetGValue(g_bufRender[i + WIDTH])) / 5,
					(GetBValue(g_bufRender[i - WIDTH]) + GetBValue(g_bufRender[i - 1]) + GetBValue(g_bufRender[i])
					+ GetBValue(g_bufRender[i + 1]) + GetBValue(g_bufRender[i + WIDTH])) / 5);
			}
}


