#ifndef  _WIDGETS_
#define	 _WIDGETS_


#include "SDL\include\SDL.h"

class Widgets
{

enum UItype
{
	LABEL,
	IMAGE
};

public:

	Widgets();

	~Widgets();

	void Draw();


protected:
	SDL_Rect		Area;
	SDL_Texture*	texture = nullptr;;
};

#endif // ! _WIDGETS_
