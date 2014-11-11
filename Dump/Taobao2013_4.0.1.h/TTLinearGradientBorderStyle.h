//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTStyle.h"

@class UIColor;

@interface TTLinearGradientBorderStyle : TTStyle
{
    UIColor *_color1;
    UIColor *_color2;
    float _location1;
    float _location2;
    float _width;
}

+ (id)styleWithColor1:(id)arg1 location1:(float)arg2 color2:(id)arg3 location2:(float)arg4 width:(float)arg5 next:(id)arg6;
+ (id)styleWithColor1:(id)arg1 color2:(id)arg2 width:(float)arg3 next:(id)arg4;
@property(nonatomic) float width; // @synthesize width=_width;
@property(nonatomic) float location2; // @synthesize location2=_location2;
@property(nonatomic) float location1; // @synthesize location1=_location1;
@property(retain, nonatomic) UIColor *color2; // @synthesize color2=_color2;
@property(retain, nonatomic) UIColor *color1; // @synthesize color1=_color1;
- (void)draw:(id)arg1;
- (void)dealloc;
- (id)initWithNext:(id)arg1;

@end
