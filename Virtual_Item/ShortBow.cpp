#pragma warning (disable:4996)
#include"ShortBow.h"
#include<iostream>
#include<cstring>

using namespace std;

ShortBow::ShortBow()
{
	SetDamage(70);
	SetWeight(30);
	SetLevel(5);
	SetDurability(60);
	SetEquip(false);
	SetItemName("������");
	SetUsed("�� ����.");
}
ShortBow::~ShortBow()
{
	//delete[] m_pName;
}
