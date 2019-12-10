#pragma once
#ifndef HIGH_CONTRAST_HPP
#define HIGH_CONTRAST_HPP

#include "PpmDocument.hpp"
#include "ImageEffect.hpp"
class HighContrast : public ImageEffect
{
public:
	virtual void applyEffect(PpmDocument& doc)
	{
		for (int i = 0; i < doc.getHeight(); i++)
		{
			for (int j = 0; j < doc.getWidth(); j++)
			{
                                Pixel& p = doc[i][j];
                                //if the value of RGB is greater than 127, set to 255
                                //otherwise set to 0
                                if (p.red > 127)
                                {
                                    p.red = 255;
                                }
                                else if (p.red < 127)
                                {
                                    p.red = 0;
                                }
                                else if (p.green > 127)
                                {
                                    p.green = 255;
                                }
                                else if (p.green < 127)
                                {
                                    p.green = 0;
                                }
                                else if (p.blue > 127)
                                {
                                    p.blue = 255;
                                }
                                else if (p.blue < 127)
                                {
                                    p.blue = 0;
                                }

                                //not necessary as we're using references but it makes our intent more clear
                                doc[i][j] = p;
			}
		}
	}
};
#endif //!HIGH_CONTRAST_HPP