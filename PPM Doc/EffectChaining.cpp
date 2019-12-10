#pragma once
#ifndef EFFECT_CHAINING_HPP
#define EFFECT_CHAINING_HPP

#include "PpmDocument.hpp"
#include "ImageEffect.hpp"
class EffectChaining : public ImageEffect
{
public:
	virtual void applyEffect(PpmDocument& doc)
	{
		for (int i = 0; i < doc.getHeight(); i++)
		{
			for (int j = 0; j < doc.getWidth(); j++)
			{
				Pixel& p = doc[i][j];
                                

				//not necessary as we're using references but it makes our intent more clear
				doc[i][j] = p;
			}
		}
	}
};
#endif //!EFFECT_CHAINING_HPP
