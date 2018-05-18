﻿#include "game.h"
#include "map_obj.h"

#include "stage_data.h"

STAGE_DATA stage00_setData[] = {

	//STAGE_DATA(0, MAPOBJ_IVY_THICK, DRAW_UP, true, v3(0,0,0),true, v3(PW,22,0), 10),
	//STAGE_DATA(0, MAPOBJ_IVY_THICK, DRAW_DOWN, true, v3(0,PH - 22,0),true, v3(PW,22,0), 10),
	//STAGE_DATA(0, MAPOBJ_IVY_THICK, DRAW_LEFT, true, v3(0,0,0),true, v3(22,PH,0), 10),
	//STAGE_DATA(0, MAPOBJ_IVY_THICK, DRAW_UP, true, v3(300,500,0),true, v3(600,22,0), 10),
	//STAGE_DATA(0, MAPOBJ_IVY_THICK, DRAW_UP, false, v3(0,0,0),true, v3(PW,22,0), 10),
	//STAGE_DATA(0, MAPOBJ_IVY_THICK, DRAW_DOWN, false, v3(0,PH - 22,0),true, v3(PW,22,0), 10),
	//STAGE_DATA(0, MAPOBJ_IVY_THICK, DRAW_UP, true, v3(300,500,0),true, v3(600,22,0), 10),
	//STAGE_DATA(0, MAPOBJ_IVY_THICK, DRAW_RIGHT, false, v3(PW-22,0,0),true, v3(22,PH,0), 10),

	//STAGE_DATA(0, MAPOBJ_TREE_A, DRAW_UP, true, v3(50,100,0),false, v3(0,0,0), 10),
	//STAGE_DATA(0, MAPOBJ_TREE_A, DRAW_UP, false, v3(100,100,0),false, v3(0,0,0), 10),
	//STAGE_DATA(0, MAPOBJ_HOUSE, DRAW_UP, true, v3(200,100,0),false, v3(0,0,0), 10),
	//STAGE_DATA(0, MAPOBJ_HOUSE, DRAW_UP, false, v3(200,100,0),false, v3(0,0,0), 10),

	//左ページ
	STAGE_DATA(0, MAPOBJ_IVY_THICK, DRAW_UP, true, v3(0,130,1),true, v3(PW,22,0), 10),
	STAGE_DATA(0, MAPOBJ_IVY_THICK, DRAW_UP, true, v3(0,350,1),true, v3(PW,22,0), 10),
	STAGE_DATA(0, MAPOBJ_IVY_THICK, DRAW_UP, true, v3(0,580,1),true, v3(PW,22,0), 10),
	STAGE_DATA(0, MAPOBJ_IVY_THICK, DRAW_UP, true, v3(0,750,1),true, v3(PW,22,0), 10),
	STAGE_DATA(0, MAPOBJ_IVY_THICK, DRAW_UP, true, v3(0,930,1),true, v3(120,22,0), 10),
	STAGE_DATA(0, MAPOBJ_IVY_THICK, DRAW_UP, true, v3(400,930,1),true, v3(220,22,0), 10),
	STAGE_DATA(0, MAPOBJ_IVY_THICK, DRAW_LEFT, true, v3(250,750,1),true, v3(22,200,0), 10),
	STAGE_DATA(0, MAPOBJ_IVY_THICK, DRAW_UP, true, v3(0,1150,1),true, v3(PW,22,0), 10),
	STAGE_DATA(0, MAPOBJ_IVY_THICK, DRAW_UP, true, v3(0,1330,1),true, v3(PW,22,0), 10),
	STAGE_DATA(0, MAPOBJ_IVY_THICK, DRAW_LEFT, true, v3(PW/2,1330,1),true, v3(22,330,0), 10),
	STAGE_DATA(0, MAPOBJ_IVY_THICK, DRAW_UP, true, v3(0,1520,1),true, v3(310,22,0), 10),
	STAGE_DATA(0, MAPOBJ_IVY_THICK, DRAW_UP, true, v3(315,1650,1),true, v3(310,22,0), 10),
	STAGE_DATA(0, MAPOBJ_IVY_THICK, DRAW_UP, true, v3(0,1750,1),true, v3(PW,22,0), 10),


	STAGE_DATA(0, MAPOBJ_IVY_THIN, DRAW_UP, true, v3(120,930,1),true, v3(280,22,0), LOW_CONCENTRATION),

	STAGE_DATA(0, MAPOBJ_HIGH_CONCENTRATION, DRAW_UP, true, v3(0,350,0),false, v3(PW,230,0), 5),

	STAGE_DATA(0, MAPOBJ_DOOR, DRAW_UP, true, v3(10,1676,0),false, v3(51,76,0), 10),


	//右ページ
	STAGE_DATA(0, MAPOBJ_IVY_THICK, DRAW_UP, false, v3(0,240,1),true, v3(PW,22,0), 10),
	STAGE_DATA(0, MAPOBJ_IVY_THICK, DRAW_UP, false, v3(0,470,1),true, v3(PW,22,0), 10),
	STAGE_DATA(0, MAPOBJ_IVY_THICK, DRAW_LEFT, false, v3(310,470,1),true, v3(22,280,0), 10),
	STAGE_DATA(0, MAPOBJ_IVY_THICK, DRAW_UP, false, v3(0,750,1),true, v3(170,22,0), 10),
	STAGE_DATA(0, MAPOBJ_IVY_THICK, DRAW_UP, false, v3(310,750,1),true, v3(310,22,0), 10),
	STAGE_DATA(0, MAPOBJ_IVY_THICK, DRAW_UP, false, v3(PW/2,1150,1),true, v3(PW/2,22,0), 10),
	STAGE_DATA(0, MAPOBJ_IVY_THICK, DRAW_LEFT, false, v3(PW/2,930,1),true, v3(22,220,0), 10),
	STAGE_DATA(0, MAPOBJ_IVY_THICK, DRAW_UP, false, v3(0,1430,1),true, v3(PW,22,0), 10),
	STAGE_DATA(0, MAPOBJ_IVY_THICK, DRAW_UP, false, v3(0,1750,1),true, v3(PW,22,0), 10),

	STAGE_DATA(0, MAPOBJ_IVY_THIN, DRAW_UP, false, v3(170,750,1),true, v3(140,22,0), LOW_CONCENTRATION),
	STAGE_DATA(0, MAPOBJ_IVY_THIN, DRAW_UP, false, v3(0,930,1),true, v3(PW,22,0), LOW_CONCENTRATION),
	STAGE_DATA(0, MAPOBJ_IVY_THIN, DRAW_UP, false, v3(0,1150,1),true, v3(PW/2,22,0), LOW_CONCENTRATION),
	STAGE_DATA(0, MAPOBJ_IVY_THIN, DRAW_UP, false, v3(0,1560,1),true, v3(PW,22,0), LOW_CONCENTRATION),



	STAGE_DATA(0, MAPOBJ_HIGH_CONCENTRATION, DRAW_UP, false, v3(310,470,0),true, v3(310,280,0), 5),



	/*STAGE_DATA(0, MAPOBJ_TREE_A, DRAW_UP, true, v3(50,100,0),false, v3(0,0,0), 10),
	STAGE_DATA(0, MAPOBJ_TREE_A, DRAW_UP, false, v3(100,100,0),false, v3(0,0,0), 10),
	STAGE_DATA(0, MAPOBJ_HOUSE, DRAW_UP, true, v3(200,100,0),false, v3(0,0,0), 10),
	STAGE_DATA(0, MAPOBJ_HOUSE, DRAW_UP, false, v3(200,100,0),false, v3(0,0,0), 10),
	STAGE_DATA(0, MAPOBJ_IVY_BIG, DRAW_UP, false, v3(200,400,0),true, v3(79,47,0), 10),
	STAGE_DATA(0, MAPOBJ_IVY_THICK, DRAW_UP, true, v3(300,500,0),true, v3(600,22,0), 10),
	STAGE_DATA(0, MAPOBJ_IVY_THICK, DRAW_UP, false, v3(300,100,0),true, v3(600,22,0), 10),
	STAGE_DATA(0, MAPOBJ_IVY_THIN, DRAW_UP, false, v3(200,200,0),true, v3(200,22,0), 10),
	STAGE_DATA(0, MAPOBJ_IVY_THIN, DRAW_DOWN, false, v3(200,222,0),true, v3(200,22,0), 10),
	STAGE_DATA(0, MAPOBJ_IVY_THIN, DRAW_LEFT, false, v3(178,400,0),true, v3(22,200,0), 10),
	STAGE_DATA(0, MAPOBJ_IVY_THIN, DRAW_RIGHT, false, v3(422,400,0),true, v3(22,200,0), 10),*/
	STAGE_DATA(-1, MAPOBJ_NONE, DRAW_UP, false, v3(0,0,0),false, v3(0,0,0)),
};