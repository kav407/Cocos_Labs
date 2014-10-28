#include "LogoScene.h"
#include "IntroMenuScene.h"

bool LogoScene::init()
{
	if(!CCScene::init())
	{
		return false;
	}

	m_fScreenWidth  = CCDirector::sharedDirector()->getWinSize().width;
	m_fScreenHeight = CCDirector::sharedDirector()->getWinSize().height;


	//create the layer to be added to the scene
	mp_oMainLayer = CCLayer::create();
	//using the "this" keyword as this object is a scene which is the current
	//active scene
	this->addChild(mp_oMainLayer);

	logoFadeInOut();

}

void LogoScene::logoFadeInOut()
{
	//create the logo to fade in and out
	mp_oLitLogo = CCSprite::create("lit.png");
	mp_oMainLayer->addChild(mp_oLitLogo);

	mp_oLitLogo->setPosition(ccp(m_fScreenWidth/2, m_fScreenHeight/2));


	//create the fade in action
	CCFadeIn* fadeIn = CCFadeIn::create(FADESPEED);
	CCFadeOut* fadeOut = CCFadeOut::create(FADESPEED);

	//create the call function action
	CCCallFunc* callEnd =   CCCallFunc::create(this, callfunc_selector(LogoScene::endFadeAction));


	CCSequence* fadeSequence = CCSequence::create(fadeIn, fadeOut,callEnd, NULL);
	mp_oLitLogo->runAction(fadeSequence);


}

void LogoScene::endFadeAction()
{

  //call next scene to load
	CCDirector::sharedDirector()->replaceScene(IntroMenuScene::create());
}


//cleanup
LogoScene::~LogoScene()
{
	//CC_SAFE_DELETE(mp_oMainLayer);
	//CC_SAFE_DELETE(mp_oLitLogo);

}
