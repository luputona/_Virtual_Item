#include"define.h"
#include"Infomation.h"
#include<iostream>
#include<cstring>
#include<Windows.h>
#include<time.h>
#define DEFAULT_DAMAGE 99
using namespace std;

void ShowPlayerStatus(char *_pName, int _damage, bool _equip)
{
	cout << "\t\t나의 스테이터스" << endl << endl;
	cout << "\t\t나의 레벨     : 99" << endl;
	cout << "\t\t착용중인 장비 : " << (_equip == true ?  _pName : "착용중인 장비 없음") << endl;
	cout << "\t\t공격력        : " << _damage + DEFAULT_DAMAGE << endl << endl;
}
void ShowWeaponInfo(char *_pName, int _damage, int _weight, int _level, int _durability)
{
	cout << endl;
	cout << "무기명       : " << _pName << endl;
	cout << "공격력       : " << _damage << endl;
	cout << "무게         : " << _weight << endl;
	cout << "착용레벨     : " << _level << endl;
	cout << "최대 내구도  : " << _durability << endl<<endl;	
}

void ShowAttack(char *_pName, char *_pUsed, int _damage)
{
	cout << endl;
	cout << "연습용 허수아비 에게 "<<_pName << _pUsed << "  "<<_damage + DEFAULT_DAMAGE <<"의 데미지를 주었다."<<endl<<endl;
}

void main()
{	
	int nInput = 0;
	char *pName = "";
	char *pUsed = "맨손으로 공격 했다.";
	int nDamage = DEFAULT_DAMAGE;
	int nWeight = 0;
	int nLevel = 0;
	int nDurability = 0;
	bool isEquip = false;
	

	Infomation info;

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

	info.ShowInfo();
	ShowPlayerStatus("", 0, isEquip);

	while (true)
	{
		system("cls");
		info.ShowInfo();
		ShowPlayerStatus(pName, nDamage, isEquip);
				
		cout << "\t\t1.장비 정보 보기 \t2.연습 공격 해보기"<< (isEquip == true ? "\t3.장비 해제":"") << endl;
		cin >> nInput;
		cout << endl;
		if (nInput == 1)
		{
			cout << "\t\t원하시는 장비를 선택해 주세요 : ";
			cin >> nInput;
			cout << endl;

			if (nInput == Item::E_LONGSWORD)
			{
				int len = strlen(pSword[Sword::E_LONGSWORD]->GetItemName());
				pName = new char[len] + 1;
				strcpy_s(pName, len + 1, pSword[Sword::E_LONGSWORD]->GetItemName());

				len = strlen(pSword[Sword::E_LONGSWORD]->GetUsed());
				pUsed = new char[len] + 1;
				strcpy_s(pUsed, len + 1, pSword[Sword::E_LONGSWORD]->GetUsed());

				nDamage = pSword[Sword::E_LONGSWORD]->GetDamage();
				nWeight = pSword[Sword::E_LONGSWORD]->GetWeight();
				nLevel = pSword[Sword::E_LONGSWORD]->GetLevel();
				nDurability = pSword[Sword::E_LONGSWORD]->GetDurability();

				ShowWeaponInfo(pName, nDamage, nWeight, nLevel, nDurability);

				cout << "\t\t착용 하시겠습니까? " << endl;
				cout << "\t\t1.YES  2.NO  : ";
				cin >> nInput;

				if (nInput == 1)
				{
					system("cls");
					info.ShowInfo();
					isEquip = true;
					ShowPlayerStatus(pName, nDamage, isEquip);
					continue;
				}
				else if (nInput == 2)
				{
					continue;
				}
			}
			else if (nInput == Item::E_KATANA)
			{
				int len = strlen(pSword[Sword::E_KATANA]->GetItemName());
				pName = new char[len] + 1;
				strcpy_s(pName, len + 1, pSword[Sword::E_KATANA]->GetItemName());

				len = strlen(pSword[Sword::E_KATANA]->GetUsed());
				pUsed = new char[len] + 1;
				strcpy_s(pUsed, len + 1, pSword[Sword::E_KATANA]->GetUsed());

				nDamage = pSword[Sword::E_KATANA]->GetDamage();
				nWeight = pSword[Sword::E_KATANA]->GetWeight();
				nLevel = pSword[Sword::E_KATANA]->GetLevel();
				nDurability = pSword[Sword::E_KATANA]->GetDurability();

				ShowWeaponInfo(pName, nDamage, nWeight, nLevel, nDurability);

				cout << "\t\t착용 하시겠습니까? " << endl;
				cout << "\t\t1.YES  2.NO  : ";
				cin >> nInput;

				if (nInput == 1)
				{
					system("cls");
					info.ShowInfo();
					isEquip = true;
					ShowPlayerStatus(pName, nDamage, isEquip);
					continue;
				}
				else if (nInput == 2)
				{
					continue;
				}
			}
			else if (nInput == Item::E_CLAYMORE)
			{
				int len = strlen(pSword[Sword::E_CLAYMORE]->GetItemName());
				pName = new char[len] + 1;
				strcpy_s(pName, len + 1, pSword[Sword::E_CLAYMORE]->GetItemName());

				len = strlen(pSword[Sword::E_CLAYMORE]->GetUsed());
				pUsed = new char[len] + 1;
				strcpy_s(pUsed, len + 1, pSword[Sword::E_CLAYMORE]->GetUsed());

				nDamage = pSword[Sword::E_CLAYMORE]->GetDamage();
				nWeight = pSword[Sword::E_CLAYMORE]->GetWeight();
				nLevel = pSword[Sword::E_CLAYMORE]->GetLevel();
				nDurability = pSword[Sword::E_CLAYMORE]->GetDurability();

				ShowWeaponInfo(pName, nDamage, nWeight, nLevel, nDurability);

				cout << "\t\t착용 하시겠습니까? " << endl;
				cout << "\t\t1.YES  2.NO  : ";
				cin >> nInput;

				if (nInput == 1)
				{
					system("cls");
					info.ShowInfo();
					isEquip = true;
					ShowPlayerStatus(pName, nDamage, isEquip);
					continue;
				}
				else if (nInput == 2)
				{
					continue;
				}
			}
			else if (nInput == Item::E_POLEAXE)
			{
				int len = strlen(pAxe[Axe::E_POLEAXE]->GetItemName());
				pName = new char[len] + 1;
				strcpy_s(pName, len + 1, pAxe[Axe::E_POLEAXE]->GetItemName());

				len = strlen(pAxe[Axe::E_POLEAXE]->GetUsed());
				pUsed = new char[len] + 1;
				strcpy_s(pUsed, len + 1, pAxe[Axe::E_POLEAXE]->GetUsed());

				nDamage = pAxe[Axe::E_POLEAXE]->GetDamage();
				nWeight = pAxe[Axe::E_POLEAXE]->GetWeight();
				nLevel = pAxe[Axe::E_POLEAXE]->GetLevel();
				nDurability = pAxe[Axe::E_POLEAXE]->GetDurability();

				ShowWeaponInfo(pName, nDamage, nWeight, nLevel, nDurability);

				cout << "\t\t착용 하시겠습니까? " << endl;
				cout << "\t\t1.YES  2.NO  : ";
				cin >> nInput;

				if (nInput == 1)
				{
					system("cls");
					info.ShowInfo();
					isEquip = true;
					ShowPlayerStatus(pName, nDamage, isEquip);
					continue;
				}
				else if (nInput == 2)
				{
					continue;
				}
			}
			else if (nInput == Item::E_HANDAXE)
			{
				int len = strlen(pAxe[Axe::E_LONGSWORD]->GetItemName());
				pName = new char[len] + 1;
				strcpy_s(pName, len + 1, pAxe[Axe::E_LONGSWORD]->GetItemName());

				len = strlen(pAxe[Axe::E_LONGSWORD]->GetUsed());
				pUsed = new char[len] + 1;
				strcpy_s(pUsed, len + 1, pAxe[Axe::E_LONGSWORD]->GetUsed());

				nDamage = pAxe[Axe::E_LONGSWORD]->GetDamage();
				nWeight = pAxe[Axe::E_LONGSWORD]->GetWeight();
				nLevel = pAxe[Axe::E_LONGSWORD]->GetLevel();
				nDurability = pAxe[Axe::E_LONGSWORD]->GetDurability();

				ShowWeaponInfo(pName, nDamage, nWeight, nLevel, nDurability);

				cout << "\t\t착용 하시겠습니까? " << endl;
				cout << "\t\t1.YES  2.NO  : ";
				cin >> nInput;

				if (nInput == 1)
				{
					system("cls");
					info.ShowInfo();
					isEquip = true;
					ShowPlayerStatus(pName, nDamage, isEquip);
					continue;
				}
				else if (nInput == 2)
				{
					continue;
				}
			}
			else if (nInput == Item::E_BATTLEAXE)
			{
				int len = strlen(pAxe[Axe::E_LONGSWORD]->GetItemName());
				pName = new char[len] + 1;
				strcpy_s(pName, len + 1, pAxe[Axe::E_LONGSWORD]->GetItemName());

				len = strlen(pAxe[Axe::E_LONGSWORD]->GetUsed());
				pUsed = new char[len] + 1;
				strcpy_s(pUsed, len + 1, pAxe[Axe::E_LONGSWORD]->GetUsed());

				nDamage = pAxe[Axe::E_LONGSWORD]->GetDamage();
				nWeight = pAxe[Axe::E_LONGSWORD]->GetWeight();
				nLevel = pAxe[Axe::E_LONGSWORD]->GetLevel();
				nDurability = pAxe[Axe::E_LONGSWORD]->GetDurability();

				ShowWeaponInfo(pName, nDamage, nWeight, nLevel, nDurability);

				cout << "\t\t착용 하시겠습니까? " << endl;
				cout << "\t\t1.YES  2.NO  : ";
				cin >> nInput;

				if (nInput == 1)
				{
					system("cls");
					info.ShowInfo();
					isEquip = true;
					ShowPlayerStatus(pName, nDamage, isEquip);
					continue;
				}
				else if (nInput == 2)
				{
					continue;
				}
			}
			else if (nInput == Item::E_SHORTBOW)
			{
				int len = strlen(pBow[Bow::E_SHORTBOW]->GetItemName());
				pName = new char[len] + 1;
				strcpy_s(pName, len + 1, pBow[Bow::E_SHORTBOW]->GetItemName());

				len = strlen(pBow[Bow::E_SHORTBOW]->GetUsed());
				pUsed = new char[len] + 1;
				strcpy_s(pUsed, len + 1, pBow[Bow::E_SHORTBOW]->GetUsed());

				nDamage = pBow[Bow::E_SHORTBOW]->GetDamage();
				nWeight = pBow[Bow::E_SHORTBOW]->GetWeight();
				nLevel = pBow[Bow::E_SHORTBOW]->GetLevel();
				nDurability = pBow[Bow::E_SHORTBOW]->GetDurability();

				ShowWeaponInfo(pName, nDamage, nWeight, nLevel, nDurability);

				cout << "\t\t착용 하시겠습니까? " << endl;
				cout << "\t\t1.YES  2.NO  : ";
				cin >> nInput;

				if (nInput == 1)
				{
					system("cls");
					info.ShowInfo();
					isEquip = true;
					ShowPlayerStatus(pName, nDamage, isEquip);
					continue;
				}
				else if (nInput == 2)
				{
					continue;
				}
			}
			else if (nInput == Item::E_LONGBOW)
			{
				int len = strlen(pBow[Bow::E_LONGBOW]->GetItemName());
				pName = new char[len] + 1;
				strcpy_s(pName, len + 1, pBow[Bow::E_LONGBOW]->GetItemName());

				len = strlen(pBow[Bow::E_LONGBOW]->GetUsed());
				pUsed = new char[len] + 1;
				strcpy_s(pUsed, len + 1, pBow[Bow::E_LONGBOW]->GetUsed());

				nDamage = pBow[Bow::E_LONGBOW]->GetDamage();
				nWeight = pBow[Bow::E_LONGBOW]->GetWeight();
				nLevel = pBow[Bow::E_LONGBOW]->GetLevel();
				nDurability = pBow[Bow::E_LONGBOW]->GetDurability();

				ShowWeaponInfo(pName, nDamage, nWeight, nLevel, nDurability);

				cout << "\t\t착용 하시겠습니까? " << endl;
				cout << "\t\t1.YES  2.NO  : ";
				cin >> nInput;

				if (nInput == 1)
				{
					system("cls");
					info.ShowInfo();
					isEquip = true;
					ShowPlayerStatus(pName, nDamage, isEquip);
					continue;
				}
				else if (nInput == 2)
				{
					continue;
				}
			}
			else if (nInput == Item::E_CROSSBOW)
			{
				int len = strlen(pBow[Bow::E_CROSSBOW]->GetItemName());
				pName = new char[len] + 1;
				strcpy_s(pName, len + 1, pBow[Bow::E_CROSSBOW]->GetItemName());

				len = strlen(pBow[Bow::E_CROSSBOW]->GetUsed());
				pUsed = new char[len] + 1;
				strcpy_s(pUsed, len + 1, pBow[Bow::E_CROSSBOW]->GetUsed());

				nDamage = pBow[Bow::E_CROSSBOW]->GetDamage();
				nWeight = pBow[Bow::E_CROSSBOW]->GetWeight();
				nLevel = pBow[Bow::E_CROSSBOW]->GetLevel();
				nDurability = pBow[Bow::E_CROSSBOW]->GetDurability();

				ShowWeaponInfo(pName, nDamage, nWeight, nLevel, nDurability);

				cout << "\t\t착용 하시겠습니까? " << endl;
				cout << "\t\t1.YES  2.NO  : ";
				cin >> nInput;

				if (nInput == 1)
				{
					system("cls");
					info.ShowInfo();
					isEquip = true;
					ShowPlayerStatus(pName, nDamage, isEquip);
					continue;
				}
				else if (nInput == 2)
				{
					continue;
				}
			}
		}
		else if (nInput == 2)
		{
			ShowAttack(pName, pUsed, nDamage);
			system("PAUSE");
			continue;
			//휘두루기
		}
		else if (nInput == 3)
		{
			cout << "\n\t\t장비를 해제 합니다." << endl << endl;
			nDamage = 0;
			isEquip = false;
			system("PAUSE");
			continue;
		}
	}

	delete []pName;
	delete []pUsed;

}