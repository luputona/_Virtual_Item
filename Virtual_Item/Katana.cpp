#pragma warning (disable:4996)
#include"Katana.h"
#include<iostream>
#include<cstring>

using namespace std;

Katana::Katana()
{
	SetDamage(60);
	SetWeight(10);
	SetLevel(20);
	SetDurability(50);
	SetEquip(false);
	SetItemName("īŸ��");
	SetUsed("�� �ֵѷ���");
}
Katana::~Katana()
{
	//delete[] m_pName;
}
