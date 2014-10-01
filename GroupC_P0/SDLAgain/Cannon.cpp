#include "Cannon.h"
/*
//The window we'll be rendering to
SDL_Window* gWindow = NULL;

//The window renderer
SDL_Renderer* gRenderer = NULL;

//Current displayed texture
SDL_Texture* gTexture = NULL;*/

void Cannon::initialize(){
	//Loads individual image as texture
	//SDL_Texture* loadTexture( std::string path );
	mPower = 0;

mCannonLocation.x = 100;
mCannonLocation.y = 100;
mCannonLocation.w = 80;
mCannonLocation.h = 40;


mCannonImage  = SDL_LoadBMP( "C:/Users/Michael/Documents/GitHub/RWM_14_P0_C/GroupC_P0/Images/Cannon.bmp");
mCannonImage->h = mCannonLocation.h;
mCannonImage->w = mCannonLocation.w;
}

void Cannon::Rotate(){


}

void Cannon::Update(){

	//mCannonLocation.x+=1;

	if(mPower>=10){
		//mCannonLocation.x+=1;
	}
    while( SDL_PollEvent(&event))
    {
        switch(event.type)
        {
        case SDL_KEYDOWN:
           // keyboard[event.key.keysym.sym] = false;
			
			if(event.key.keysym.sym == SDLK_UP){
				mPower++;
				mCannonLocation.x+=1;
			}
			else if(event.key.keysym.sym == SDLK_DOWN){
				mPower--;
				mCannonLocation.x-=1;
			}
			if(event.key.keysym.sym == SDLK_LEFT){
				mAngle-=0.2;
			}
			else if(event.key.keysym.sym == SDLK_RIGHT){
				mAngle+=0.2;
			}
            break;
        case SDL_KEYUP:
           // keyboard[event.key.keysym.sym] = true;
            break;
        }
    }

}
void Cannon::Reset(){
	mAngle = 0;
	mPower = 0;

}
void Cannon::Draw(SDL_Surface* gScreenSurface){

	SDL_BlitSurface( mCannonImage, NULL,gScreenSurface , &mCannonLocation );
}

float Cannon::GetAngle(){
	return mAngle;
}

float Cannon::GetPower(){
	return mPower;
}
void Cannon::Close(){

	//Deallocate surface
	SDL_FreeSurface( mCannonImage );
	mCannonImage = NULL;
}

	