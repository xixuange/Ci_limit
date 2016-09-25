#include "Obstacle.h"

USING_NS_CC;

bool Obstacle::init() {

	if (!Layer::init()) {
		return false;
	}


	return true;
}

Obstacle* Obstacle::createWithCode(int _code) {

	auto _obs = Obstacle::create();
	_obs->makeObs(_code);

	return _obs;
}

void Obstacle::makeObs(int _code) {

	Sprite* obs_img;

	switch (_code) {

	case 1:
		obs_img = Sprite::create("img/img_Obs001.png");
		break;

	case 2:
		obs_img = Sprite::create("img/img_Obs002.png");
		break;

	default:
		obs_img = Sprite::create();
		break;
	}

	addChild(obs_img);
}