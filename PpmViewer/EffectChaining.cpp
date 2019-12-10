#pragma once
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
                            cout << "Effect Chaining\n*** Image Effects***\n"
                                    "1. Remove Red\n"
                                    "2. Remove Blue\n"
                                    "3. Remove Green\n"
                                    "4. Negate Red\n"
                                    "5. Negate Blue\n"
                                    "6. Negate Green\n"
                                    "7. Grayscale\n"
                                    "8. Add noise\n"
                                    "9. High contrast\n"
                                    "10. Quit\n"
                                    "---------------------"
                                    "enter a number"
                                
				//not necessary as we're using references but it makes our intent more clear
				doc[i][j] = p;
			}
		}
	}
};

