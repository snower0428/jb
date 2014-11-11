//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BaiduMobAdWebBridgeBaseDelegate.h"

@class NSString;

@interface BaiduMobAdInterstitial : NSObject <BaiduMobAdWebBridgeBaseDelegate>
{
    BOOL _isReady;
    id <BaiduMobAdInterstitialDelegate> _delegate;
    NSString *_aduTag;
    NSString *Version;
    int _interstitialType;
}

@property(nonatomic) BOOL isReady; // @synthesize isReady=_isReady;
@property(nonatomic) int interstitialType; // @synthesize interstitialType=_interstitialType;
@property(copy, nonatomic) NSString *AdUnitTag; // @synthesize AdUnitTag=_aduTag;
@property(nonatomic) id <BaiduMobAdInterstitialDelegate> delegate; // @synthesize delegate=_delegate;
- (void)willRequestService;
- (void)presentFromRootViewController:(id)arg1;
- (void)load;
- (void)loadAndDisplayUsingKeyWindow:(id)arg1;
- (void)loadAd:(BOOL)arg1;
- (id)getWebBridge;
- (id)init;
- (void)dealloc;
@property(readonly, nonatomic) NSString *Version; // @synthesize Version;

@end

