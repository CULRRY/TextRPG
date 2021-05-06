#include "Creature.h"
#include <iostream>
using namespace std;

void Creature::PrintInfo()
{
	cout << "[" << m_name << " Info] Hp: " << m_hp
		<< " ATT: " << m_attack << " DEF: " << m_defence << endl;
}

void Creature::OnAttacked(Creature* attacker)
{
	int damage = attacker->m_attack - m_defence;
	if (damage <= 0)
		damage = 0;

	m_hp -= damage;
	if (m_hp <= 0)
		m_hp = 0;
}

bool Creature::IsDead()
{
	if (m_hp == 0)
		return true;

	return false;
}