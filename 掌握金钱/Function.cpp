#include "main.h"

void Function(int choice)
{
		system("cls");
		
		switch(choice)
		{
		case 1: RecordToday();  //���뵱������
			break;
		case 2: RecordOtherday(); //��������ʱ������
			break;
		case 3: Sort(CompareNum);//��ȡ�������ݲ�����Ǯ������
			break;
		case 4: Sort(CompareTime);//��ȡ�������ݲ���ʱ��˳������
			break;
		case 5: TypeSort();   //��ȡ��Ӧ�������ݲ����� ��������
			break;
		case 6: SearchbyTime();  //��ȡ��Ӧʱ���ڵ����ݲ����� ��������
			break;
		case 7: SearchbyMoney();  //��ȡ��Ӧ��Ǯ��Χ�ڵ����ݲ����� ��������
			break;
		case 8: SearchbyRemark();  //��ȡ���б�ע�ؼ��ʵ����ݲ����� ��������
			break;
		case 9: TypeRatio();  //���ͱ���������"����ѧ"���� ����/�������
			break;
		case 10: exit(1);  //�˳�
			break;
		default: printf("ѡ���������");
			break;

		}
}