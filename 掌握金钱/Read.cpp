#include "main.h"

Node *Read ()
{
	FILE *fp = fopen("�˵�.text","r");
	Node *head = NULL;
	MONEY money;
	if (fp)
	{
		//fscanf(fp,"%*[^\n]%*c");
		while(fscanf(fp,"%d/",&money.time.year)!=EOF)
		{				
			fscanf(fp,"%d/",&money.time.month);    
			fscanf(fp,"%d    ",&money.time.day);
			fscanf(fp,"%s    ",&money.real_type);
			fscanf(fp,"%f    ",&money.number);
			fscanf(fp,"%s    ",money.remark);//��������
			Add(&head,&money);//��ӵ�������
		}
	}
	fclose(fp);
	return head;
}