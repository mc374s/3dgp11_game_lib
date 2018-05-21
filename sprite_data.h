﻿#ifndef _SPRDATA_H_
#define	_SPRDATA_H_

extern LOAD_TEXTURE e_loadTexture[];

// 背景
extern SPRITE_LEFTTOP	e_sprTitleBG;
extern SPRITE_LEFTTOP	e_sprMainBG;

// Book texture
extern SPRITE_LEFTTOP e_sprPageLeft;
extern SPRITE_LEFTTOP e_sprPageRight;

// キャラなど
//extern SPRITE_BOTTOM e_pSprPlayerStandby[];
//extern SPRITE_BOTTOM* e_pAnimePlayerStandby[][9];


extern SPRITE_BOTTOM e_pAnimePlayerStandby[];
extern SPRITE_BOTTOM e_pAnimePlayerYawn[];

extern SPRITE_BOTTOM e_pAnimePlayerRun[];
extern SPRITE_BOTTOM e_pAnimePlayerJump[];

// マップ関係、アイテム
extern SPRITE_LEFTTOP e_pSprItem[];


// UI関係
extern SPRITE_LEFTTOP e_sprWhite;
extern SPRITE_CENTER e_sprGage;
extern SPRITE_CENTER e_sprGageDivision;
extern SPRITE_CENTER e_sprLifeStamp;

// Effect関係
extern SPRITE_CENTER e_sprHitObj;

#endif // !_SPRDATA_H_
