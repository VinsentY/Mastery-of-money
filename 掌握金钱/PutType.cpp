#include "main.h"

char *PutType (int type)
{
	char *stype;
	switch (type)
	{
	case 0: stype = "基本消费";
		break;
	case 1: stype = "学习消费";
		break;
	case 2: stype = "休闲娱乐";
		break;
	case 3: stype = "人际交往";
		break;
// 	case 1: stype = "日常饮食";//吃饭花的钱
// 		break;
// 	case 2: stype = "衣物饰品";//买衣服和穿戴饰品花的钱
// 		break;
// 	case 3: stype = "交通出行";//坐车花的钱
// 		break;
// 	case 4: stype = "生活用品";//牙膏、沐浴露、洗衣液等
// 		break;
// 	case 5: stype = "医疗用品";//各种药钱
// 		break;
// 	case 6: stype = "装饰用品";//提高逼格的装饰用品
// 		break;
// 	case 7: stype = "学习花销";//学习上的花销
// 		break;
// 	case 8: stype = "人际交往";//给女朋友买礼物啊
// 		break;
// 	case 9: stype = "娱乐活动";//各种娱乐各种嗨
// 		break;
// 	case 10: stype = "数码设备";//手机平板笔记本
// 		break;
// 	case 11: stype = "其他";//神秘物品
// 		break;
	default: stype = "NULL";
	}
	return stype;
}
