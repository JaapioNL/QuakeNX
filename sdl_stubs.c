#include <SDL.h>
#include <SDL_surface.h>
#include <windows.h>
#include "sdl_stubs.h"

///////////////////////////////////////////////////////
//
// CD rom stubs
//
///////////////////////////////////////////////////////


SDL_CD dummyCd;


int CD_INDRIVE(CDstatus status)
{
	return ((int)status > 0);
}

CDstatus SDL_CDStatus (SDL_CD *cd)
{
	return CD_TRAYEMPTY;
}

int SDL_CDStop (SDL_CD *cd)
{
	return 0;
}

int SDL_CDPause (SDL_CD *cd)
{
	return 0;
}

int SDL_CDClose (SDL_CD *cd)
{
	return 0;
}

SDL_CD * SDL_CDOpen (int index)
{
	dummyCd.id = 0;
	dummyCd.status = CD_TRAYEMPTY;
	dummyCd.numtracks = 0;
	dummyCd.cur_track = 0;
	dummyCd.cur_frame = 0;

	for(int trackIndex = 0; trackIndex < SDL_MAX_TRACKS + 1;trackIndex++)
	{
		dummyCd.track[trackIndex].id = 0;
		dummyCd.track[trackIndex].type = 0;
		dummyCd.track[trackIndex].length = 0;
		dummyCd.track[trackIndex].offset = 0;
	}

	return &dummyCd;
}

int SDL_CDPlay(SDL_CD *cd, int offset, int length)
{
	return 0;
}

int SDL_CDResume(SDL_CD *cd)
{
	return 0;
}

int SDL_CDEject(SDL_CD *cd)
{
	return 0;
}

void SDL_WarpMouse(unsigned int x, unsigned int y)
{
	// Todo make it work
}

void SDL_XBOX_SetScreenPosition()
{
	// Todo make it work
}

void SDL_XBOX_SetScreenStretch()
{
	// Todo make it work
}

///////////////////////////////////////////////////////
//
// video stubs
//
///////////////////////////////////////////////////////

void SDL_SetColors(SDL_Surface *surface, SDL_Color* colors, int start, int end)
{
    SDL_SetPaletteColors(surface->format->palette, colors, start, end);
}

