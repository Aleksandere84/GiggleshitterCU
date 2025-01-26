#include "Application.h"

Application::Application()
{
    sAppName = "Giggleshitter Compute Unit";
}

bool Application::OnUserCreate()
{
    for (int i = 0; i < 0x10000; i++)
    {
        this->ccu.setAtAddress(i+0x40000, rand()%2);
    }
    // this->ccu.setAtAddress(0x40005, 0x1); // byte 0x00000 in VRAM
    return true;
}

bool Application::OnUserUpdate(float fElapsedTime)
{
    for (int x = 0; x < ScreenWidth(); x++)
    {
        for (int y = 0; y < ScreenHeight(); y++)
        {
            if (this->ccu.getFromAddress(y*ScreenHeight()+x + 0x40000) == 1)
            {
                Draw(x,y, olc::RED);
            }
        }
    }
    
    return true;
}
