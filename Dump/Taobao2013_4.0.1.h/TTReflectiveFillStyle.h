//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTStyle.h"

@class UIColor;

@interface TTReflectiveFillStyle : TTStyle
{
    UIColor *_color;
    BOOL _withBottomHighlight;
}

+ (id)styleWithColor:(id)arg1 withBottomHighlight:(BOOL)arg2 next:(id)arg3;
+ (id)styleWithColor:(id)arg1 next:(id)arg2;
@property(nonatomic) BOOL withBottomHighlight; // @synthesize withBottomHighlight=_withBottomHighlight;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (void)draw:(id)arg1;
- (void)dealloc;

@end

