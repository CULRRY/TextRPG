#pragma once

enum CreatureType
{
	PLAYER,
	MONSTER,
};


class Creature
{
public:
	Creature(int creatureType)
		: m_creatureType(creatureType)
	{

	}
	virtual ~Creature()
	{

	}

	void PrintInfo();
	void OnAttacked(Creature* attacker);
	bool IsDead();

protected:
	int m_hp = 0;
	int m_attack = 0;
	int m_defence = 0;
	const char* m_name = "";
	int m_creatureType;

};