#include "Player.h"




Player::Player()
{
	atk = 1;
	def = 1;
	hp = 10;
	lvl = 1;
	coin = 100;
}

void Player::AddAtk(int x)
{
	atk += x;
}

void Player::AddDef(int x)
{
	def += x;
}

void Player::SetHp(int x)
{
	hp = x;
}

void Player::AddLvl(int x)
{
	lvl += x;
}

void Player::SetCoin(int x)
{
	coin = x
}

int Player::GetAtk()
{
	return atk;
}

int Player::GetDef()
{
	return def;
}

int Player::GetHp()
{
	return hp;
}

int Player::GetLvl()
{
	return lvl;
}

int Player::GetCoin()
{
	return coin;
}


Player::~Player()
{
}
