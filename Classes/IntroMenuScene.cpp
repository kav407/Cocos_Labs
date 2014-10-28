#include "IntroMenuScene.h"
#include "GameScene.h"

bool IntroMenuScene::init()
{
	if(!CCScene::init())
	{
		return false;
	}

	m_fScreenWidth  = CCDirector::sharedDirector()->getWinSize().width;
	m_fScreenHeight = CCDirector::sharedDirector()->getWinSize().height;

	mp_oMainLayer = CCLayer::create();
	this->addChild(mp_oMainLayer);
	initializeMenu();



}

void IntroMenuScene::initializeMenu()
{
	
	CCLabelTTF* menuLabel = CCLabelTTF::create("Play", "Arial", 14);
	mp_oPlayButton = CCMenuItemLabel::create(menuLabel, this, menu_selector(IntroMenuScene::pressedPlay));
	

	this->addChild(CCMenu::create(mp_oPlayButton, NULL));
	//mp_oPlayButton->setPosition(ccp(m_fScreenWidth/2, m_fScreenHeight/2));
	
}


void IntroMenuScene::pressedPlay(CCObject* pSender)
{
	CCDirector::sharedDirector()->replaceScene(GameScene::create());
}








