#pragma warning(disable : 4996)
#include"item.h"
#include"Sword.h"
#include<iostream>
#include<cstring>

using namespace std;

Sword::Sword()
{

}
Sword::~Sword()
{
	//delete [] m_pName;
}
void Sword::SetUsed(char *_pUsed)
{
	int len = strlen(_pUsed);
	m_pUsed = new char[len] + 1;
	strcpy(m_pUsed, _pUsed);
}
char *Sword::GetUsed()
{
	return m_pUsed;
}
void Sword::SetDamage(int _damage)
{
	m_damage = _damage;
}
void Sword::SetWeight(int _weight)
{
	m_weight = _weight;
}
void Sword::SetLevel(int _level) 
{
	m_level = _level;
}
void Sword::SetDurability(int _durability)
{
	m_durability = _durability;
}
void Sword::SetEquip(bool _isEquip)
{
	m_isEquip = _isEquip;
}
//void Sword::ShowUseMessage()
//{
//	cout << m_pName << "À» ÈÖµÑ·¶´Ù" << endl;
//}
void Sword::SetItemName(char *_pName)
{
	int len = strlen(_pName);
	m_pName = new char[len] + 1;
	strcpy(m_pName, _pName);
}
char *Sword::GetItemName()
{
	return m_pName;
}
int Sword::GetDamage()
{
	return m_damage;
}
int Sword::GetWeight()
{
	return m_weight;
}
int Sword::GetLevel()
{
	return m_level;
}
int Sword::GetDurability()
{
	return m_durability;
}
bool Sword::GetIsEquip()
{
	return m_isEquip;
}