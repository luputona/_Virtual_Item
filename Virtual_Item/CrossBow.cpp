#pragma warning (disable:4996)
#include"CrossBow.h"
#include<iostream>
#include<cstring>

using namespace std;

CrossBow::CrossBow()
{
	SetDamage(80);
	SetWeight(10);
	SetLevel(20);
	SetDurability(50);
	SetEquip(false);
	SetItemName("크로스보우");
	SetUsed("로 쐈다.");
}
CrossBow::~CrossBow()
{
	//delete[] m_pName;
}
