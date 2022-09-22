/*
  ==============================================================================

    LookAndFeel.h
    Created: 15 Sep 2022 9:08:59pm
    Author:  COLA6

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "../DSP/Params.h"
#include "Utilities.h"

#define USE_LIVE_CONSTANT flase

#if USE_LIVE_CONSTANT
#define colorHelper(c) JUCE_LIVE_CONSTANT(c);
#else
#define colorHelper(c) c;
#endif

namespace ColorScheme
{
    inline juce::Colour getSliderBorderColor()
    {
        return colorHelper(juce::Colour(0xff3acede));
    }
    inline juce::Colour getModuleBorderColor()
    {
        return colorHelper(juce::Colour(0xffa2eeff));
    }
}

struct LookAndFeel : juce::LookAndFeel_V4
{
    void drawRotarySlider(juce::Graphics&,
        int x, int y, int width, int height,
        float sliderPosProportional,
        float rotaryStartAngle,
        float rotaryEndAngle,
        juce::Slider&) override;

    void drawToggleButton(juce::Graphics& g,
        juce::ToggleButton& toggleButton,
        bool shouldDrawButtonAsHighlighted,
        bool shouldDrawButtonAsDown) override;
};