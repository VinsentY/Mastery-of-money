#include "main.h"

void Add(Node **pHead,MONEY *money)
{
	//添加至链表
	Node *p = (Node*)malloc(sizeof(Node));
	Node *last = *pHead;
	p->money = *money;
	p->next = NULL;
	// 找到最后一个节点
	if (last)
	{
		while (last->next)
		{
			last = last->next;
		}

		last->next = p;//连接
	}
	else
	{
		*pHead = p;
	}
}