#ifndef __PHYSICS_LAYER_H__
#define __PHYSICS_LAYER_H__

#include "cocos2d.h"
#include "Box2D\Box2D.h"

class PhysicsLayer : public cocos2d::Layer {

public:
	b2World* b2d_world;

	//////////

	virtual bool init();

	CREATE_FUNC(PhysicsLayer);

	virtual void update(float dt);


};
#endif // !__PHYSICS_LAYER_H__
