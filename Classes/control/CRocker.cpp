#include "CRocker.h"

USING_NS_CC;

bool CRocker::init() {

	if (!Layer::init()) {
		return false;
	}

	rock = Vec2::ZERO;

	//img

	cr_i = Sprite::create("img/img_Crocker.png");
	addChild(cr_i,1);

	cr_o = Sprite::create("img/img_Crocker_o.png");
	addChild(cr_o,0);

	addListener();
	
	return true;
}

void CRocker::addListener() {

	auto _listener = EventListenerTouchOneByOne::create();

	//began

	_listener->onTouchBegan = [this](Touch* t,Event* e) {

		if (convertToNodeSpace(t->getLocation()).distance(Vec2::ZERO)<200) {

			cr_i->setPosition(    convertToNodeSpace(t->getLocation())    );
		}
		positionToRock();

		return true;
	};

	//moved

	_listener->onTouchMoved = [this](Touch* t, Event* e) {

		if (convertToNodeSpace(t->getLocation()).distance(Vec2::ZERO) < 200) {

			cr_i->setPosition(    convertToNodeSpace(t->getLocation())    );
		}
		else {
			cr_i->setPosition(    convertToNodeSpace(t->getLocation()) 
				* 200/ convertToNodeSpace(t->getLocation()).distance(Vec2::ZERO)    );
		}
		positionToRock();
	};

	//ended

	_listener->onTouchEnded = [this](Touch* t, Event* e) {

		cr_i->setPosition(Vec2::ZERO);

		positionToRock();
	};

	Director::getInstance()->getEventDispatcher()->addEventListenerWithSceneGraphPriority(_listener, this);
}

void CRocker::positionToRock() {

	rock = cr_i->getPosition() / cr_i->getPosition().distance(Vec2::ZERO);
}