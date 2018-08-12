#include "main.h"

Node *ReadSortRemark (char *getremark,int (*compare)(Node *p,Node *q))
{
	FILE *fp = fopen("账单.text","r");
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
			if (ScreenRemark(getremark,money))//按要求进行数据筛选
			{
				Add(&head,&money);
			}
		}
	}
	else
	{
		printf("文件打开失败,");
		system("paause");
	}
	for (p=head;p->next!=NULL;p=p->next)//排序环节
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
	PrintAll (head);//打印环节
	fclose(fp);
	return head;
}