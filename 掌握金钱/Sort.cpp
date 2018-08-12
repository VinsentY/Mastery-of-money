#include "main.h"

void Sort (int (*compare)(Node *p,Node *q))
{
	Node *p,*q;
	MONEY temp;
	Node *head;
	head = Read();//将文件数据全部读入链表中
	for (p=head;p;p=p->next)
	{
		for (q=p->next;q;q=q->next)
		{
			if ((*compare)(p,q)) //函数指针对应数量排序和时间排序
			{
				temp = p->money;
				p->money = q->money;
				q->money = temp;
			}
		}
	}
	PrintAll(head);//打印出数据

}
