#include "RPlayer.h"

USING_NS_CC;

bool RPlayer::init() {

	if (!Layer::init()) {
		return false;
	}

	auto _img = Sprite::create("img/img_Rplayer.png");

	addChild(_img);

	return true;
}