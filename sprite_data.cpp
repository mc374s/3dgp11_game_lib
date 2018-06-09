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

	TEX_PAGE,
	TEX_COVER_FRONT,
	TEX_COVER_BACK,

	TEX_MAP_OBJECT,
	TEX_IVY_THICK,
	TEX_IVY_THIN,
	TEX_RECOVERY,

	TEX_SMOKE,
	TEX_LIFE_STAMP,
	TEX_LARGE_PLAYER,

	TEX_NUMBERS,

	TEX_PAUSE_PANEL,
	TEX_PAUSE_SELECTED,

	TEX_ANIME_STAMP,

	TEX_GAGE_DIVISION_ALLOCATION,
	TEX_GAGE_DIVISION,
	TEX_ANIME_GAGE,
	TEX_PLAYER_FACE,

	TEX_EFF_DISAPPEAR,
	TEX_EFF_JUMP_UP,
	TEX_EFF_JUMP_DOWN,
	TEX_EFF_MAKE_TRANSCRIPTION,

	TEX_GAME_RULE_LEFT,
	TEX_GAME_RULE_RIGHT,

	TEX_HELP,
	TEX_HELP_BUTTON,

};

// 2D画像ロードデータ
LOAD_TEXTURE e_loadTexture[] = {
	{ TEX_WHITE,					"./DATA/Images/white.png" },
	{ TEX_TITLE,					"./DATA/Images/title_bg.png" },
	{ TEX_MAIN,						"./DATA/Images/default_bg.jpg"},
	{ TEX_PLAYER,					"./DATA/Images/character.png"},

	{ TEX_PAGE,						"./DATA/Images/Book/page.png" },
	{ TEX_COVER_FRONT,				"./DATA/Images/Book/cover_front.png" },
	{ TEX_COVER_BACK,				"./DATA/Images/Book/cover_back.png" },

	{ TEX_MAP_OBJECT,				"./DATA/Images/Map/map_object_full.png" },
	{ TEX_IVY_THICK,				"./DATA/Images/Map/border_thick.png" },
	{ TEX_IVY_THIN,					"./DATA/Images/Map/border_thin.png" },
	{ TEX_RECOVERY,					"./DATA/Images/Map/recovery.png" },

	{ TEX_SMOKE,					"./DATA/Images/particle-smoke4.png" },
	{ TEX_LIFE_STAMP,				"./DATA/Images/UI/stamp.png"},
	{ TEX_LARGE_PLAYER,				"./DATA/Images/UI/large_player.png" },

	{ TEX_NUMBERS,					"./DATA/Images/UI/numbers.png" },
	
	{ TEX_PAUSE_PANEL,				"./DATA/Images/UI/pause_panel.png" },
	{ TEX_PAUSE_SELECTED,			"./DATA/Images/UI/pause_selected.png" },

	{ TEX_ANIME_STAMP,				"./DATA/Images/Effect/hanko_motion.png" },

	{ TEX_GAGE_DIVISION_ALLOCATION,	"./DATA/Images/UI/gage_division_allocation.png" },
	{ TEX_GAGE_DIVISION,			"./DATA/Images/UI/gage_division.png" },
	{ TEX_ANIME_GAGE,				"./DATA/Images/UI/gage_ink_white.png" },
	{ TEX_PLAYER_FACE,				"./DATA/Images/UI/player_face.png" },

	{ TEX_EFF_DISAPPEAR,			"./DATA/Images/Effect/disappear.png" },
	{ TEX_EFF_JUMP_UP,				"./DATA/Images/Effect/jump_up.png" },
	{ TEX_EFF_JUMP_DOWN,			"./DATA/Images/Effect/jump_down.png" },
	{ TEX_EFF_MAKE_TRANSCRIPTION,	"./DATA/Images/Effect/make_transcription.png" },

	{ TEX_GAME_RULE_LEFT,			"./DATA/Images/Book/game_rule_left.png" },
	{ TEX_GAME_RULE_RIGHT,			"./DATA/Images/Book/game_rule_right.png" },

	{ TEX_HELP,						"./DATA/Images/UI/help.png" },
	{ TEX_HELP_BUTTON,				"./DATA/Images/UI/help_button.png" },

	{ -1, NULL },
};

// 背景
SPRITE_LEFTTOP	e_sprTitleBG = SPRITE_LEFTTOP(TEX_TITLE, 0, 0, SCREEN_WIDTH, SCREEN_HEIGHT);
SPRITE_LEFTTOP	e_sprMainBG = SPRITE_LEFTTOP(TEX_MAIN, 0, 0, SCREEN_WIDTH, SCREEN_HEIGHT);

// Book texture
SPRITE_LEFTTOP e_sprPage = SPRITE_LEFTTOP(TEX_PAGE, 0, 0, PAGE_WIDTH, PAGE_HEIGHT);


SPRITE_LEFTTOP e_sprCoverFront = SPRITE_LEFTTOP(TEX_COVER_FRONT, 0, 0, PAGE_WIDTH + 0 + 20, PAGE_HEIGHT + 10 + 10);
SPRITE_LEFTTOP e_sprCoverBack = SPRITE_LEFTTOP(TEX_COVER_BACK, 0, 0, PAGE_WIDTH + 0 + 20, PAGE_HEIGHT + 10 + 10);

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

SPRITE_LEFTTOP e_pAnimeRecovery[] =
{
	SPRITE_LEFTTOP(TEX_RECOVERY,    0, 0, 130,  17,0,0,10),
	SPRITE_LEFTTOP(TEX_RECOVERY,    130, 0, 130,  17,0,0,10),
	SPRITE_LEFTTOP(TEX_RECOVERY,    130 * 2, 0, 130,  17,0,0,10),
	SPRITE_LEFTTOP(TEX_RECOVERY,    130 * 3, 0, 130,  17,0,0,10),
	SPRITE_LEFTTOP(-1,0,0,0,0),
};

SPRITE_LEFTTOP e_pSprItem[] =
{
	SPRITE_LEFTTOP(TEX_MAP_OBJECT,   0, 0, 147,  92),// ITEM_HOUSE
	SPRITE_LEFTTOP(TEX_MAP_OBJECT, 147, 0, 101, 122),// ITEM_TREE_A
	SPRITE_LEFTTOP(TEX_MAP_OBJECT, 248, 0,  99, 112),// M_TYPE::TREE_B
	SPRITE_LEFTTOP(TEX_MAP_OBJECT, 347, 0,  79,  47),// M_TYPE::IVY_BIG
	SPRITE_LEFTTOP(TEX_IVY_THIN,	 0, 0, 125,  22),// M_TYPE::IVY_THIN
	SPRITE_LEFTTOP(TEX_IVY_THICK,    0, 0, 125,  17),// M_TYPE::IVY_THICK
	e_pAnimeRecovery[0],							 // M_TYPE::RECOVERY_UP
	e_pAnimeRecovery[0],							 // M_TYPE::RECOVERY_DOWN
	SPRITE_LEFTTOP(TEX_MAP_OBJECT, 715, 0,  51,  76),// M_TYPE::DOOR
	SPRITE_LEFTTOP(TEX_MAP_OBJECT, 802, 0,  36,  28),// M_TYPE::KEY
	e_sprWhite,// M_TYPE::HIGH_CONCENTRATION
	SPRITE_LEFTTOP(TEX_GAME_RULE_LEFT, 0, 0,  PAGE_WIDTH,  PAGE_HEIGHT),// M_TYPE::GAME_RULE_LEFT
	SPRITE_LEFTTOP(TEX_GAME_RULE_RIGHT, 0, 0,  PAGE_WIDTH,  PAGE_HEIGHT),// M_TYPE::GAME_RULE_RIGHT

	SPRITE_LEFTTOP(-1, 0, 0, 0, 0),
};

// UI関係
SPRITE_LEFTTOP e_sprLifeStamp = SPRITE_LEFTTOP(TEX_LIFE_STAMP, 0, 0, 36, 28);

SPRITE_LEFTTOP e_sprWhite = SPRITE_LEFTTOP(TEX_WHITE, 0, 0, 32, 32);
SPRITE_CENTER e_sprGageDivisionAllocation = SPRITE_CENTER(TEX_GAGE_DIVISION_ALLOCATION, 0, 0, 362, 50);
SPRITE_CENTER e_sprGageAllocation = SPRITE_CENTER(TEX_WHITE, 0, 0, 34 * 10, 30);


SPRITE_LEFTTOP e_sprGageDivision = SPRITE_LEFTTOP(TEX_GAGE_DIVISION, 0, 0, 456, 128);
SPRITE_LEFTTOP e_sprGage = SPRITE_LEFTTOP(TEX_WHITE, 0, 0, 34 * 10 - 5, 30);
SPRITE_LEFTTOP e_pAnimeGage[] = {
	SPRITE_LEFTTOP(TEX_ANIME_GAGE,  0, 0, 10, 30, 0, 0, 10),
	SPRITE_LEFTTOP(TEX_ANIME_GAGE, 10, 0, 10, 30, 0, 0, 10),
	SPRITE_LEFTTOP(TEX_ANIME_GAGE, 20, 0, 10, 30, 0, 0, 10),
	SPRITE_LEFTTOP(TEX_ANIME_GAGE, 30, 0, 10, 30, 0, 0, 10),
	SPRITE_LEFTTOP(TEX_ANIME_GAGE, 40, 0, 10, 30, 0, 0, 10),
	SPRITE_LEFTTOP(-1, 0, 0, 0, 0),
};

SPRITE_CENTER e_sprLargePlayer = SPRITE_CENTER(TEX_LARGE_PLAYER, 0, 0, 252, 231);

SPRITE_LEFTTOP e_pSprPlayerFace[] = {
	SPRITE_LEFTTOP(TEX_PLAYER_FACE, 0  , 0, 90, 90),
	SPRITE_LEFTTOP(TEX_PLAYER_FACE, 90 , 0, 90, 90),
	SPRITE_LEFTTOP(TEX_PLAYER_FACE, 180, 0, 90, 90),
};

SPRITE_CENTER e_sprNumbers = SPRITE_CENTER(TEX_NUMBERS, 0, 0, 76, 118);

SPRITE_CENTER e_sprPausePanel = SPRITE_CENTER(TEX_PAUSE_PANEL, 0, 0, 670, 380);
SPRITE_CENTER e_sprPauseSelected = SPRITE_CENTER(TEX_PAUSE_SELECTED, 0, 0, 480, 68);

SPRITE_CENTER e_sprHelp = SPRITE_CENTER(TEX_HELP, 0, 0, 231, 119);
SPRITE_LEFTTOP e_sprHelpButton = SPRITE_LEFTTOP(TEX_HELP_BUTTON, 0, 0, 128, 32);

// Effect関係
SPRITE_CENTER e_sprHitObj = SPRITE_CENTER(TEX_SMOKE, 0, 0, 64, 64);

SPRITE_CENTER e_pAnimeStamp[] =
{
	SPRITE_CENTER(TEX_ANIME_STAMP,122 * 0,0,122,138,20),
	SPRITE_CENTER(TEX_ANIME_STAMP,122 * 1,0,122,138,8),
	SPRITE_CENTER(TEX_ANIME_STAMP,122 * 2,0,122,138,8),
	SPRITE_CENTER(TEX_ANIME_STAMP,122 * 3,0,122,138,8),
	SPRITE_CENTER(TEX_ANIME_STAMP,122 * 4,0,122,138,8),
	SPRITE_CENTER(TEX_ANIME_STAMP,122 * 5,0,122,138,8),
	SPRITE_CENTER(TEX_ANIME_STAMP,122 * 6,0,122,138,8),
	SPRITE_CENTER(TEX_ANIME_STAMP,122 * 7,0,122,138,8),
	SPRITE_CENTER(TEX_ANIME_STAMP,122 * 8,0,122,138,8),
	SPRITE_CENTER(TEX_ANIME_STAMP,122 * 9,0,122,138,50),
	SPRITE_CENTER(-1, 0, 0, 0, 0),
};

SPRITE_BOTTOM e_pAnimeEffDisappear[] = {
	SPRITE_BOTTOM(TEX_EFF_DISAPPEAR, 84*0, 0, 84, 75, 6),
	SPRITE_BOTTOM(TEX_EFF_DISAPPEAR, 84*1, 0, 84, 75, 6),
	SPRITE_BOTTOM(TEX_EFF_DISAPPEAR, 84*2, 0, 84, 75, 6),
	SPRITE_BOTTOM(TEX_EFF_DISAPPEAR, 84*3, 0, 84, 75, 6),
	SPRITE_BOTTOM(TEX_EFF_DISAPPEAR, 84*4, 0, 84, 75, 6),
	SPRITE_BOTTOM(-1, 0, 0, 0, 0),
};
SPRITE_BOTTOM e_pAnimeEffJumpUp[] = {
	SPRITE_BOTTOM(TEX_EFF_JUMP_UP, 113 * 0, 0, 113, 18, 6),
	SPRITE_BOTTOM(TEX_EFF_JUMP_UP, 113 * 1, 0, 113, 18, 6),
	SPRITE_BOTTOM(TEX_EFF_JUMP_UP, 113 * 2, 0, 113, 18, 6),
	SPRITE_BOTTOM(TEX_EFF_JUMP_UP, 113 * 3, 0, 113, 18, 6),
	SPRITE_BOTTOM(-1, 0, 0, 0, 0)
};
SPRITE_BOTTOM e_pAnimeEffJumpDown[] = {
	SPRITE_BOTTOM(TEX_EFF_JUMP_DOWN, 143 * 0, 0, 143, 23, 6),
	SPRITE_BOTTOM(TEX_EFF_JUMP_DOWN, 143 * 1, 0, 143, 23, 6),
	SPRITE_BOTTOM(TEX_EFF_JUMP_DOWN, 143 * 2, 0, 143, 23, 6),
	SPRITE_BOTTOM(TEX_EFF_JUMP_DOWN, 143 * 3, 0, 143, 23, 6),
	SPRITE_BOTTOM(-1, 0, 0, 0, 0),
};
SPRITE_BOTTOM e_pAnimeEffMakeTranscription[] = {
	SPRITE_BOTTOM(TEX_EFF_MAKE_TRANSCRIPTION, 81 * 0, 0, 81, 75, 6),
	SPRITE_BOTTOM(TEX_EFF_MAKE_TRANSCRIPTION, 81 * 1, 0, 81, 75, 6),
	SPRITE_BOTTOM(TEX_EFF_MAKE_TRANSCRIPTION, 81 * 2, 0, 81, 75, 6),
	SPRITE_BOTTOM(-1, 0, 0, 0, 0),
};

//******************************************************************************
