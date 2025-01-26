#define OLC_PGE_APPLICATION
#include "Application.h"


int main() 
{
	Application app;

	if (app.Construct(320, 200, 4, 4))
		app.Start();
}
