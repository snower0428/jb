//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "WindCurveViewDataSource.h"

@class WindCurveView;

__attribute__((visibility("hidden")))
@interface WeatherForecastWindView : UIView <WindCurveViewDataSource>
{
    WindCurveView *windCurveView;
    id <WeatherForecastWindViewDataSource> delegate;
}

@property(nonatomic) id <WeatherForecastWindViewDataSource> delegate; // @synthesize delegate;
- (BOOL)isCityInNightForCurveView;
- (BOOL)showTemperatureLabels;
- (BOOL)showBackgroundTopAndBottomLines;
- (BOOL)isCityInForeign;
- (id)windForecastsForCurveView:(id)arg1;
- (id)curvePoForCurveView:(id)arg1;
- (void)drawLable:(id)arg1:(id)arg2:(struct CGPoint)arg3;
- (void)draw_WindDirInfo;
- (void)draw_DateInfo;
- (void)draw_Title;
- (void)dealloc;
- (void)setNeedsDisplay;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
