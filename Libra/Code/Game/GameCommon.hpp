#pragma once
#include "Engine/core/Vertex_PCU.hpp"

// game world settings
constexpr float WORLD_SIZE_X = 20.f;
constexpr float WORLD_SIZE_Y = 10.f;
constexpr float COMMON_ENTITY_SCALE = 1.f;

constexpr unsigned char WORLD_COLOR_R = 31; // limit the color under 256
constexpr unsigned char WORLD_COLOR_G = 32;
constexpr unsigned char WORLD_COLOR_B = 62;

constexpr unsigned char TILE_GRASS_COLOR_R = 171; // limit the color under 256
constexpr unsigned char TILE_GRASS_COLOR_G = 238;
constexpr unsigned char TILE_GRASS_COLOR_B = 97;
constexpr unsigned char TILE_GRASS_COLOR_A = 255;

constexpr unsigned char TILE_STONE_COLOR_R = 161; // limit the color under 256
constexpr unsigned char TILE_STONE_COLOR_G = 196;
constexpr unsigned char TILE_STONE_COLOR_B = 175;
constexpr unsigned char TILE_STONE_COLOR_A = 255;

constexpr int ENTRANCE_SAFEZONE_SIZE = 5;
constexpr int EXIT_SAFEZONE_SIZE = 7;

// game camera settings
constexpr float WORLD_CAMERA_ORTHO_X = 200.f;
constexpr float WORLD_CAMERA_ORTHO_Y = 100.f;
constexpr float SCREEN_CAMERA_ORTHO_X = 200.f;
constexpr float SCREEN_CAMERA_ORTHO_Y = 100.f;
constexpr float CAMERA_SHAKE_AMOUNT_PLAYERDEAD = 4.5f;
constexpr float CAMERA_SHAKE_AMOUNT_EXPLOSION  = 0.6f;
constexpr float CAMERA_SHAKE_REDUCTION = 2.7f;

// UI setting
constexpr float TIME_RETURN_TO_PERISHMODE			 = 3.0f;
constexpr float TIME_TRANSITION_GAME = 0.1f;
constexpr float TIME_INTRO_ZOOMOUT = 50.0f;
constexpr float UI_POSITION_PLAYER_LIVES_X			 = 15.f;
constexpr float UI_POSITION_PLAYER_LIVES_Y			 = 94.f;
constexpr float UI_POSITION_PLAYER_LIVES_SPACING	 = 6.f;

constexpr float UI_POSITION_ENERGY_BOOSTER_X = 7.f;
constexpr float UI_POSITION_ENERGY_BOOSTER_Y = 94.f;

// Attract mode settings
constexpr int   UI_POSITION_ATTRACTMODE_ICON_NUM	 = 2;
constexpr float UI_POSITION_ATTRACTMODE_ICONA_X		 = 145.f;
constexpr float UI_POSITION_ATTRACTMODE_ICONA_Y		 = 45.f;
constexpr float UI_ORIENTATION_ATTRACTMODE_ICONB = 120.f;
constexpr float UI_ATTRACTMODE_ICONA_SCALE   = 7.5f;
constexpr float UI_ATTRACTMODE_ICONB_SCALE = 3.f;

constexpr float UI_POSITION_ATTRACTMODE_PLAYBUTTON_X = 100.f;
constexpr float UI_POSITION_ATTRACTMODE_PLAYBUTTON_Y = 50.f;
constexpr float UI_ATTRACTMODE_PLAYBUTTON_SCALE = 3.f;

constexpr unsigned char ATTRACTMODE_PLAYBUTTON_COLOR_R = 24;
constexpr unsigned char ATTRACTMODE_PLAYBUTTON_COLOR_G = 98;
constexpr unsigned char ATTRACTMODE_PLAYBUTTON_COLOR_B = 101;
constexpr unsigned char ATTRACTMODE_PLAYBUTTON_COLOR_A = 150;

// weapon settings
constexpr float BULLET_SPEED = 7.f;
constexpr float BULLET_SPRITE_HALFSIZE = 0.075f;
constexpr float PLAYERTANK_COOLDOWN = 0.1f;
constexpr float LEO_COOLDOWN = 1.f;
constexpr float SCORPIO_COOLDOWN = 0.3f;


// enemy setting
constexpr float WONDER_TURNDIRECTION_INTERVAL = 1.f;
constexpr float SCORPIO_ANGULAR_VELOCITY = 30.f;// degrees per second
constexpr float LEO_ANGULAR_VELOCITY = 45.f;// degrees per second
constexpr float LEO_LINEAR_SPEED = .7f;

constexpr float ARIES_ANGULAR_VELOCITY = 30.f;// degrees per second
constexpr float ARIES_LINEAR_VELOCITY = .6f;
constexpr int	PLAYER_HEALTH = 5;
constexpr int	ARIES_HEALTH = 5;
constexpr int	LEO_HEALTH = 5;
constexpr int	CAPRICORN_HEALTH = 5;

constexpr float RAYCAST_TOFINDPLAYER_RANGE = 10.f;
constexpr float RAYCAST_UNITS_PER_STEP = 0.01f;
constexpr float RAYCAST_NUM_STEPS = RAYCAST_TOFINDPLAYER_RANGE / RAYCAST_UNITS_PER_STEP;

// Debris setting
constexpr float DEBRIS_LIFESPAN = 5.f;

// energy settings
constexpr float UI_ENERGYBAR_POS_X = 5.f;
constexpr float UI_ENERGYBAR_POS_Y = 90.f;
constexpr float UI_ENERGYREMAIN_OFFSET = .8f;
constexpr float UI_ENERGYBAR_LENGTH = 30.f;
constexpr float UI_ENERGYBAR_HEIGHT = 2.f;
constexpr float UI_ENERGYBAR_SLOPE = 2.f;

constexpr float ENERGY_GENERATE_RATE = 0.06f;
constexpr float ENERGY_CONSUMING_SHIELD_RATE = 0.01f; // should be 0.18
constexpr float ENERGY_CONSUMING_FIRERATE_RATE = 0.15f;
constexpr float ENERGY_CONSUMING_SPEEDBURST_RATE = 0.09f;

constexpr unsigned char ENERGYBAR_COLOR_R = 24;
constexpr unsigned char ENERGYBAR_COLOR_G = 98;
constexpr unsigned char ENERGYBAR_COLOR_B = 101;
constexpr unsigned char ENERGYBAR_COLOR_A = 150;
constexpr unsigned char ENERGY_REMAIN_COLOR_R = 11;
constexpr unsigned char ENERGY_REMAIN_COLOR_G = 208;
constexpr unsigned char ENERGY_REMAIN_COLOR_B = 224;
constexpr unsigned char ENERGY_REMAIN_COLOR_A = 255;
constexpr unsigned char ENERGY_REMAIN_WARNING_COLOR_R = 211;
constexpr unsigned char ENERGY_REMAIN_WARNING_COLOR_G = 11;
constexpr unsigned char ENERGY_REMAIN_WARNING_COLOR_B = 93;
constexpr unsigned char ENERGY_SELECTION_RING_COLOR_R = 24;
constexpr unsigned char ENERGY_SELECTION_RING_COLOR_G = 98;
constexpr unsigned char ENERGY_SELECTION_RING_COLOR_B = 101;


// Entity universal setting
constexpr int	PLAYER_LIVES_NUM = 1;

// PlayerTank Settings
constexpr int	PLAYERSHIP_HEALTH = 5;

constexpr float PLAYERTANK_BODY_TURNRATE = 180.f;
constexpr float PLAYERTANK_TURRET_TURNRATE = 360.f;

constexpr float PLAYERTANK_PHYSICS_RADIUS = 0.5f;
constexpr float PLAYERTANK_COSMETIC_RADIUS = 0.75f;

constexpr float PLAYERSHIP_SHIELD_RADIUS = 2.5f;
constexpr float PLAYERSHIP_FLAME_LENGTH_LONG = 9.0f;
constexpr float PLAYERSHIP_FLAME_LENGTH_SHORT = 3.0f;

constexpr float	PLAYERTANK_BODY_SIZE_X   = 1.f;
constexpr float	PLAYERTANK_BODY_SIZE_Y   = 1.f;
constexpr float	PLAYERTANK_TURRET_SIZE_X = 1.f;
constexpr float	PLAYERTANK_TURRET_SIZE_Y = 1.f;

constexpr float PLAYERSHIP_ACCERATION_LOW = 10.f;
constexpr float PLAYERSHIP_ACCERATION_HIGH = 30.f;

constexpr float PLAYERTANK_FIRE_RATE_LONG = 0.3f;
constexpr float PLAYERSHIP_FIRE_RATE_SHORT = 0.1f;

constexpr int   PLAYERSHIP_DEBRIS_MIN_NUM = 5;
constexpr int   PLAYERSHIP_DEBRIS_MAX_NUM = 30;
constexpr unsigned char PLAYERSHIP_COLOR_R = 102;
constexpr unsigned char PLAYERSHIP_COLOR_G = 153;
constexpr unsigned char PLAYERSHIP_COLOR_B = 204;
constexpr unsigned char PLAYERSHIP_COLOR_A = 255;
constexpr unsigned char PLAYERSHIP_FLAME_COLOR_R = 255;
constexpr unsigned char PLAYERSHIP_FLAME_COLOR_G = 255;
constexpr unsigned char PLAYERSHIP_FLAME_COLOR_B = 0;;
constexpr unsigned char PLAYERSHIP_TRAIL_COLOR_A = 255;


// Debug drawing settings
constexpr int DEBUG_NUM_SIDES = 48;
constexpr int DEBUG_NUM_TRIS = DEBUG_NUM_SIDES * 2;
constexpr int DEBUG_NUM_VERTS = DEBUG_NUM_TRIS * 3;
constexpr float DEBUG_RING_DEGREES_PERSIDE = 360.f / static_cast<float>(DEBUG_NUM_SIDES);
constexpr float DEBUGRING_THICKNESS = 0.05f;

// Debug drawing settings
constexpr int DISK_NUM_SIDES = 24;
constexpr int DISK_NUM_TRIS	 = DISK_NUM_SIDES * 1;
constexpr int DISK_NUM_VERTS = DISK_NUM_TRIS * 3;
constexpr float DISK_DEGREES_PERSIDE = 360.f / static_cast<float>(DISK_NUM_SIDES);

// Debug drawing settings
constexpr int SHIELD_RING_NUM_SIDES = 24;
constexpr int SHIELD_RING_NUM_TRIS = SHIELD_RING_NUM_SIDES * 2;
constexpr int SHIELD_RING_NUM_VERTS = SHIELD_RING_NUM_TRIS * 3;
constexpr float SHIELD_DEGREES_PERSIDE = 360.f / static_cast<float>(SHIELD_RING_NUM_SIDES);


constexpr int DEBUGRING_PHYSICS_COLOR_R = 0;
constexpr int DEBUGRING_PHYSICS_COLOR_G = 255;
constexpr int DEBUGRING_PHYSICS_COLOR_B = 255;
constexpr int DEBUGRING_PHYSICS_COLOR_A = 255;

constexpr int DEBUG_COLOR_MAGENTA_R = 255;
constexpr int DEBUG_COLOR_MAGENTA_G = 0;
constexpr int DEBUG_COLOR_MAGENTA_B = 255;
constexpr int DEBUG_COLOR_MAGENTA_A = 255;

constexpr float DEBUGLINE_THICKNESS = 0.025f;

constexpr unsigned char DEBUGLINE_VELOCITY_COLOR_R = 255;
constexpr unsigned char DEBUGLINE_VELOCITY_COLOR_G = 255;
constexpr unsigned char DEBUGLINE_VELOCITY_COLOR_B = 0;
constexpr unsigned char DEBUGLINE_VELOCITY_COLOR_A = 255;

constexpr unsigned char DEBUGLINE_AXISY_COLOR_R = 255;
constexpr unsigned char DEBUGLINE_AXISY_COLOR_G = 0;
constexpr unsigned char DEBUGLINE_AXISY_COLOR_B = 0;
constexpr unsigned char DEBUGLINE_AXISY_COLOR_A = 255;

constexpr unsigned char DEBUGLINE_AXISX_COLOR_R = 0;
constexpr unsigned char DEBUGLINE_AXISX_COLOR_G = 255;
constexpr unsigned char DEBUGLINE_AXISX_COLOR_B = 0;
constexpr unsigned char DEBUGLINE_AXISX_COLOR_A = 255;

constexpr unsigned char DEBUGLINE_TARGET_COLOR_R = 50;
constexpr unsigned char DEBUGLINE_TARGET_COLOR_G = 50;
constexpr unsigned char DEBUGLINE_TARGET_COLOR_B = 50;
constexpr unsigned char DEBUGLINE_TARGET_COLOR_A = 255;


void DebugDrawLine(Vec2 StartPos, Vec2 EndPos, float thickness, Rgba8 const& color);
void DebugDrawRing(Vec2 const& center, float radius, float thickness, Rgba8 const& color);
void DrawDisk(Vec2 const& center, float radius, Rgba8 const& colorA, Rgba8 const& colorB);

// note for the use of Map data structure
// std::vector<int> vectorOfInts;
// vectorOfInts.push_back(100);
// vectorOfInts.push_back(101);
// vectorOfInts.push_back(102);
// vectorOfInts.push_back(103);
// 
// for (std::vector<int>::iterator iter = vectorOfInts.begin(); iter != vectorOfInts.end(); ++iter)
// {
// 	int& value = *iter;//equal to a pointer
// 	if ( value == 102)
// 	{
// 		vectorOfInts.push_back(999); // not safe to use this way because the list might be relocated
// 	}
// }
// 
// // if you want to use in const functions
// for (std::vector<int>::const_iterator iter = vectorOfInts.begin(); iter != vectorOfInts.end(); ++iter)
// {
// 	int& value = *iter;//equal to a pointer
// 	if (value == 102)
// 	{
// 		vectorOfInts.push_back(999); // not safe to use this way because the list might be relocated
// 	}
// }
// 
// for (auto iter = vectorOfInts.begin(); iter != vectorOfInts.end(); ++iter)
// {
// 	int& value = *iter;//equal to a pointer
// 	if (value == 102)
// 	{
// 		vectorOfInts.push_back(999); // not safe to use this way because the list might be relocated
// 	}
// }
// 
// for (int& value: vectorOfInts)
// { 
// 	if (value == 102)// directly get the value of each item in the array
// 	{
// 		vectorOfInts.push_back(999); // not safe to use this way because the list might be relocated
// 		// could crash
// 	}
// }
// 
// std::map<int, int> mapOfIntKeysToIntValues;
// // do not use "insert"
// mapOfIntKeysToIntValues[5] = 1000;// the [] are functions, which creates the entry and insert the item
// mapOfIntKeysToIntValues[-60] = 232;
// mapOfIntKeysToIntValues[205] = 52;
// mapOfIntKeysToIntValues[999] = 7754754;
// 
// std::map<std::string, TileDef*> mapOfTileTypeNamesToTileDefs;
// mapOfTileTypeNamesToTileDefs["Grass"] = 42;
// mapOfTileTypeNamesToTileDefs["Stone"] = 99;
// mapOfTileTypeNamesToTileDefs["Grass"] = 80; // replace previous 
// 
// // the map will be stored in order of the key value from small to large
// // good for finding centain item
// for (std::map<int, int>::iterator iter = mapOfIntKeysToIntValues.begin(); iter != mapOfIntKeysToIntValues.end(); ++iter)
// {
// 	int key = iter->first;
// 	int value = iter->second;
// }
// 
// std::map<int, int>::iterator found = mapOfIntKeysToIntValues.find(205);
// // found->first;
// // found->second;
// if (found == testMap.end())
// {
// 	// this means the found could find the key you are looking for
// }
// 
// mapOfIntKeysToIntValues.size();// could not use capacity or resize because it is not an array
// 
// float playerTurnRate = g_gameConfigBlackboard.GetValue("playerTurnRate", 180.f); // the 180.f is for input the the variable type of the playerTurnRate found