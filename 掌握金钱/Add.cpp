#include "main.h"

void Add(Node **pHead,MONEY *money)
{
	//���������
	Node *p = (Node*)malloc(sizeof(Node));
	Node *last = *pHead;
	p->money = *money;
	p->next = NULL;
	// �ҵ����һ���ڵ�
	if (last)
	{
		while (last->next)
		{
			last = last->next;
		}

		last->next = p;//����
	}
	else
	{
		*pHead = p;
	}
}