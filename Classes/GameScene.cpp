#include "GameScene.h"

bool GameScene::init()
{
	if(!CCScene::init())
	{
		return false;
	}
	
	mp_oObjectLayer = GameLayer::create();
	this->addChild(mp_oObjectLayer);
	mp_oObjectLayer->schedule(schedule_selector(GameLayer::GameUpdate));
}






//GameLayer methods
bool GameLayer::init()
{
	if(!CCLayer::init())
	{
		return false;
	}

	//this->scheduleUpdate();
	mainCharacter = CCSprite::create("CloseSelected.png");
	mainCharacter->setPosition(ccp(200, 200));
	this->addChild(mainCharacter);
}


void GameLayer::GameUpdate(float dt)
{
	//CCLog("update Called ");
	mainCharacter->setPosition(ccp(mainCharacter->getPositionX()+2, mainCharacter->getPositionY()));
}
