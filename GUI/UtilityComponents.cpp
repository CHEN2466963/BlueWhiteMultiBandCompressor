/*
  ==============================================================================

    UtilityComponents.cpp
    Created: 15 Sep 2022 9:43:18pm
    Author:  COLA6

  ==============================================================================
*/

#include "UtilityComponents.h"

//==============================================================================
Placeholder::Placeholder()
{
    juce::Random r;
    customColor = juce::Colour(r.nextInt(225), r.nextInt(225), r.nextInt(225));
}
void Placeholder::paint(juce::Graphics& g) 
{
    g.fillAll(customColor);
}
RotarySlider::RotarySlider() :
    juce::Slider(juce::Slider::SliderStyle::RotaryHorizontalVerticalDrag,
        juce::Slider::TextEntryBoxPosition::NoTextBox)
{}