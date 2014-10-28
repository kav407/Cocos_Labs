#ifndef _INTROMENUSCENE_H_
#define _INTROMENUSCENE_H_

#include "cocos2d.h"
#include "GameDefines.h"

USING_NS_CC;



class IntroMenuScene : public cocos2d::CCScene
{
public:
	virtual bool init();
	
	void initializeMenu();

	

	CREATE_FUNC(IntroMenuScene);


private:
	//create a layer to add sprites to 
	CCLayer* mp_oMainLayer;

	CCMenu* mp_oMainMenu;
	CCMenuItemLabel* mp_oPlayButton;

	//create the callback for the menu
	void pressedPlay(CCObject* pSender);

	float m_fScreenWidth;
	float m_fScreenHeight;

	//~IntroMenuScene();
};


#endif