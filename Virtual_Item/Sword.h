#pragma once
#include"Item.h"
#include<iostream>
#include<cstring>

class Sword : public Item
{
private:
	char *m_pName;
	char *m_pUsed;

public:
	enum E_SWORD_TYPE
	{
		E_LONGSWORD,
		E_KATANA,
		E_CLAYMORE,
		E_MAX
	};
	
public:
	Sword();
	~Sword();
	virtual void SetUsed(char *_pUsed);
	virtual char *GetUsed();

	virtual void SetDamage(int _damage);
	virtual void SetWeight(int _weight);
	virtual void SetLevel(int _level);
	virtual void SetDurability(int _durability);
	virtual void SetEquip(bool _isEquip);


	virtual int GetDamage();
	virtual int GetWeight();
	virtual int GetLevel();
	virtual int GetDurability();
	virtual bool GetIsEquip();


	virtual char *GetItemName();
	virtual void SetItemName(char *_pName);

};