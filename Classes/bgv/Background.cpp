#include "Background.h"
#include "Obstacle.h"

USING_NS_CC;

bool Background::init() {

	if (!Layer::init()) {
		return false;
	}

	auto dev = (Director::getInstance()->getVisibleSize()/-2);

	//img

	auto bg_img = Sprite::create("img/img_Bg.png");

	addChild(bg_img,0);

	//obstacle
	auto obs1_001 = Obstacle::createWithCode(1);
	obs1_001->setPosition(Vec2(1520,471) + dev);

	addChild(obs1_001);

	auto obs1_002 = Obstacle::createWithCode(1);
	obs1_002->setPosition(Vec2(503, 365) + dev);

	addChild(obs1_002);

	auto obs2_001 = Obstacle::createWithCode(2);
	obs2_001->setPosition(Vec2(1120, 883) + dev);

	addChild(obs2_001);

	auto obs2_002 = Obstacle::createWithCode(2);
	obs2_002->setPosition(Vec2(731, 640) + dev);

	addChild(obs2_002);

	return true;
}