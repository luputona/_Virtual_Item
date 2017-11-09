#pragma warning(disable : 4996)
#include"Axe.h"
#include"Item.h"
#include<iostream>
#include<cstring>

using namespace std;

Axe::Axe()
{

}
Axe::~Axe()
{
	//delete [] m_pName;
}
void Axe::SetUsed(char *_pUsed)
{
	int len = strlen(_pUsed);
	m_pUsed = new char[len] + 1;
	strcpy(m_pUsed, _pUsed);
}
char *Axe::GetUsed()
{
	return m_pUsed;
}
void Axe::SetDamage(int _damage)
{
	m_damage = _damage;
}
void Axe::SetWeight(int _weight)
{
	m_weight = _weight;
}
void Axe::SetLevel(int _level)
{
	m_level = _level;
}
void Axe::SetDurability(int _durability)
{
	m_durability = _durability;
}
void Axe::SetEquip(bool _isEquip)
{
	m_isEquip = _isEquip;
}
void Axe::ShowUseMessage()
{
	cout << m_pName << "·Î Âï¾ú´Ù" << endl;
}
void Axe::SetItemName(char *_pName)
{
	int len = strlen(_pName);
	m_pName = new char[len] + 1;
	strcpy(m_pName, _pName);
}
char *Axe::GetItemName()
{
	return m_pName;
}
int Axe::GetDamage()
{
	return m_damage;
}
int Axe::GetWeight()
{
	return m_weight;
}
int Axe::GetLevel()
{
	return m_level;
}
int Axe::GetDurability()
{
	return m_durability;
}
bool Axe::GetIsEquip()
{
	return m_isEquip;
}