//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class NSArray, NSString, UIColor, UIFont;

__attribute__((visibility("hidden")))
@interface AKTab : UIButton
{
    BOOL isTabIconPresent;
    BOOL _tabIconPreRendered;
    BOOL _glossyIsHidden;
    BOOL _titleIsHidden;
    NSString *_tabImageWithName;
    NSString *_activeImageWithName;
    NSString *_backgroundImageName;
    NSString *_selectedBackgroundImageName;
    UIColor *_textColor;
    UIColor *_selectedTextColor;
    NSString *_tabTitle;
    UIFont *_tabTitleFont;
    NSArray *_tabIconColors;
    NSArray *_tabIconColorsSelected;
    UIColor *_tabIconOuterGlowColorSelected;
    UIColor *_tabIconShadowColor;
    NSArray *_tabSelectedColors;
    UIColor *_strokeColor;
    UIColor *_innerStrokeColor;
    UIColor *_edgeColor;
    UIColor *_topEdgeColor;
    float _tabBarHeight;
    float _minimumHeightToDisplayTitle;
    struct CGSize _tabIconShadowOffset;
    struct UIEdgeInsets _backgroundImageCapInsets;
}

@property(nonatomic) BOOL titleIsHidden; // @synthesize titleIsHidden=_titleIsHidden;
@property(nonatomic) float minimumHeightToDisplayTitle; // @synthesize minimumHeightToDisplayTitle=_minimumHeightToDisplayTitle;
@property(nonatomic) float tabBarHeight; // @synthesize tabBarHeight=_tabBarHeight;
@property(retain, nonatomic) UIColor *topEdgeColor; // @synthesize topEdgeColor=_topEdgeColor;
@property(retain, nonatomic) UIColor *edgeColor; // @synthesize edgeColor=_edgeColor;
@property(retain, nonatomic) UIColor *innerStrokeColor; // @synthesize innerStrokeColor=_innerStrokeColor;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(nonatomic) BOOL glossyIsHidden; // @synthesize glossyIsHidden=_glossyIsHidden;
@property(nonatomic) BOOL tabIconPreRendered; // @synthesize tabIconPreRendered=_tabIconPreRendered;
@property(retain, nonatomic) NSArray *tabSelectedColors; // @synthesize tabSelectedColors=_tabSelectedColors;
@property(nonatomic) struct CGSize tabIconShadowOffset; // @synthesize tabIconShadowOffset=_tabIconShadowOffset;
@property(retain, nonatomic) UIColor *tabIconShadowColor; // @synthesize tabIconShadowColor=_tabIconShadowColor;
@property(retain, nonatomic) UIColor *tabIconOuterGlowColorSelected; // @synthesize tabIconOuterGlowColorSelected=_tabIconOuterGlowColorSelected;
@property(retain, nonatomic) NSArray *tabIconColorsSelected; // @synthesize tabIconColorsSelected=_tabIconColorsSelected;
@property(retain, nonatomic) NSArray *tabIconColors; // @synthesize tabIconColors=_tabIconColors;
@property(retain, nonatomic) UIFont *tabTitleFont; // @synthesize tabTitleFont=_tabTitleFont;
@property(retain, nonatomic) NSString *tabTitle; // @synthesize tabTitle=_tabTitle;
@property(retain, nonatomic) UIColor *selectedTextColor; // @synthesize selectedTextColor=_selectedTextColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) struct UIEdgeInsets backgroundImageCapInsets; // @synthesize backgroundImageCapInsets=_backgroundImageCapInsets;
@property(retain, nonatomic) NSString *selectedBackgroundImageName; // @synthesize selectedBackgroundImageName=_selectedBackgroundImageName;
@property(retain, nonatomic) NSString *backgroundImageName; // @synthesize backgroundImageName=_backgroundImageName;
@property(retain, nonatomic) NSString *activeImageWithName; // @synthesize activeImageWithName=_activeImageWithName;
@property(retain, nonatomic) NSString *tabImageWithName; // @synthesize tabImageWithName=_tabImageWithName;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawBackground:(struct CGContext *)arg1 inRect:(struct CGRect)arg2;
- (void)animateContentWithDuration:(double)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)init;

@end

