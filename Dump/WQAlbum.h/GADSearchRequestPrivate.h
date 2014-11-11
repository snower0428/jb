//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GADSearchRequest.h"

@class NSString, UIColor;

@interface GADSearchRequestPrivate : GADSearchRequest
{
    NSString *query_;
    UIColor *backgroundColor_;
    UIColor *gradientFrom_;
    UIColor *gradientTo_;
    UIColor *headerColor_;
    UIColor *descriptionTextColor_;
    UIColor *anchorTextColor_;
    NSString *fontFamily_;
    int headerTextSize_;
    UIColor *borderColor_;
    int borderType_;
    int borderThickness_;
    NSString *channels_;
    int callButtonColor_;
}

- (void)setCallButtonColor:(int)arg1;
- (int)callButtonColor;
- (void)setCustomChannels:(id)arg1;
- (id)customChannels;
- (void)setBorderThickness:(int)arg1;
- (int)borderThickness;
- (void)setBorderType:(int)arg1;
- (int)borderType;
- (void)setBorderColor:(id)arg1;
- (id)borderColor;
- (void)setHeaderTextSize:(int)arg1;
- (int)headerTextSize;
- (void)setFontFamily:(id)arg1;
- (id)fontFamily;
- (void)setAnchorTextColor:(id)arg1;
- (id)anchorTextColor;
- (void)setDescriptionTextColor:(id)arg1;
- (id)descriptionTextColor;
- (void)setHeaderColor:(id)arg1;
- (id)headerColor;
- (id)gradientTo;
- (id)gradientFrom;
- (id)backgroundColor;
- (void)setQuery:(id)arg1;
- (id)query;
- (void)dealloc;
- (void)setBackgroundGradientFrom:(id)arg1 toColor:(id)arg2;
- (void)setBackgroundSolid:(id)arg1;

@end

