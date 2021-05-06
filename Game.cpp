#include "Game.h"
#include "Player.h"
#include "Field.h"
#include <iostream>
using namespace std;

Game::Game() : m_player(nullptr), m_field(nullptr)
{

}


Game::~Game()
{
	if (m_player != nullptr)
		delete m_player;
	if (m_field != nullptr)
		delete m_field;
}

void Game::Init()
{
	m_field = new Field();
}
void Game::Update()
{
	if (m_player == nullptr)
	{
		CreatePlayer();
	}

	if (m_player->IsDead())
	{
		CreatePlayer();
	}

	m_field->Update(m_player);
}

void Game::CreatePlayer()
{
	cout << "--------------------------------" << endl;
	cout << "          ĳ���� ����           " << endl;
	cout << "--------------------------------" << endl;
	cout << "1) ���      2) �ü�      3)����" << endl;
	cout << ">> ";
	int input = 0;
	cin >> input;
	switch (input - 1)
	{
	case KNIGHT:
		m_player = new Knight();
		break;

	case ARCHER:
		m_player = new Archer();
		break;

	case MAGE:
		m_player = new Mage();
		break;
	}
}