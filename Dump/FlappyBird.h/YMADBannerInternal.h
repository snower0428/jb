//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMLUIView.h"

@class NSData, NSString, UIColor, UILabel, UIView, YMADBannerInternalBackground, YMLImageWebView, YMLTranslucencyView;

__attribute__((visibility("hidden")))
@interface YMADBannerInternal : YMLUIView
{
    YMADBannerInternalBackground *_backgroundView;
    YMLTranslucencyView *_translucencyView;
    UIColor *_backupInnerColor;
    UIView *_contentView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    YMLImageWebView *_iconImageView;
    YMLImageWebView *_markImageView;
    NSString *_title;
    NSString *_subTitle;
    NSData *_iconImageData;
    NSData *_markImageData;
    NSData *_contentImageData;
    NSString *_contentURL;
    struct CGSize _iconSize;
    struct CGSize _markSize;
    float _titleMinFontSize;
    float _titleMaxFontSize;
    float _subtitleMinFontSize;
    float _subtitleMaxFontSize;
    UIColor *_titleColor;
    UIColor *_subTitleColor;
    int _titleAligement;
    int _subTitleAligement;
}

@property(nonatomic) int subTitleAligement; // @synthesize subTitleAligement=_subTitleAligement;
@property(nonatomic) int titleAligement; // @synthesize titleAligement=_titleAligement;
@property(retain, nonatomic) UIColor *subTitleColor; // @synthesize subTitleColor=_subTitleColor;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(nonatomic) float subtitleMaxFontSize; // @synthesize subtitleMaxFontSize=_subtitleMaxFontSize;
@property(nonatomic) float subtitleMinFontSize; // @synthesize subtitleMinFontSize=_subtitleMinFontSize;
@property(nonatomic) float titleMaxFontSize; // @synthesize titleMaxFontSize=_titleMaxFontSize;
@property(nonatomic) float titleMinFontSize; // @synthesize titleMinFontSize=_titleMinFontSize;
@property(nonatomic) struct CGSize markSize; // @synthesize markSize=_markSize;
@property(nonatomic) struct CGSize iconSize; // @synthesize iconSize=_iconSize;
@property(copy, nonatomic) NSString *contentURL; // @synthesize contentURL=_contentURL;
@property(retain, nonatomic) NSData *contentImageData; // @synthesize contentImageData=_contentImageData;
@property(retain, nonatomic) NSData *markImageData; // @synthesize markImageData=_markImageData;
@property(retain, nonatomic) NSData *iconImageData; // @synthesize iconImageData=_iconImageData;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) YMLImageWebView *markImageView; // @synthesize markImageView=_markImageView;
@property(readonly, nonatomic) YMLImageWebView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(readonly, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)layoutSubviews;
- (struct CGRect)frameForMark;
- (struct CGRect)frameForIcon;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)_updateContentURL:(id)arg1;
- (void)_updateDisplay;
- (BOOL)_isBarStyle;
- (void)_setup;
@property(nonatomic, getter=isTranslucency) BOOL translucency; // @dynamic translucency;
@property(readonly, nonatomic) float logoHeight; // @dynamic logoHeight;
@property(readonly, nonatomic) float logoWidth; // @dynamic logoWidth;
@property(nonatomic) float logoGap; // @dynamic logoGap;
@property(nonatomic) float logoFontSize; // @dynamic logoFontSize;
@property(nonatomic) int logoPosition; // @dynamic logoPosition;
@property(nonatomic) int logoStyle; // @dynamic logoStyle;
@property(nonatomic) float gradientDelta; // @dynamic gradientDelta;
@property(retain, nonatomic) UIColor *innerColor; // @synthesize innerColor=_backupInnerColor;
@property(nonatomic) float innerCornerRadius; // @dynamic innerCornerRadius;
@property(nonatomic) float outerCornerRadius; // @dynamic outerCornerRadius;
@property(nonatomic) float outerBorderWidth; // @dynamic outerBorderWidth;
@property(nonatomic) int shadowStyle; // @dynamic shadowStyle;

@end

