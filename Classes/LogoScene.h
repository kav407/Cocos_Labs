#ifndef _LOGOSCENE_H_
#define _LOGOSCENE_H_

#include "cocos2d.h"
#include "GameDefines.h"

USING_NS_CC;



class LogoScene : public cocos2d::CCScene
{
public:
	virtual bool init();
	void logoFadeInOut();
	void endFadeAction();


	CREATE_FUNC(LogoScene);


private:
	//create a layer to add sprites to 
	CCLayer* mp_oMainLayer;
	CCSprite* mp_oLitLogo;
	
	float m_fScreenWidth;
	float m_fScreenHeight;

	~LogoScene();
};


#endif