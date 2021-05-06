#pragma once
#include "Creature.h"

enum PlayerType
{
	KNIGHT,
	ARCHER,
	MAGE,
};

class Player : public Creature
{
public:
	Player(int playerType) : Creature(PLAYER)
	{
		m_playerType = playerType;
	}

	~Player()
	{

	}

protected:
	int m_playerType;
};

class Knight : public Player
{
public:
	Knight() : Player(KNIGHT)
	{
		m_hp = 200;
		m_attack = 10;
		m_defence = 10;
		m_name = "Knight";
	}

	~Knight() {}
};

class Archer : public Player
{
public:
	Archer() : Player(ARCHER)
	{
		m_hp = 170;
		m_attack = 15;
		m_defence = 5;
		m_name = "Archer";
	}

	~Archer() {}
};

class Mage : public Player
{
public:
	Mage() : Player(MAGE)
	{
		m_hp = 150;
		m_attack = 20;
		m_defence = 3;
		m_name = "Mage";
	}

	~Mage() {}
};

