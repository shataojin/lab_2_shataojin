#include "face.h"


#include "SoundManager.h"
#include "TextureManager.h"

Face::Face()
{
	TextureManager::Instance()->load("../Assets/textures/face.png", "face");

	auto size = TextureManager::Instance()->getTextureSize("face");
	setWidth(size.x);
	setHeight(size.y);

	getTransform()->position = glm::vec2(300.0f, 300.0f);

	setType(FACE);
	getRigidBody()->isColliding = false;

	SoundManager::Instance().load("../Assets/audio/yay.ogg", "yay", SOUND_SFX);
}

Face::~Face()
= default;

void Face::draw()
{
	TextureManager::Instance()->draw("face",
		getTransform()->position.x, getTransform()->position.y, 0, 300, true);
}

void Face::update()
{
}

void Face::clean()
{
}
