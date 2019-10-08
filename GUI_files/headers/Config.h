// This is a config file for all the constant values

#ifndef CONFIG_H
#define CONFIG_H

const int windowHeight = 1.5*480;
const int windowWidth = 1.5*640;

const int defaultTextureWidth = 100;
const int defaultTextureHeight = 100;

enum geometryPosition
{
	CENTER_X = 10000,
	CENTER_Y,
	TOP,
	BOTTOM,
	LEFT,
	RIGHT,
	WIDTH_ORIGINAL,
	HEIGHT_ORIGINAL
};

#endif