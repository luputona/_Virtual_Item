#pragma warning (disable:4996)
#include"BattleAxe.h"
#include<iostream>
#include<cstring>

using namespace std;

BattleAxe::BattleAxe()
{
	SetDamage(250);
	SetWeight(60);
	SetLevel(25);
	SetDurability(300);
	SetEquip(false);
	SetItemName("��Ʋ����");
	SetUsed("�� �����.");
}
BattleAxe::~BattleAxe()
{
	//delete[] m_pName;
}
