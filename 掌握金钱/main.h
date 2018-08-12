#ifndef Control_Money
#define Control_Money

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <windows.h>

typedef struct _time//时间结构体
{
	int year;
	int month;
	int day;
}TIME;

typedef struct moneynature//金钱数据结构体
{
	float number;
	char real_type[12];
	char remark[30];
	TIME time;

}MONEY;

typedef struct _node//链表
{
	MONEY money;
	struct _node *next;
}Node;



int Register (float *passspeed);
int Menu(float passspeed);

void Function(int choice);
void RecordToday ();
void Add(Node **pHead,MONEY *money);
void Timerecord(TIME *times);
char *PutType (int type);
void Store (MONEY money,int cost_type);
void RecordOtherday ();
Node *Read ();
void PrintAll (Node *head);
int CompareTime (Node *p,Node *q);
int CompareNum (Node *p, Node *q);
void TypeSort ();
void Sort (int (*compare)(Node *p,Node *q));
Node *ReadType (int cost_type);

Node *ReadSortTime (TIME time,int need,int (*compare)(Node *p,Node *q));
int ScreenTime (int need,TIME time,MONEY money);
void SearchbyTime ();

int ScreenMoney (float little,float big,MONEY money);
Node *ReadSortMoney (float little,float big,int (*compare)(Node *p,Node *q));
void SearchbyMoney ();

int ScreenRemark (char *getremark,MONEY money);
Node *ReadSortRemark (char *getremark,int (*compare)(Node *p,Node *q));
void SearchbyRemark ();

void TypeRatio ();
void Clear ();

#endif

#ifndef  Register_Money
#define Register_Money
#include <graphics.h>
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <Windows.h>

#define BRadius 30
#define SRadius 24
#define BLength 11
#define SLength 6

#define AnimaRadius 31.3

typedef struct copper//金币数据结构体
{
	float copper_x;
	float copper_y;
	float copper_vx;
	float copper_vy;
}CO;

typedef struct word_x//掌握金钱图片结构体
{
	IMAGE zhang;
	IMAGE wo;
	IMAGE jin;
	IMAGE qian;
}WORDS;

typedef struct pixel//彩色线段结构体
{
	int H;
	int x;
	int y;
}PIXEL;

int Register (float *passspeed);
void CopperJump (CO *co1,int *jump,int *collision,int *startnext,int *startfourth,int back_startfourth);
void CopperAppear (CO *co2,int start,int *collision,int *startthird,int *startfourth,int back_startfourth);
void AcerAppear (CO *co3,CO *co4,int startthird,IMAGE img,int *startfourth,int back_startfourth);
void Printword (WORDS pic,int startfourth,int *back_startfourth,CO co1,CO co2,CO co3,CO co4);
void PrintLine (PIXEL *first,PIXEL *second);
void Animation (IMAGE activity,float passspeed);
void LoadOption (float *startspeed,float *passspeed);
void GetOption (float *startspeed,float *passspeed);
void AboutUs(float passspeed);
void MakeMask();
void Lighting(int _x, int _y);
void OthAnimation ();
void Repetition(int n,int m,int *address);
int Menu(float passspeed);
void SetColor(unsigned short ForeColor,unsigned short BackGroundColor);
void SetPos(int x,int y);
#endif // Register



