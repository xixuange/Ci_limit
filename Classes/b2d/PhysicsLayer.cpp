#include "PhysicsLayer.h"

USING_NS_CC;

bool PhysicsLayer::init() {

	if (!Layer::init()) {

		return false;
	}

	b2d_world = new b2World(b2Vec2(0,-10));

	scheduleUpdate();

	return true;
}

void PhysicsLayer::update(float dt) {

	b2d_world->Step(dt, 8, 3);
}