//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BeautyBaseViewController.h"

@class ColorMixingTool, MTSlider, UIButton, UIImageView, UIView;

__attribute__((visibility("hidden")))
@interface ColorMixingViewController : BeautyBaseViewController
{
    float _fBrightness;
    float _fContrast;
    float _fSaturation;
    float _fExpourceLight;
    ColorMixingTool *_colorTool;
    UIImageView *_imageView;
    UIButton *_tabButton;
    UIView *_colorView;
    UIView *_expourceView;
    MTSlider *_brightnessSlider;
    MTSlider *_contrastSlider;
    MTSlider *_saturateconstSliderSlider;
    MTSlider *_expourceSlider;
}

@property(nonatomic) __weak MTSlider *expourceSlider; // @synthesize expourceSlider=_expourceSlider;
@property(nonatomic) __weak MTSlider *saturateconstSliderSlider; // @synthesize saturateconstSliderSlider=_saturateconstSliderSlider;
@property(nonatomic) __weak MTSlider *contrastSlider; // @synthesize contrastSlider=_contrastSlider;
@property(nonatomic) __weak MTSlider *brightnessSlider; // @synthesize brightnessSlider=_brightnessSlider;
@property(nonatomic) __weak UIView *expourceView; // @synthesize expourceView=_expourceView;
@property(nonatomic) __weak UIView *colorView; // @synthesize colorView=_colorView;
@property(nonatomic) __weak UIButton *tabButton; // @synthesize tabButton=_tabButton;
@property(nonatomic) __weak UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)actionDone:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)expourceMode:(id)arg1;
- (void)colorMode:(id)arg1;
- (void)expourceSliderChanged:(id)arg1;
- (void)saturateconstSliderChanged:(id)arg1;
- (void)contrastSliderChanged:(id)arg1;
- (void)brightnessSliderChanged:(id)arg1;
- (void)colorMixing;
- (void)actionBack:(id)arg1;
- (void)viewDidLoad;

@end
