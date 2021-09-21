///////////////////////////////////////////////////////
//
// CD rom stubs
//
///////////////////////////////////////////////////////

#define SDL_MAX_TRACKS 10

#define SDL_INIT_CDROM 0

typedef enum {
 CD_TRAYEMPTY,
 CD_STOPPED,
 CD_PLAYING,
 CD_PAUSED,
 CD_ERROR = -1
} CDstatus;

typedef unsigned char Uint8;
typedef unsigned int Uint32;

typedef struct{
	Uint8 id;
	Uint8 type;
	Uint32 length;
	Uint32 offset;
} SDL_CDtrack;

typedef struct{
 int id;
 CDstatus status;
 int numtracks;
 int cur_track;
 int cur_frame;
 SDL_CDtrack track[SDL_MAX_TRACKS+1];
} SDL_CD;

extern int CD_INDRIVE(CDstatus status);

extern CDstatus SDL_CDStatus (SDL_CD *cd);

extern int SDL_CDStop (SDL_CD *cd);

extern int SDL_CDPause (SDL_CD *cd);

extern int SDL_CDClose (SDL_CD *cd);

extern SDL_CD * SDL_CDOpen(int index);

extern int SDL_CDPlay(SDL_CD *cd, int offset, int length);

extern int SDL_CDResume(SDL_CD *cd);

extern int SDL_CDEject(SDL_CD *cd);

extern void SDL_WarpMouse(unsigned int x, unsigned int y);

extern void SDL_UpdateRect(SDL_Surface *screen, Sint32 x, Sint32 y, Uint32 w, Uint32 h);
extern void SDL_UpdateRects (SDL_Surface *screen, int numrects, SDL_Rect *rects);


///////////////////////////////////////////////////////
//
// keyboard stubs
//
///////////////////////////////////////////////////////

#define SDLK_KP0 SDLK_KP_0
#define SDLK_KP1 SDLK_KP_1
#define SDLK_KP2 SDLK_KP_2
#define SDLK_KP3 SDLK_KP_3

#define SDLK_KP4 SDLK_KP_4
#define SDLK_KP5 SDLK_KP_5
#define SDLK_KP6 SDLK_KP_6
#define SDLK_KP7 SDLK_KP_7

#define SDLK_KP8 SDLK_KP_8
#define SDLK_KP9 SDLK_KP_9


///////////////////////////////////////////////////////
//
// video stubs
//
///////////////////////////////////////////////////////

extern void SDL_SetColors(SDL_Surface *surface, SDL_Color* colors, int start, int end);

