//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface customHud : UIView
{
    float roundViewHeight;
    UIView *_backView;
    UIView *_whiteHudView;
    UIView *_roundView;
    UIView *_shallowView;
    float _minValue;
    float _maxValue;
    float _hudValue;
    id <CustomHudDelegate> _delegate;
}

@property(nonatomic) id <CustomHudDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) float hudValue; // @synthesize hudValue=_hudValue;
@property(nonatomic) float maxValue; // @synthesize maxValue=_maxValue;
@property(nonatomic) float minValue; // @synthesize minValue=_minValue;
@property(retain, nonatomic) UIView *shallowView; // @synthesize shallowView=_shallowView;
@property(retain, nonatomic) UIView *roundView; // @synthesize roundView=_roundView;
@property(retain, nonatomic) UIView *whiteHudView; // @synthesize whiteHudView=_whiteHudView;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
- (void)handlePan:(id)arg1;
- (void)downButtonPressed:(id)arg1;
- (void)upButtonPressed:(id)arg1;
- (float)deltaHeightToDeltaValue:(float)arg1;
- (float)valueToHeight:(float)arg1;
- (float)heightToValue:(float)arg1;
- (void)changeToValue:(float)arg1 shouldNotifDelegate:(BOOL)arg2;
- (void)toSetMinValue:(float)arg1 andMax:(float)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
