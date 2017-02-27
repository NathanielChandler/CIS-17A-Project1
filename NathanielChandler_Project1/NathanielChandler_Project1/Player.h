#pragma once
class Player
{
private:
	int atk;
	int def;
	int hp;
	int lvl;
	int coin;
public:
	Player();
	void AddAtk(int);
	void AddDef(int);
	void SetHp(int);
	void AddLvl(int);
	void SetCoin(int);
	int GetAtk();
	int GetDef();
	int GetHp();
	int GetLvl();
	int GetCoin();
	~Player();
};

