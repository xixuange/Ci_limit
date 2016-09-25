#include "RFoe.h"

USING_NS_CC;

bool RFoe::init() {

	if (!Layer::init()) {
		return false;
	}

	auto _img = Sprite::create("img/img_Rfoe.png");

	addChild(_img);

	return true;
}