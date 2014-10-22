#ifndef _TESTINGSCENE_H_
#define _TESTINGSCENE_H_

#include "cocos2d.h"

USING_NS_CC;

class TestingScene : public cocos2d::CCScene
{
public:
	virtual bool init();




	CREATE_FUNC(TestingScene);

private:
	//create a layer to add sprites to 
	CCLayer* mp_oMainLayer;
	CCSprite* mp_oPowerButton;
	
	float m_fScreenWidth;
	float m_fScreenHeight;


};


#endif