#pragma once
#ifndef GRAYSCALE_HPP
#define GRAYSCALE_HPP

#include "PpmDocument.hpp"
#include "ImageEffect.hpp"
class GrayscaleEffect : public ImageEffect
{
public:
    int sum;
	virtual void applyEffect(PpmDocument& doc)
	{
		for (int i = 0; i < doc.getHeight(); i++)
		{
			for (int j = 0; j < doc.getWidth(); j++)
			{
				Pixel& p = doc[i][j];
				//averaging RGB 
                                sum = (p.red + p.green + p.blue); 
                                sum/= 3;

				//not necessary as we're using references but it makes our intent more clear
				doc[i][j] = p;
			}
		}
	}
};
#endif //!GRAYSCALE_HPP