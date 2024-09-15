#include "Game/UIElement.hpp"
#include "Engine/Math/RandomNumberGenerator.hpp"

extern RandomNumberGenerator* g_rng;

UIElement::UIElement(Game* owner, Vec2 const& startPos)
{
	m_game = owner;
	m_position = startPos;
}

UIElement::~UIElement()
{
}

Vec2 UIElement::GetForwardNormal() const
{
	return Vec2(0.f, 0.f);
}

