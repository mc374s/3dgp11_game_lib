﻿#include "../game.h"
#include "../map_obj.h"

#include "../stage_data.h"

STAGE_DATA stage03_setData[] = {

	// ページ１
	STAGE_DATA(e_startPagination[STAGE_SELECT_MAX_NUM + 3], 0, M_TYPE::BORDER_INNER,				M_DRAW::UP,		v3(0,220,1),		true, v3(PW,11,0), 10),
	STAGE_DATA(e_startPagination[STAGE_SELECT_MAX_NUM + 3], 0, M_TYPE::BORDER_INNER,				M_DRAW::UP,		v3(0,460,1),		true, v3(155,11,0), 10),
	STAGE_DATA(e_startPagination[STAGE_SELECT_MAX_NUM + 3], 0, M_TYPE::BORDER_INNER,				M_DRAW::UP,		v3(310,460,1),		true, v3(310,11,0), 10),
	STAGE_DATA(e_startPagination[STAGE_SELECT_MAX_NUM + 3], 0, M_TYPE::BORDER_INNER,				M_DRAW::LEFT,	v3(PW / 2,231,1),		true, v3(11,229,0), 10),
	STAGE_DATA(e_startPagination[STAGE_SELECT_MAX_NUM + 3], 0, M_TYPE::BORDER_INNER,				M_DRAW::UP,		v3(0,680,1),		true, v3(PW,11,0), 10),
	//STAGE_DATA(e_startPagination[STAGE_SELECT_MAX_NUM + 4], 0, M_TYPE::RECOVERY,				M_DRAW::UP,		v3(50,680 - 64,0),	true, v3(64,64,0), 2),





	STAGE_DATA(e_startPagination[STAGE_SELECT_MAX_NUM + 3], 0, M_TYPE::PASSABLE_UP,			M_DRAW::UP,		v3(155,460,1),		true, v3(155,11,0), 0, recoveryControl),

	STAGE_DATA(e_startPagination[STAGE_SELECT_MAX_NUM + 3], 0, M_TYPE::KEY,						M_DRAW::UP,		v3(50,440 - 111,0),	true, v3(124,111,0), 10),

	STAGE_DATA(e_startPagination[STAGE_SELECT_MAX_NUM + 3], 0, M_TYPE::TUTORIAL_4,				M_DRAW::UP,		v3(300,120,0),	false, v3(239,55,0), 10),





	//ページ２
	STAGE_DATA(e_startPagination[STAGE_SELECT_MAX_NUM + 3] + 1,  0, M_TYPE::BORDER_INNER,					M_DRAW::UP,		v3(0,680,1),		true, v3(PW,11,0), 10),

	STAGE_DATA(e_startPagination[STAGE_SELECT_MAX_NUM + 3] + 1,  0, M_TYPE::BORDER_INNER,					M_DRAW::UP,	 v3(PW / 2,220,1),		true, v3(PW / 2,11,0), 10),
	STAGE_DATA(e_startPagination[STAGE_SELECT_MAX_NUM + 3] + 1, 0, M_TYPE::PASSABLE_DOWN,			M_DRAW::DOWN,		v3(0,220 - 8,1),		true, v3(PW / 2,11,0), 0, recoveryControl),

	STAGE_DATA(e_startPagination[STAGE_SELECT_MAX_NUM + 3] + 1, 0, M_TYPE::BORDER_INNER,				M_DRAW::LEFT,	v3(PW / 2,231,1),		true, v3(11,449,0), 10),


	STAGE_DATA(e_startPagination[STAGE_SELECT_MAX_NUM + 3] + 1,	 0,	M_TYPE::DOOR,						M_DRAW::UP,		v3(100,680 - 111,0),	true, v3(124,111,0), 8),


	// END
	STAGE_DATA(-1,-1, M_TYPE::NONE, M_DRAW::UP, v3(0,0,0),false, v3(0,0,0)),
};