#pragma once
#ifndef __GAME_OBJECT_TYPE__
#define __GAME_OBJECT_TYPE__
enum GameObjectType {
	NONE = -1,
	SHIP,
	PROJECTILE,
	VICTOR,
	BOSS,
	TARGET,
	PLAYER,
	PLANE,
	BACKGROUND,
	STATICSPRITE,
	START_BUTTON,
	PLAY_BUTTON,
	RESTART_BUTTON,
	BACK_BUTTON,
	NEXT_BUTTON,
	NUM_OF_TYPES
};
#endif /* defined (__GAME_OBJECT_TYPE__) */