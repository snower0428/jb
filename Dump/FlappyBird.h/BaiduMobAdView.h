//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "BaiduMobAdWebBridgeBaseDelegate.h"

@class NSString, UIColor;

@interface BaiduMobAdView : UIView <BaiduMobAdWebBridgeBaseDelegate>
{
    UIColor *_textColor;
    UIColor *_backgroundColor;
    float _alpha;
    NSString *_aduTag;
    id <BaiduMobAdViewDelegate> _delegate;
    BOOL autoplayEnabled;
    int _adType;
    UIColor *textColor;
    NSString *Version;
}

@property(nonatomic) BOOL autoplayEnabled; // @synthesize autoplayEnabled;
@property(copy, nonatomic) NSString *AdUnitTag; // @synthesize AdUnitTag=_aduTag;
@property(nonatomic) int AdType; // @synthesize AdType=_adType;
@property(nonatomic) id <BaiduMobAdViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)willRequestService;
- (void)dealloc;
- (void)close;
- (void)request;
- (void)start;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setAlpha:(float)arg1;
- (void)didMoveToWindow;
- (void)didMoveToSuperview;
- (void)removeFromSuperview;
- (id)getWebBridge;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)setup;
@property(readonly, nonatomic) NSString *Version; // @synthesize Version;

@end

