#pragma once
#include "CppScripts.h"

class AgSpiderBossMessage : public CppScripts::Script
{
public:
	void MakeBox();
	void CollisionPhantom(Entity* self, Entity* target);
	void OffCollisionPhantom(Entity* self, Entity* target);
	void TimerDone(Entity* self, std::string timerName);
	void ResetBox();

	Entity* boxTarget = nullptr;
	bool isDisp = false;
	bool isTouch = false;
	bool isFirst = true;
	Entity* boxSelf = nullptr;
	std::string boxText = "";
	float boxTime = 1.0f;
	std::string pushBack = "pushBack";
	std::string effectType = "create";
	std::string animationID = "knockback-recovery";
private:
	Entity* GetEntityInGroup(const std::string& group);
};
