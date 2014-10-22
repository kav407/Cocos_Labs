#include "testingScene.h"



bool TestingScene::init()
{
	if(!CCScene::init())
	{
		return false;
	}

	m_fScreenWidth  = CCDirector::sharedDirector()->getWinSize().width;
	m_fScreenHeight = CCDirector::sharedDirector()->getWinSize().height;

	//use the create keyword to initialize cocos
	//objects
	mp_oMainLayer = CCLayer::create();
	mp_oPowerButton = CCSprite::create("CloseSelected.png");
	
	//set position to be the middle of the screen
	mp_oPowerButton->setPosition(ccp(m_fScreenWidth/2, m_fScreenHeight/2));

	this->addChild(mp_oMainLayer);
	mp_oMainLayer->addChild(mp_oPowerButton);

	CCMoveTo* moveTopCorner = CCMoveTo::create(0.5f, ccp(m_fScreenWidth, m_fScreenHeight));
	CCMoveTo* moveBottomCorner = CCMoveTo::create(0.5f, ccp(0, 0));
	
	CCSequence* topbotrepeat = CCSequence::create(moveBottomCorner, moveTopCorner, NULL);

	mp_oPowerButton->runAction(topbotrepeat);





	return true;
}

