//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBSNSBasicListCellProxy.h"

@class UIColor;

@interface TBSNSRecommendAccountCellProxy : TBSNSBasicListCellProxy
{
    UIColor *_colorTitleColor;
    UIColor *_colorCellBackground;
}

+ (id)cellProxy;
@property(retain, nonatomic) UIColor *colorCellBackground; // @synthesize colorCellBackground=_colorCellBackground;
@property(retain, nonatomic) UIColor *colorTitleColor; // @synthesize colorTitleColor=_colorTitleColor;
- (void).cxx_destruct;
- (CDUnknownBlockType)getCellHeightProxy;
- (CDUnknownBlockType)getCellReuseIdProxy;
- (CDUnknownBlockType)getCellRefreshProxy;
- (CDUnknownBlockType)getCellDrawProxy;
- (float)getCellHeight;
- (id)init;

@end

