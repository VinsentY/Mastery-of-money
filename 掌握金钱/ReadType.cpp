#include "main.h"

Node *ReadType (int cost_type)
{
	FILE *fp = fopen("�˵�.text","r");
	Node *head = NULL;
	MONEY money;
	char *gettype = PutType(cost_type);//����������ת������������
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
			if (strcmp(gettype,money.real_type)==0)//��Ҫ���������ɸѡ
			{
				Add(&head,&money);
			}

			
		}
	}
	fclose(fp);
	return head;
}