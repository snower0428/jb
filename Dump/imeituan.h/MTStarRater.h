//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class NSMutableArray, NSString;

@interface MTStarRater : UIControl
{
    NSMutableArray *_starSubLayers;
    BOOL _enableHalfStar;
    float _rating;
    float _halfStarThreshold;
    float _fullStarThreshold;
    float _touchOffset;
    NSString *_highlightFullStar;
    NSString *_normalFullStar;
    NSString *_halfStar;
    unsigned int _starNumber;
}

@property(readonly, nonatomic) unsigned int starNumber; // @synthesize starNumber=_starNumber;
@property(retain, nonatomic) NSString *halfStar; // @synthesize halfStar=_halfStar;
@property(retain, nonatomic) NSString *normalFullStar; // @synthesize normalFullStar=_normalFullStar;
@property(retain, nonatomic) NSString *highlightFullStar; // @synthesize highlightFullStar=_highlightFullStar;
@property(nonatomic) float touchOffset; // @synthesize touchOffset=_touchOffset;
@property(nonatomic) float fullStarThreshold; // @synthesize fullStarThreshold=_fullStarThreshold;
@property(nonatomic) float halfStarThreshold; // @synthesize halfStarThreshold=_halfStarThreshold;
@property(nonatomic) BOOL enableHalfStar; // @synthesize enableHalfStar=_enableHalfStar;
@property(nonatomic) float rating; // @synthesize rating=_rating;
- (void).cxx_destruct;
- (void)_updateStarUI;
- (float)_translateRating:(float)arg1;
- (void)_setRating:(float)arg1;
- (void)_handlerTouchPoint:(struct CGPoint)arg1;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 starNumber:(unsigned int)arg2;

@end

