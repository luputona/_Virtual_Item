#pragma warning(disable : 4996)
#include"Bow.h"
#include"Item.h"
#include<iostream>
#include<cstring>

using namespace std;

Bow::Bow()
{

}
Bow::~Bow()
{
	//delete [] m_pName;
}
void Bow::SetUsed(char *_pUsed)
{
	int len = strlen(_pUsed);
	m_pUsed = new char[len] + 1;
	strcpy(m_pUsed, _pUsed);
}
char *Bow::GetUsed()
{
	return m_pUsed;
}
void Bow::SetDamage(int _damage)
{
	m_damage = _damage;
}
void Bow::SetWeight(int _weight)
{
	m_weight = _weight;
}
void Bow::SetLevel(int _level)
{
	m_level = _level;
}
void Bow::SetDurability(int _durability)
{
	m_durability = _durability;
}
void Bow::SetEquip(bool _isEquip)
{
	m_isEquip = _isEquip;
}
void Bow::ShowUseMessage()
{
	cout << m_pName << "·Î ½ú´Ù." << endl;
}
void Bow::SetItemName(char *_pName)
{
	int len = strlen(_pName);
	m_pName = new char[len] + 1;
	strcpy(m_pName, _pName);
}
char *Bow::GetItemName()
{
	return m_pName;
}
int Bow::GetDamage()
{
	return m_damage;
}
int Bow::GetWeight()
{
	return m_weight;
}
int Bow::GetLevel()
{
	return m_level;
}
int Bow::GetDurability()
{
	return m_durability;
}
bool Bow::GetIsEquip()
{
	return m_isEquip;
}