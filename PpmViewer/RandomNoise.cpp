#pragma once
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
                                //if the value of RGB is greater than 127, set to 255
                                //otherwise set to 0
                                if (p.red <= 255)
                                {
                                    p.red += rand() % -10 + 10;
                                }
                                else if (p.green > 127)
                                {
                                    p.green += rand() % -10 + 10;
                                }
                                else if (p.blue > 127)
                                {
                                    p.blue += rand() % -10 + 10;
                                }
                                else
                                    cout << "Error in Random Noise" << endl;
                                
				//not necessary as we're using references but it makes our intent more clear
				doc[i][j] = p;
			}
		}
	}
};