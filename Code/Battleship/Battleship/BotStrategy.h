#pragma once
class BotStrategy
{
	virtual void Shoot() = 0;
};

class EasyStrategy : public BotStrategy
{
	void Shoot();
};

class MediumHardStrategy : public BotStrategy
{
	void Shoot();
};