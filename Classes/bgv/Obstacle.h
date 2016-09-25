#ifndef __OBSTACLE_H__
#define __OBSTACLE_H__

#include "cocos2d.h"

class Obstacle : public cocos2d::Layer {

public:

	static Obstacle* createWithCode(int _code);

	virtual bool init();

	CREATE_FUNC(Obstacle);


private:
	void makeObs(int _code);

};
#endif // ! __OBSTACLE_H__
