#pragma once
#ifndef RANDOM_NOISE_HPP
#define RANDOM_NOISE_HPP

#include "PpmDocument.hpp"
#include "ImageEffect.hpp"
class RandomNoise : public ImageEffect
{
public:
	virtual void applyEffect(PpmDocument& doc)
	{
		for (int i = 0; i < doc.getHeight(); i++)
		{
			for (int j = 0; j < doc.getWidth(); j++)
			{
				Pixel& p = doc[i][j];
                                //if the value of RGB is less than or equal to 255
                                //then add random number from -10 to 10
                                if (p.red <= 255)
                                {
                                    p.red += rand() % 20 - 10;
                                }
                                if (p.red < 0)
                                {
                                    p.red = 0;
                                }
                                if (p.green <= 255)
                                {
                                    p.green += rand() % -10 + 10;
                                }
                                if (p.green < 0)
                                {
                                    p.green = 0;
                                }
                                if (p.blue <= 255)
                                {
                                    p.blue += rand() % -10 + 10;
                                }
                                if (p.blue < 0)
                                {
                                    p.blue = 0;
                                }
				//not necessary as we're using references but it makes our intent more clear
				doc[i][j] = p;
			}
		}
	}
};
#endif //!RANDOM_NOISE_HPP