#include "main.h"

void Sort (int (*compare)(Node *p,Node *q))
{
	Node *p,*q;
	MONEY temp;
	Node *head;
	head = Read();//���ļ�����ȫ������������
	for (p=head;p;p=p->next)
	{
		for (q=p->next;q;q=q->next)
		{
			if ((*compare)(p,q)) //����ָ���Ӧ���������ʱ������
			{
				temp = p->money;
				p->money = q->money;
				q->money = temp;
			}
		}
	}
	PrintAll(head);//��ӡ������

}
