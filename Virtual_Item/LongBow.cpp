#pragma warning (disable:4996)
#include"LongBow.h"
#include<iostream>
#include<cstring>

using namespace std;

LongBow::LongBow()
{
	SetDamage(150);
	SetWeight(40);
	SetLevel(15);
	SetDurability(100);
	SetEquip(false);
	SetItemName("�պ���");
	SetUsed("�� ����.");
}
LongBow::~LongBow()
{
	//delete[] m_pName;
}
