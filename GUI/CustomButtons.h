/*
  ==============================================================================

    CustomButtons.h
    Created: 15 Sep 2022 9:37:25pm
    Author:  COLA6

  ==============================================================================
*/

#pragma once

#include<JuceHeader.h>

struct PowerButton : juce::ToggleButton { };

struct AnalyzerButton : juce::ToggleButton
{
    void resized() override;

    juce::Path randomPath;
};