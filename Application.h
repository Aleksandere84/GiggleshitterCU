#pragma once
#include "olcPixelGameEngine.h"

#include "CCU.h"

class Application : public olc::PixelGameEngine
{
public:
	Application();
	bool OnUserCreate() override;
	bool OnUserUpdate(float fElapsedTime) override;

private:
	CCU ccu;
};

