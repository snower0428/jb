//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBSNSBasicListCellProxy.h"

@class UIColor, UIFont, UIImage;

@interface TBSNSFeedItemCellProxy : TBSNSBasicListCellProxy
{
    UIColor *_colorCellBackground;
    UIColor *_colorGrayLine;
    UIFont *_fontFeedInfo;
    UIColor *_colorFeedInfo;
    UIFont *_fontFeedTime;
    UIColor *_colorFeedTime;
    UIFont *_fontWellchosenDesc;
    UIColor *_colorWellchosenDesc;
    UIFont *_fontBottomButton;
    UIColor *_colorBottomButton;
    UIColor *_colorPraiseButtonHighlight;
    UIImage *_feedPraiseIcon;
    UIImage *_feedUnpraiseIcon;
    UIImage *_feedCommentIcon;
    UIImage *_feedShareIcon;
}

+ (id)cellProxy;
@property(retain, nonatomic) UIImage *feedShareIcon; // @synthesize feedShareIcon=_feedShareIcon;
@property(retain, nonatomic) UIImage *feedCommentIcon; // @synthesize feedCommentIcon=_feedCommentIcon;
@property(retain, nonatomic) UIImage *feedUnpraiseIcon; // @synthesize feedUnpraiseIcon=_feedUnpraiseIcon;
@property(retain, nonatomic) UIImage *feedPraiseIcon; // @synthesize feedPraiseIcon=_feedPraiseIcon;
@property(retain, nonatomic) UIColor *colorPraiseButtonHighlight; // @synthesize colorPraiseButtonHighlight=_colorPraiseButtonHighlight;
@property(retain, nonatomic) UIColor *colorBottomButton; // @synthesize colorBottomButton=_colorBottomButton;
@property(retain, nonatomic) UIFont *fontBottomButton; // @synthesize fontBottomButton=_fontBottomButton;
@property(retain, nonatomic) UIColor *colorWellchosenDesc; // @synthesize colorWellchosenDesc=_colorWellchosenDesc;
@property(retain, nonatomic) UIFont *fontWellchosenDesc; // @synthesize fontWellchosenDesc=_fontWellchosenDesc;
@property(retain, nonatomic) UIColor *colorFeedTime; // @synthesize colorFeedTime=_colorFeedTime;
@property(retain, nonatomic) UIFont *fontFeedTime; // @synthesize fontFeedTime=_fontFeedTime;
@property(retain, nonatomic) UIColor *colorFeedInfo; // @synthesize colorFeedInfo=_colorFeedInfo;
@property(retain, nonatomic) UIFont *fontFeedInfo; // @synthesize fontFeedInfo=_fontFeedInfo;
@property(retain, nonatomic) UIColor *colorGrayLine; // @synthesize colorGrayLine=_colorGrayLine;
@property(retain, nonatomic) UIColor *colorCellBackground; // @synthesize colorCellBackground=_colorCellBackground;
- (void).cxx_destruct;
- (CDUnknownBlockType)getCellHeightProxy;
- (float)feedItemHeight:(id)arg1;
- (CDUnknownBlockType)getCellReuseIdProxy;
- (CDUnknownBlockType)getCellRefreshProxy;
- (CDUnknownBlockType)getCellDrawProxy;
- (float)getCellHeight;
- (CDUnknownBlockType)cellDrawBottombarBlock;
- (CDUnknownBlockType)cellDrawWellChosenTagBlock;
- (CDUnknownBlockType)cellDrawTopTagBlock;
- (CDUnknownBlockType)cellDrawFeedTextBlock;
- (CDUnknownBlockType)cellDrawFeedImageBlock;
- (CDUnknownBlockType)cellDrawBackgroundBlock;
- (id)init;

@end

