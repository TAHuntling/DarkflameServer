#pragma once

#include <vector>

#include "Behavior.h"

class AndBehavior final : public Behavior
{
public:
	std::vector<Behavior*> m_behaviors;

	/*
	 * Inherited
	 */
	explicit AndBehavior(const uint32_t behaviorId) : Behavior(behaviorId) {
	}

	void Handle(BehaviorContext* context, RakNet::BitStream* bitStream, BehaviorBranchContext branch) override;

	void Calculate(BehaviorContext* context, RakNet::BitStream* bitStream, BehaviorBranchContext branch) override;

	void UnCast(BehaviorContext* context, BehaviorBranchContext branch) override;

	void Load() override;
};
