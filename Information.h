#ifndef __INFORMATION_H__
#define __INFORMATION_H__
#include "cocos2d.h"
#include "ui/UIButton.h"
USING_NS_CC;

class Information : public Layer
{
public:
	static Scene* createScene();
	virtual bool init();
	CREATE_FUNC(Information);

	ui::Button* _btn_back;
};

#endif //__INFORMATION_H__