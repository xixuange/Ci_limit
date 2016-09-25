#include "GameScene.h"
#include "bgv\Background.h"
#include "role\RPlayer.h"
#include "role\RFoe.h"
#include "control\CRocker.h"
#include "b2d\PhysicsLayer.h"

USING_NS_CC;

Scene* GameScene::createScene() {

	auto layer = GameScene::create();
	auto scene = Scene::create();

	scene->addChild(layer);

	return scene;
}

bool GameScene::init() {

	if (!Node::init()) {
		return false;
	}

	auto visiblesize = Director::getInstance()->getVisibleSize();

	//create background

	auto _bgv = Background::create();
	_bgv->setPosition(visiblesize / 2);

	addChild(_bgv);

	//create role

		//player

	auto r_player = RPlayer::create();
	r_player->setPosition(1328, 646);

	addChild(r_player);

		//foe

	auto r_foe = RFoe::create();
	r_foe->setPosition(1670, 646);

	addChild(r_foe);

	//create control

	auto c_rocker = CRocker::create();
	c_rocker->setPosition(206, 194);

	addChild(c_rocker);

	//create physics

	auto b2d_layer = PhysicsLayer::create();
	this->addChild(b2d_layer);

	//////////

	return true;
}

