﻿//******************************************************************************
//
//
//		2D画像データ
//
//
//******************************************************************************

// インクルード
#include "game.h"

#include "sprite_data.h"

// ラベル定義
enum TEX_NO {
	TEX_WHITE,
	TEX_TITLE,
	TEX_MAIN,
	TEX_PLAYER,

	TEX_PAGE_LEFT,
	TEX_PAGE_RIGHT,
	TEX_MAP_OBJECT,
	TEX_IVY_THICK,
	TEX_IVY_THIN,

	TEX_GAGE_DIVISION,
	TEX_SMOKE,
	TEX_LIFE_STAMP,
	TEX_LARGE_PLAYER,

	TEX_NUMBERS,

};

// 2D画像ロードデータ
LOAD_TEXTURE e_loadTexture[] = {
	{ TEX_WHITE,			"./DATA/Images/white.png" },
	{ TEX_TITLE,			"./DATA/Images/title_bg.png" },
	{ TEX_MAIN,				"./DATA/Images/default_bg.jpg"},
	{ TEX_PLAYER,			"./DATA/Images/character.png"},


	{ TEX_PAGE_LEFT,		"./DATA/Images/page_left.png" },
	{ TEX_PAGE_RIGHT,		"./DATA/Images/page_right.png" },
	{ TEX_MAP_OBJECT,		"./DATA/Images/map_object.png" },
	{ TEX_IVY_THICK,		"./DATA/Images/koma2.png" },
	{ TEX_IVY_THIN,			"./DATA/Images/koma1.png" },

	{ TEX_GAGE_DIVISION,	"./DATA/Images/gage_division.png" },
	{ TEX_SMOKE,			"./DATA/Images/particle-smoke2.png" },
	{ TEX_LIFE_STAMP,		"./DATA/Images/stamp.png"},
	{ TEX_LARGE_PLAYER,		"./DATA/Images/kyara_gezi.png" },

	{ TEX_NUMBERS,			"./DATA/Images/numbers.png" },
	

	{ -1, NULL },
};

// 背景
SPRITE_LEFTTOP	e_sprTitleBG = SPRITE_LEFTTOP(TEX_TITLE, 0, 0, SCREEN_WIDTH, SCREEN_HEIGHT);
SPRITE_LEFTTOP	e_sprMainBG = SPRITE_LEFTTOP(TEX_MAIN, 0, 0, SCREEN_WIDTH, SCREEN_HEIGHT);

// Book texture
SPRITE_LEFTTOP e_sprPageLeft = SPRITE_LEFTTOP(TEX_PAGE_LEFT, 0, 0, PAGE_WIDTH, PAGE_HEIGHT);
SPRITE_LEFTTOP e_sprPageRight = SPRITE_LEFTTOP(TEX_PAGE_RIGHT, 0, 0, PAGE_WIDTH, PAGE_HEIGHT);

// キャラなど

SPRITE_BOTTOM e_pAnimePlayerStandby[] = {

	SPRITE_BOTTOM(TEX_PLAYER, 0 + 120 * 0, 95, 120, 55, 8),
	SPRITE_BOTTOM(TEX_PLAYER, 0 + 120 * 1, 95, 120, 55, 8),
	SPRITE_BOTTOM(TEX_PLAYER, 0 + 120 * 2, 95, 120, 55, 8),
	SPRITE_BOTTOM(TEX_PLAYER, 0 + 120 * 3, 95, 120, 55, 8),
	SPRITE_BOTTOM(-1, 0, 0, 0, 0),
};

SPRITE_BOTTOM e_pAnimePlayerYawn[] = {

	SPRITE_BOTTOM(TEX_PLAYER, 0 + 120 * 0, 177, 120, 73, 8),
	SPRITE_BOTTOM(TEX_PLAYER, 0 + 120 * 1, 177, 120, 73, 8),
	SPRITE_BOTTOM(TEX_PLAYER, 0 + 120 * 2, 177, 120, 73, 8),
	SPRITE_BOTTOM(TEX_PLAYER, 0 + 120 * 3, 177, 120, 73, 8),
	SPRITE_BOTTOM(TEX_PLAYER, 0 + 120 * 4, 177, 120, 73, 8),
	SPRITE_BOTTOM(TEX_PLAYER, 0 + 120 * 5, 177, 120, 73, 8),
	SPRITE_BOTTOM(TEX_PLAYER, 0 + 120 * 6, 177, 120, 73, 8),
	SPRITE_BOTTOM(TEX_PLAYER, 0 + 120 * 7, 177, 120, 73, 8),
	SPRITE_BOTTOM(-1, 0, 0, 0, 0),
};

SPRITE_BOTTOM e_pAnimePlayerRun[] = {

	SPRITE_BOTTOM(TEX_PLAYER, 0 + 120 * 0, 0, 120, 50, 5),
	SPRITE_BOTTOM(TEX_PLAYER, 0 + 120 * 1, 0, 120, 50, 5),
	SPRITE_BOTTOM(TEX_PLAYER, 0 + 120 * 2, 0, 120, 50, 5),
	SPRITE_BOTTOM(TEX_PLAYER, 0 + 120 * 3, 0, 120, 50, 5),
	SPRITE_BOTTOM(TEX_PLAYER, 0 + 120 * 4, 0, 120, 50, 5),
	SPRITE_BOTTOM(TEX_PLAYER, 0 + 120 * 5, 0, 120, 50, 5),
	SPRITE_BOTTOM(TEX_PLAYER, 0 + 120 * 6, 0, 120, 50, 5),
	SPRITE_BOTTOM(-1, 0, 0, 0, 0),
};

SPRITE_BOTTOM e_pAnimePlayerJump[] = {

	SPRITE_BOTTOM(TEX_PLAYER, 0 + 120 * 0, 285, 120, 65, 5),
	SPRITE_BOTTOM(TEX_PLAYER, 0 + 120 * 1, 285, 120, 65, 5),
	SPRITE_BOTTOM(TEX_PLAYER, 0 + 120 * 2, 285, 120, 65, 5),
	SPRITE_BOTTOM(TEX_PLAYER, 0 + 120 * 3, 285, 120, 65, 5),
	SPRITE_BOTTOM(TEX_PLAYER, 0 + 120 * 4, 285, 120, 65, 5),
	SPRITE_BOTTOM(TEX_PLAYER, 0 + 120 * 5, 285, 120, 65, 5),
	SPRITE_BOTTOM(TEX_PLAYER, 0 + 120 * 6, 285, 120, 65, 5),
	SPRITE_BOTTOM(TEX_PLAYER, 0 + 120 * 7, 285, 120, 65, 5),
	SPRITE_BOTTOM(TEX_PLAYER, 0 + 120 * 8, 285, 120, 65, 5),
	SPRITE_BOTTOM(TEX_PLAYER, 0 + 120 * 9, 285, 120, 65, 5),
	SPRITE_BOTTOM(TEX_PLAYER, 0 + 120 * 10, 285, 120, 65, 5),
	SPRITE_BOTTOM(-1, 0, 0, 0, 0),
};


// マップ関係、アイテム
SPRITE_LEFTTOP e_pSprItem[] =
{
	SPRITE_LEFTTOP(TEX_MAP_OBJECT,   0, 0, 147,  92),// ITEM_HOUSE
	SPRITE_LEFTTOP(TEX_MAP_OBJECT, 147, 0, 101, 122),// ITEM_TREE_A
	SPRITE_LEFTTOP(TEX_MAP_OBJECT, 248, 0,  99, 112),// M_TYPE::TREE_B
	SPRITE_LEFTTOP(TEX_MAP_OBJECT, 347, 0,  79,  47),// M_TYPE::IVY_BIG
	SPRITE_LEFTTOP(TEX_IVY_THIN,	  0, 0, 125,  22),// M_TYPE::IVY_THIN
	SPRITE_LEFTTOP(TEX_IVY_THICK,    0, 0, 125,  17),// M_TYPE::IVY_THICK
	SPRITE_LEFTTOP(TEX_MAP_OBJECT, 715, 0,  51,  76),// M_TYPE::DOOR
	SPRITE_LEFTTOP(TEX_MAP_OBJECT, 802, 0,  36,  28),// M_TYPE::KEY
	e_sprWhite,// M_TYPE::HIGH_CONCENTRATION

	SPRITE_LEFTTOP(-1, 0, 0, 0, 0),
};

// UI関係
SPRITE_LEFTTOP e_sprWhite = SPRITE_LEFTTOP(TEX_WHITE, 0, 0, 32, 32);
SPRITE_CENTER e_sprGageDivision = SPRITE_CENTER(TEX_GAGE_DIVISION, 0, 0, 775, 222);
SPRITE_CENTER e_sprGage = SPRITE_CENTER(TEX_WHITE, 0, 0, 388, 222);
SPRITE_CENTER e_sprLifeStamp = SPRITE_CENTER(TEX_LIFE_STAMP, 0, 0, 36, 28);

SPRITE_CENTER e_sprLargePlayer = SPRITE_CENTER(TEX_LARGE_PLAYER, 0, 0, 252, 231);

SPRITE_CENTER e_sprNumbers = SPRITE_CENTER(TEX_NUMBERS, 0, 0, 76, 118);

// Effect関係
SPRITE_CENTER e_sprHitObj = SPRITE_CENTER(TEX_SMOKE, 0, 0, 64, 64);

//******************************************************************************
