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
	SetItemName("Ŭ���̸��");
	SetUsed("�� �ֵѷ���");
}
ClayMore::~ClayMore()
{
	//delete[] m_pName;
}
