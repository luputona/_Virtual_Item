#pragma once
#include"Item.h"
#include"Axe.h"


class BattleAxe : public Axe
{
private:
	char *m_pName;
public:
	BattleAxe();
	~BattleAxe();

	//virtual char *GetItemName();
	//virtual void SetItemName(char *_pName);
	/*virtual void SetDamage(int _damage);
	virtual void SetWeight(int _weight);
	virtual void SetLevel(int _level);
	virtual void SetDurability(int _durability);
	virtual void SetEquip(bool _isEquip);

	virtual int GetDamage();
	virtual int GetWeight();
	virtual int GetLevel();
	virtual int GetDurability();
	virtual bool GetIsEquip();*/


};