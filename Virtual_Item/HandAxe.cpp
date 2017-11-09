#pragma warning (disable:4996)
#include"HandAxe.h"
#include<iostream>
#include<cstring>

using namespace std;

HandAxe::HandAxe()
{
	SetDamage(100);
	SetWeight(40);
	SetLevel(10);
	SetDurability(150);
	SetEquip(false);
	SetItemName("ÇÚµå ¿¢½º");
	SetUsed("·Î Âï¾ú´Ù.");
}
HandAxe::~HandAxe()
{
	//delete[] m_pName;
}
