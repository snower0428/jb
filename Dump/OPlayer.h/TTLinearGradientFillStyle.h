//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTStyle.h"

@class UIColor;

@interface TTLinearGradientFillStyle : TTStyle
{
    UIColor *_color1;
    UIColor *_color2;
}

+ (id)styleWithColor1:(id)arg1 color2:(id)arg2 next:(id)arg3;
@property(retain, nonatomic) UIColor *color2; // @synthesize color2=_color2;
@property(retain, nonatomic) UIColor *color1; // @synthesize color1=_color1;
- (void)draw:(id)arg1;
- (void)dealloc;

@end

