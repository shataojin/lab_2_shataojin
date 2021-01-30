#pragma once
#ifndef __FACE__
#define __FACE__
#include "DisplayObject.h"

class Face final : public DisplayObject
{
public:
	// constructors
	Face();

	// destructor
	~Face();

	// life cycle functions
	void draw() override;
	void update() override;
	void clean() override;
private:

};

#endif /* defined (__OBSTACLE__) */