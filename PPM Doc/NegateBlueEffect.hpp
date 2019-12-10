#pragma once
#ifndef NEGATE_BLUE_EFFECT_HPP
#define NEGATE_BLUE_EFFECT_HPP

#include "PpmDocument.hpp"
#include "ImageEffect.hpp"
class NegateBlueEffect : public ImageEffect
{
public:
	virtual void applyEffect(PpmDocument& doc)
	{
		for (int i = 0; i < doc.getHeight(); i++)
		{
			for (int j = 0; j < doc.getWidth(); j++)
			{
				Pixel& p = doc[i][j];
				//minus 255 from blue
                                p.blue -= 255;

				//not necessary as we're using references but it makes our intent more clear
				doc[i][j] = p;
			}
		}
	}
};
#endif //!NEGATE_BLUE_EFFECT_HPP
