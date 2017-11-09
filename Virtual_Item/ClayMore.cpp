#pragma warning (disable:4996)
#include"Claymore.h"
#include<iostream>
#include<cstring>

using namespace std;

ClayMore::ClayMore()
{
	SetDamage(150);
	SetWeight(40);
	SetLevel(21);
	SetDurability(200);
	SetEquip(false);
	SetItemName("클레이모어");
	SetUsed("를 휘둘렀다");
}
ClayMore::~ClayMore()
{
	//delete[] m_pName;
}
