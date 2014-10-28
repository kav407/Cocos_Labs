#ifndef _GAMESCENE_H_
#define _GAMESCENE_H_

#include "cocos2d.h"
#include "GameDefines.h"

USING_NS_CC;



class GameLayer : public cocos2d::CCLayer
{
public :
	//initialize
	virtual bool init();
	void GameUpdate(float dt);


	CREATE_FUNC(GameLayer);
private:
	CCSprite* mainCharacter;
};



class GameScene : public cocos2d::CCScene
{
public:
	virtual bool init();
	
	

	

	CREATE_FUNC(GameScene);


private:
	//create a layer to add sprites to 
	GameLayer* mp_oObjectLayer;



	//TODO: Create the game layer


	float m_fScreenWidth;
	float m_fScreenHeight;

	//TODO: Create the deconstructor
};





#endif