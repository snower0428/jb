//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIColor;

@interface GADSearchRequest : NSObject
{
    NSString *query;
    UIColor *backgroundColor;
    UIColor *gradientFrom;
    UIColor *gradientTo;
    UIColor *headerColor;
    UIColor *descriptionTextColor;
    UIColor *anchorTextColor;
    NSString *fontFamily;
    int headerTextSize;
    UIColor *borderColor;
    int borderType;
    int borderThickness;
    NSString *customChannels;
    int callButtonColor;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)alloc;
@property(nonatomic) int callButtonColor; // @synthesize callButtonColor;
@property(copy, nonatomic) NSString *customChannels; // @synthesize customChannels;
@property(nonatomic) int borderThickness; // @synthesize borderThickness;
@property(nonatomic) int borderType; // @synthesize borderType;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor;
@property(nonatomic) int headerTextSize; // @synthesize headerTextSize;
@property(copy, nonatomic) NSString *fontFamily; // @synthesize fontFamily;
@property(retain, nonatomic) UIColor *anchorTextColor; // @synthesize anchorTextColor;
@property(retain, nonatomic) UIColor *descriptionTextColor; // @synthesize descriptionTextColor;
@property(retain, nonatomic) UIColor *headerColor; // @synthesize headerColor;
@property(readonly, nonatomic) UIColor *gradientTo; // @synthesize gradientTo;
@property(readonly, nonatomic) UIColor *gradientFrom; // @synthesize gradientFrom;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor;
@property(copy, nonatomic) NSString *query; // @synthesize query;
- (void)setBackgroundGradientFrom:(id)arg1 toColor:(id)arg2;
- (void)setBackgroundSolid:(id)arg1;
- (id)request;
- (id)getCallButtonTypeString:(int)arg1;
- (id)getBorderTypeString:(int)arg1;
- (id)hexStringFromColor:(id)arg1;

@end

