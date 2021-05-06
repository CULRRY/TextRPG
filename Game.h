#pragma once

class Player;
class Field;

class Game
{
public:
	Game();
	~Game();

	void Init();
	void Update();
	void CreatePlayer();
private:
	Player* m_player;
	Field* m_field;
};

