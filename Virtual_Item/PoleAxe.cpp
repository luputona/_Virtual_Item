#pragma warning (disable:4996)
#include"PoleAxe.h"
#include<iostream>
#include<cstring>

using namespace std;

PoleAxe::PoleAxe()
{
	SetDamage(300);
	SetWeight(80);
	SetLevel(33);
	SetDurability(350);
	SetEquip(false);
	SetItemName("�� ����");
	SetUsed("�� �����.");
}
PoleAxe::~PoleAxe()
{
	//delete[] m_pName;
}
