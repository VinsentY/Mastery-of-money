#include "main.h"

char *PutType (int type)
{
	char *stype;
	switch (type)
	{
	case 0: stype = "��������";
		break;
	case 1: stype = "ѧϰ����";
		break;
	case 2: stype = "��������";
		break;
	case 3: stype = "�˼ʽ���";
		break;
// 	case 1: stype = "�ճ���ʳ";//�Է�����Ǯ
// 		break;
// 	case 2: stype = "������Ʒ";//���·��ʹ�����Ʒ����Ǯ
// 		break;
// 	case 3: stype = "��ͨ����";//��������Ǯ
// 		break;
// 	case 4: stype = "������Ʒ";//���ࡢ��ԡ¶��ϴ��Һ��
// 		break;
// 	case 5: stype = "ҽ����Ʒ";//����ҩǮ
// 		break;
// 	case 6: stype = "װ����Ʒ";//��߱Ƹ��װ����Ʒ
// 		break;
// 	case 7: stype = "ѧϰ����";//ѧϰ�ϵĻ���
// 		break;
// 	case 8: stype = "�˼ʽ���";//��Ů���������ﰡ
// 		break;
// 	case 9: stype = "���ֻ";//�������ָ�����
// 		break;
// 	case 10: stype = "�����豸";//�ֻ�ƽ��ʼǱ�
// 		break;
// 	case 11: stype = "����";//������Ʒ
// 		break;
	default: stype = "NULL";
	}
	return stype;
}
