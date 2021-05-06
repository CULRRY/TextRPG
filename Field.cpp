#include "Field.h"
#include "Monster.h"
#include "Player.h"
#include <iostream>
using namespace std;

Field::Field() : m_monster(nullptr)
{
	
}

Field::~Field()
{
	if (m_monster != nullptr)
		delete m_monster;
}

void Field::Update(Player* player)
{
	if (m_monster == nullptr)
		CreateMonster();

	StartBattle(player);
}

void Field::CreateMonster()
{
	int randValue = rand() % 3;
	switch (randValue)
	{
	case SLIME:
		m_monster = new Slime();
		break;

	case ORC:
		m_monster = new Orc();
		break;

	case SKELETON:
		m_monster = new Skeleton();
		break;
	}
}

void Field::StartBattle(Player* player)
{
	while (true)
	{
		player->PrintInfo();
		m_monster->PrintInfo();

		//player attack
		m_monster->OnAttacked(player);

		if (m_monster->IsDead())
		{
			m_monster->PrintInfo();
			delete m_monster;
			m_monster = nullptr;
			break;
		}

		//monster attack
		player->OnAttacked(m_monster);

		if (player->IsDead())
		{
			player->PrintInfo();
			break;
		}
	}
}