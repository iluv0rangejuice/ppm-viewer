#pragma once
#ifndef REMOVE_BLUE_EFFECT_HPP
#define REMOCE_BLUE_EFFECT_HPP


#include "PpmDocument.hpp"
#include "ImageEffect.hpp"
class RemoveBlueEffect : public ImageEffect
{
public:
	virtual void applyEffect(PpmDocument& doc)
	{
		for (int i = 0; i < doc.getHeight(); i++)
		{
			for (int j = 0; j < doc.getWidth(); j++)
			{
				Pixel& p = doc[i][j];
				//Setting blue to 0
                                p.blue = 0;

				//not necessary as we're using references but it makes our intent more clear
				doc[i][j] = p;
			}
		}
	}
};
#endif //!REMOVE_BLUE_EFFECT
