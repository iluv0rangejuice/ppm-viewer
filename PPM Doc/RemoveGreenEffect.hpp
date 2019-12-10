#pragma once
#ifndef REMOVE_GREEN_EFFECT_HPP
#define REMOVE_GREEN_EFFECT_HPP

#include "PpmDocument.hpp"
#include "ImageEffect.hpp"
class RemoveGreenEffect : public ImageEffect
{
public:
	virtual void applyEffect(PpmDocument& doc)
	{
		for (int i = 0; i < doc.getHeight(); i++)
		{
			for (int j = 0; j < doc.getWidth(); j++)
			{
				Pixel& p = doc[i][j];
				//Setting green to 0
                                p.green = 0;

				//not necessary as we're using references but it makes our intent more clear
				doc[i][j] = p;
			}
		}
	}
};
#endif //!REMOVE_GREEN_EFFECT_HPP
