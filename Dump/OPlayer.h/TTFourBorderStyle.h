//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTStyle.h"

@class UIColor;

@interface TTFourBorderStyle : TTStyle
{
    UIColor *_top;
    UIColor *_right;
    UIColor *_bottom;
    UIColor *_left;
    float _width;
}

+ (id)styleWithLeft:(id)arg1 width:(float)arg2 next:(id)arg3;
+ (id)styleWithBottom:(id)arg1 width:(float)arg2 next:(id)arg3;
+ (id)styleWithRight:(id)arg1 width:(float)arg2 next:(id)arg3;
+ (id)styleWithTop:(id)arg1 width:(float)arg2 next:(id)arg3;
+ (id)styleWithTop:(id)arg1 right:(id)arg2 bottom:(id)arg3 left:(id)arg4 width:(float)arg5 next:(id)arg6;
@property(nonatomic) float width; // @synthesize width=_width;
@property(retain, nonatomic) UIColor *left; // @synthesize left=_left;
@property(retain, nonatomic) UIColor *bottom; // @synthesize bottom=_bottom;
@property(retain, nonatomic) UIColor *right; // @synthesize right=_right;
@property(retain, nonatomic) UIColor *top; // @synthesize top=_top;
- (void)draw:(id)arg1;
- (void)dealloc;
- (id)initWithNext:(id)arg1;

@end

