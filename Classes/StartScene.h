//
//  StartScene.h
//  MyGame
//
//  Created by ZhangLin on 14-8-7.
//
//

#ifndef __MyGame__StartScene__
#define __MyGame__StartScene__

#include <iostream>
#include "cocos2d.h"
#include "HelloWorldScene.h"

USING_NS_CC;

#endif /* defined(__MyGame__StartScene__) */

class StartScene : public Scene
{
    public:
    static Scene* createScene();
    CREATE_FUNC(StartScene);
    bool init();
    void startGame(Ref *sender);
};
