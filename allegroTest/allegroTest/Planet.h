#ifndef PLANET_H
#define PLANET_H

#include "Header.h"

class Planet {
private:
	int m_x,
		m_y,
		m_height,
		m_width,
		m_color1,
		m_color2,
		m_color3,
		m_planetScale;
	double m_distance;
	bool m_canCollide,
		m_canDock;
	std::string m_planetSprite;

public:
	Planet();
	Planet(std::string planetSprite);
	Planet(std::string planetSprite, int distance);
	int getX();
	int getY();
	int getPlanetScale();
	int getColor1();
	int getColor2();
	int getColor3();
	int getWidth();
	int getHeight();
	bool getCanDock();
	std::string getPlanetSprite();
	void setPlanetSize(int planetWidth, int planetHeight);
	~Planet();
};

#endif