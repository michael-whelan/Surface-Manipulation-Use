#ifndef _CANNON_H_
#define _CANNON_H_
#include <SDL.h>
#include <stdio.h>
#include <SDL_keyboard.h>
#include <SDL_keycode.h>
#include <SDL_scancode.h>

class Cannon {
	

public:
	SDL_Surface* mCannonImage;
	SDL_Rect mCannonLocation;
	SDL_Event event;
	Uint8* keyboard;

	float mPower;
	float mAngle;


	//SDL_Texture* mCannonImage;

	void initialize();
	float GetAngle();
	float GetPower();
	void Rotate();
	void Update();
	void Draw(SDL_Surface* );
	void Reset();
	void Close();
};



#endif