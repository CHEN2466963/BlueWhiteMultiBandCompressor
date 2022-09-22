/*
  ==============================================================================

    GlobalControls.h
    Created: 15 Sep 2022 10:01:52pm
    Author:  COLA6

  ==============================================================================
*/

#pragma once

#include<JuceHeader.h>

#include "RotarySliderWithLables.h"



struct GlobalControls : juce::Component
{
    GlobalControls(juce::AudioProcessorValueTreeState& apvts);

    void paint(juce::Graphics& g) override;

    void resized() override;
private:

    using RSWL = RotarySliderWithLabels;
    std::unique_ptr<RSWL> inGainSlider, lowMidXoverSlider, midHighXoverSlider, outGainSlider;

    using Attachment = juce::AudioProcessorValueTreeState::SliderAttachment;
    std::unique_ptr<Attachment>  lowMidXoverSliderAttachment,
        midHighXoverSliderAttachment,
        inGainSliderAttachment,
        outGainSliderAttachment;

};
