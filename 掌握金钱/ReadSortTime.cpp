#include "main.h"

Node *ReadSortTime (TIME time,int need,int (*compare)(Node *p,Node *q))
{
	FILE *fp = fopen("�˵�.text","r");
	Node *head = NULL;
	MONEY money;
	Node *p,*q;
	MONEY temp;
	
 	if (fp)
	{
		//fscanf(fp,"%*[^\n]%*c");
		while(fscanf(fp,"%d/",&money.time.year)!=EOF)
		{


			fscanf(fp,"%d/",&money.time.month);    
			fscanf(fp,"%d    ",&money.time.day);		
			fscanf(fp,"%s    ",&money.real_type);
			fscanf(fp,"%f    ",&money.number);
			fscanf(fp,"%s    ",money.remark);
			if (ScreenTime(need,time,money)==1)//��Ҫ���������ɸѡ
			{
				Add(&head,&money);
			}
		}
	}
	else
	{
		printf("�ļ���ʧ��,");
		system("pause");
	}
	for (p=head;p->next!=NULL;p=p->next)//���򻷽�
	{
		for (q=p->next;q;q=q->next)
		{
			if ((*compare)(p,q))
			{
				temp = p->money;
				p->money = q->money;
				q->money = temp;
			}
		}
	}
	PrintAll (head);//��ӡ����
	fclose(fp);
	return head;
}