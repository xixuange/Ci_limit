#ifndef __C_ROCKER_H__
#define __C_ROCKER_H__

#include "cocos2d.h"

class CRocker : public cocos2d::Layer {

private:

	cocos2d::Sprite* cr_i;
	cocos2d::Sprite* cr_o;

public:
	//var
	cocos2d::Vec2 rock;

	//function

	virtual bool init();

	CREATE_FUNC(CRocker);

	void addListener();

	void positionToRock();
};
#endif // !__C_ROCKER_H__
