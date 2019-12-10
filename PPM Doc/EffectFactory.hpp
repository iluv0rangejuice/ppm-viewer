#pragma once
#ifndef EFFECT_FACTORY_HPP
#define EFFECT_FACTORY_HPP

#include "RemoveRedEffect.hpp"
#include "RemoveGreenEffect.hpp"
#include "RemoveBlueEffect.hpp"
#include "NegateRedEffect.hpp"
#include "NegateGreenEffect.hpp"
#include "NegateBlueEffect.hpp"
#include "GrayscaleEffect.hpp"
#include "RandomNoiseEffect.hpp"
#include "HighContrastEffect.hpp"
#include "EffectFactory.hpp"

enum class ImageEffectType
{
	RemoveRed = 1,
	RemoveGreen = 2,
	RemoveBlue = 3,
        NegateRed = 4,
        NegateGreen = 5,
        NegateBlue = 6,
        Grayscale = 7,
        RandomNoise = 8,
        HighContrast = 9,       
};

class EffectFactory
{
public:
	static ImageEffect* createEffect(ImageEffectType effect_type)
	{
		switch (effect_type)
		{
		case ImageEffectType::RemoveRed:
			return new RemoveRedEffect{};
			break;

		default: 
			break;
		}
		switch (effect_type)
		{
		case ImageEffectType::RemoveGreen:
			return new RemoveGreenEffect{};
			break;

		default: 
			break;
		}
		switch (effect_type)
		{
		case ImageEffectType::RemoveBlue:
			return new RemoveBlueEffect{};
			break;

		default: 
			break;
		}
                switch (effect_type)
		{
		case ImageEffectType::NegateRed:
			return new NegateRedEffect{};
			break;

		default: 
			break;
		}
                switch (effect_type)
		{
		case ImageEffectType::NegateGreen:
			return new NegateGreenEffect{};
			break;

		default: 
			break;
		}
                switch (effect_type)
		{
		case ImageEffectType::NegateBlue:
			return new NegateBlueEffect{};
			break;

		default: 
			break;
		}
                switch (effect_type)
		switch (effect_type)
		{
		case ImageEffectType::NegateBlue:
			return new NegateBlueEffect{};
			break;

		default: 
			break;
		}
                switch (effect_type)
		{
		case ImageEffectType::Grayscale:
			return new GrayscaleEffect{};
			break;

		default: 
			break;
		}
                switch (effect_type)
		{
		case ImageEffectType::RandomNoise:
			return new RandomNoiseEffect{};
			break;

		default: 
			break;
		}
                switch (effect_type)
		{
		case ImageEffectType::HighContrast:
			return new HighContrastEffect{};
			break;

		default: 
			break;
		}
                
	}
};
#endif //!EFFECT_FACTORY_HPP