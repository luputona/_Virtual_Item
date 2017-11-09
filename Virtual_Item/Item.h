#pragma once
#include<iostream>
#include<cstring>


class Item
{
public:
	enum E_ITEM_LIST
	{
		E_LONGSWORD =1,
		E_KATANA,
		E_CLAYMORE,		
		E_SHORTBOW,
		E_LONGBOW,
		E_CROSSBOW,
		E_POLEAXE,
		E_HANDAXE,
		E_BATTLEAXE,
		E_MAX
	};
protected:
	int m_damage;
	int m_weight;
	int m_level;
	int m_durability; //내구력
	bool m_isEquip; //장착 해제 체크
	
public:
	Item()
	{}
	~Item()
	{}
	virtual void SetDamage(int _damage) = 0;
	virtual void SetWeight(int _weight) = 0;
	virtual void SetLevel(int _level) = 0;
	virtual void SetDurability(int _durability) = 0;
	virtual void SetEquip(bool _isEquip) = 0;

	virtual int GetDamage() = 0;
	virtual int GetWeight() = 0;
	virtual int GetLevel() = 0;
	virtual int GetDurability() = 0;
	virtual bool GetIsEquip() = 0;
	virtual char *GetItemName() =0;
	virtual void SetItemName(char *_pName)=0;

};
