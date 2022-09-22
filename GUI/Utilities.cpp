/*
  ==============================================================================

    Utilities.cpp
    Created: 15 Sep 2022 9:48:48pm
    Author:  COLA6

  ==============================================================================
*/

#include "Utilities.h"

#include "LookAndFeel.h"

juce::String getValString(const juce::RangedAudioParameter& param,
    bool getLow,
    juce::String suffix)
{
    juce::String str;

    auto val = getLow ? param.getNormalisableRange().start :
        param.getNormalisableRange().end;

    bool useK = truncateKiloValue(val);
    str << val;

    if (useK)
        str << "K";

    str << suffix;

    return str;
}

juce::Rectangle<int> drawModuelBackground(juce::Graphics& g,
    juce::Rectangle<int> bounds)
{
    using namespace juce;
    g.setColour(ColorScheme::getModuleBorderColor());
    g.fillAll();

    auto localBounds = bounds;

    bounds.reduce(3, 3);
    g.setColour(Colour(0xffe8f4f7));
    g.fillRoundedRectangle(bounds.toFloat(), 3);

    g.drawRect(localBounds);

    return bounds;
}