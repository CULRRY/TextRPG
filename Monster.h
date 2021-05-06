#pragma once
#include "Creature.h"
enum MonsterType
{
	SLIME,
	ORC,
	SKELETON,
};

class Monster : public Creature
{
public:
	Monster(int monsterType)
		: Creature(MONSTER), m_monsterType(monsterType)
	{

	}

	~Monster() {}

protected:
	int m_monsterType;
};

class Slime : public Monster
{
public:
	Slime() : Monster(SLIME)
	{
		m_hp = 30;
		m_attack = 5;
		m_defence = 0;
		m_name = "Slime";
	}

	~Slime() {}
};

class Orc : public Monster
{
public:
	Orc() : Monster(ORC)
	{
		m_hp = 50;
		m_attack = 10;
		m_defence = 3;
		m_name = "Orc";
	}

	~Orc() {}
};

class Skeleton : public Monster
{
public:
	Skeleton() : Monster(SKELETON)
	{
		m_hp = 80;
		m_attack = 20;
		m_defence = 5;
		m_name = "Skeleton";
	}

	~Skeleton() {}
};
