#ifndef __MODULESCENESPACE_H__
#define __MODULESCENESPACE_H__

#include "Module.h"

struct SDL_Texture;

class ModuleSceneSpace : public Module
{
public:
	ModuleSceneSpace();
	~ModuleSceneSpace();

	bool Start();
	update_status Update();
	bool CleanUp();

public:
	
	SDL_Texture* background = nullptr;
	SDL_Texture* stars = nullptr;
	Collider* upper_wall = nullptr;
	Collider* bottom_wall = nullptr;
	Collider* ground = nullptr;
};

#endif // __MODULESCENESPACE_H__