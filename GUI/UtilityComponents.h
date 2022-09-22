/*
  ==============================================================================

    UtilityComponents.h
    Created: 15 Sep 2022 9:43:18pm
    Author:  COLA6

  ==============================================================================
*/

#pragma once

#include<JuceHeader.h>

struct Placeholder : juce::Component
{
    Placeholder();

    void paint(juce::Graphics& g) override;
    juce::Colour customColor;
};

struct RotarySlider : juce::Slider
{
    RotarySlider();

};
