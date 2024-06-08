#include "AgSpiderBossMessage.h"
#include "EntityInfo.h"
#include "GeneralUtils.h"
#include "GameMessages.h"
#include "EntityManager.h"
#include "RenderComponent.h"
#include "Entity.h"

void AgSpiderBossMessage::MakeBox() {
	if (!boxTarget || !boxSelf || isDisp) {
		return;
	}

	isDisp = true;
	LOG("Creating Box");
	float newTime = boxTime;
	boxSelf->AddTimer("BoxTimer", newTime);
	//Line 24 of LUA
}

void AgSpiderBossMessage::CollisionPhantom(Entity* self, Entity* target) {
	auto pushBackObject = GetEntityInGroup(pushBack);

	if (target->GetObjectID()) {
		NiQuaternion dir = self->GetRotation();

		boxTarget = target;
		GameMessages::SendPlayFXEffect(pushBackObject, 1378, GeneralUtils::ASCIIToUTF16(effectType), "FX", LWOOBJID_EMPTY, 1.0f, 1.0f, true);
		RenderComponent::PlayAnimation(pushBackObject, u"knockback-recovery");
		dir.y = dir.y + 15;
		dir.x = dir.x * 100;
		dir.z = dir.z * 100;
	}

	if (!target->GetObjectID() || isTouch || isDisp) {
		return;
	}

	boxSelf = self;
	isTouch = true;
	boxText = "%[SPIDER_CAVE_MESSAGE]";
	self->AddTimer("EventTimer", 0.1f);
}

void AgSpiderBossMessage::OffCollisionPhantom(Entity* self, Entity* target) {
	if (target->GetObjectID()) {
		isTouch = false;
		ResetBox();
		LOG("Exiting");
	}
}

void AgSpiderBossMessage::TimerDone(Entity* self, std::string timerName) {
	if (timerName == "BoxTimer") {
		isDisp = false;
		ResetBox();
		LOG("Box Timer Done");
	}
	if (timerName == "EventTimer") {
		if (!boxTarget)
			LOG("EventTimer not long enough.... running again!");
		self->AddTimer("EventTimer", 0.1f);
	}
	MakeBox();
}

void AgSpiderBossMessage::ResetBox() {
	if (isDisp || isTouch) {
		return;
	}
	boxTarget = nullptr;
	isDisp = false;
	isTouch = false;
	isFirst = true;
	boxSelf = nullptr;
	boxText = "";
	boxTime = 1.0f;
}
