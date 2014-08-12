//
//  StartScene.cpp
//  MyGame
//
//  Created by ZhangLin on 14-8-7.
//
//

#include "StartScene.h"


bool StartScene::init()
{
    bool bRet = false;
    do {
        CC_BREAK_IF(! Scene::init());
        auto winSize = CCDirector::sharedDirector()->getWinSize();
        
        auto *startGameItem = CCMenuItemFont::create("start", this, menu_selector(StartScene::startGame));
        CC_BREAK_IF(!startGameItem);
        
        startGameItem->setPosition(ccp(winSize.width/2 , winSize.height/2));
        
        CCMenu *menu = CCMenu::create(startGameItem,NULL);
        CC_BREAK_IF(!menu);
        
        menu->setPosition(CCPointZero);
        
        this->addChild(menu);
        bRet = true;
    }while (0);
    
    return bRet;
}

void StartScene::startGame(Ref *sender)
{
    CCDirector::sharedDirector()->replaceScene(CCTransitionShrinkGrow::create(1.2f, HelloWorld::createScene()));
}
