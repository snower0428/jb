//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, UIImageView;

@interface IGCameraBar : UIView
{
    UIImageView *_backgroundImageView;
    NSMutableArray *_barViews;
}

@property(readonly, nonatomic) NSMutableArray *barViews; // @synthesize barViews=_barViews;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
- (void).cxx_destruct;
- (void)setIsTranslucent:(BOOL)arg1;
- (void)popViewAnimated:(BOOL)arg1;
- (void)pushView:(id)arg1 animated:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
