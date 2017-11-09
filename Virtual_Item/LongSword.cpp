#pragma warning (disable:4996)
#include"LongSword.h"
#include<iostream>
#include<cstring>

using namespace std;

LongSword::LongSword()
{
	SetDamage(60);
	SetWeight(20);
	SetLevel(11);
	SetDurability(100);
	SetEquip(false);
	SetItemName("∑’º“µÂ");
	SetUsed("∏¶ »÷µ—∑∂¥Ÿ");
}
LongSword::~LongSword()
{
	//delete [] m_pName;
}
