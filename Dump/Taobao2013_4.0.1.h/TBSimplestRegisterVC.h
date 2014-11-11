//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBViewController.h"

#import "UIGestureRecognizerDelegate.h"

@class UIFont;

__attribute__((visibility("hidden")))
@interface TBSimplestRegisterVC : TBViewController <UIGestureRecognizerDelegate>
{
    float _startPoint;
    float _gapYLarge;
    float _gapYSmall;
    float _gapX;
    UIFont *_primaryTextFont;
    UIFont *_auxiliaryTextFont;
}

@property(retain, nonatomic) UIFont *auxiliaryTextFont; // @synthesize auxiliaryTextFont=_auxiliaryTextFont;
@property(retain, nonatomic) UIFont *primaryTextFont; // @synthesize primaryTextFont=_primaryTextFont;
@property(nonatomic) float gapX; // @synthesize gapX=_gapX;
@property(nonatomic) float gapYSmall; // @synthesize gapYSmall=_gapYSmall;
@property(nonatomic) float gapYLarge; // @synthesize gapYLarge=_gapYLarge;
@property(nonatomic) float startPoint; // @synthesize startPoint=_startPoint;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)handleSingleTapAtRootView;
- (void)setNavigationBarWithLeftItemName:(id)arg1 CenterItemName:(id)arg2 moreItemName:(id)arg3 moreItemTarget:(id)arg4 selector:(SEL)arg5;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
