#pragma warning(disable : 4996)
#pragma once
#include"define.h"
#include "Infomation.h"
#include<iostream>
#include<cstring>
using namespace std;
Infomation::Infomation()
{
}


Infomation::~Infomation()
{
}

void Infomation::ShowInfo()
{
	Sword *pSword[Sword::E_MAX];
	LongSword myLongSword;
	Katana myKatana;
	ClayMore myClaymore;

	pSword[Sword::E_LONGSWORD] = &myLongSword;
	pSword[Sword::E_KATANA] = &myKatana;
	pSword[Sword::E_CLAYMORE] = &myClaymore;

	Bow *pBow[Bow::E_MAX];
	ShortBow myShortBow;
	LongBow myLongBow;
	CrossBow myCrossBow;

	pBow[Bow::E_SHORTBOW] = &myShortBow;
	pBow[Bow::E_LONGBOW] = &myLongBow;
	pBow[Bow::E_CROSSBOW] = &myCrossBow;

	Axe *pAxe[Axe::E_MAX];
	BattleAxe myBattleAxe;
	PoleAxe myPoleAxe;
	HandAxe myHandAxe;

	pAxe[Axe::E_BATTLEAXE] = &myBattleAxe;
	pAxe[Axe::E_HANDAXE] = &myHandAxe;
	pAxe[Axe::E_POLEAXE] = &myPoleAxe;
	

	cout << "============================================================================\n";
	cout << "\t\t여기는 훈련장 입니다. 원하시는 무기를 선택 하세요" << endl << endl;
	cout << "\t\t검 계열   | 1." << pSword[Sword::E_LONGSWORD]->GetItemName() << "  | 2." << pSword[Sword::E_KATANA]->GetItemName() << "    | 3." << pSword[Sword::E_CLAYMORE]->GetItemName() << "|" << endl; 
	
	cout << "\t\t활 계열   | 4." << pBow[Bow::E_SHORTBOW]->GetItemName() << "  | 5." << pBow[Bow::E_LONGBOW]->GetItemName() << "    | 6." << pBow[Bow::E_CROSSBOW]->GetItemName() << "|" << endl;
	//<< endl;
	cout << "\t\t도끼 계열 | 7." <<  pAxe[Axe::E_POLEAXE]->GetItemName() <<" | 8."<< pAxe[Axe::E_HANDAXE]->GetItemName() <<" | 9." << pAxe[Axe::E_BATTLEAXE]->GetItemName()<< "  |" <<  endl;
	cout << "============================================================================\n";

	//cout << "\t\t\t현재 착용 중인 아이템" << endl;
	
}