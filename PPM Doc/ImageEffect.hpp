#pragma once
#ifndef IMAGE_EFFECT_HPP
#define IMAGE_EFFECT_HPP

#include "PpmDocument.hpp"
class ImageEffect
{
public:
	virtual void applyEffect(PpmDocument& doc) = 0;
};
#endif //!IMAGE_EFFECT_HPP