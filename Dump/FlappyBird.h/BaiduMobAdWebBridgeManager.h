//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

@interface BaiduMobAdWebBridgeManager : NSObject
{
    NSMutableDictionary *_webView2BridgeDict;
    NSMutableDictionary *_baiduMobAdView2BridgeDict;
    NSMutableDictionary *_interstitial2BridgeDict;
    NSMutableArray *_baiduMobAdViewArray;
}

+ (id)sharedBridgeManager;
@property(readonly, nonatomic) NSMutableArray *baiduMobAdViewArray; // @synthesize baiduMobAdViewArray=_baiduMobAdViewArray;
@property(readonly, nonatomic) NSMutableDictionary *interstitial2BridgeDict; // @synthesize interstitial2BridgeDict=_interstitial2BridgeDict;
@property(readonly, nonatomic) NSMutableDictionary *baiduMobAdView2BridgeDict; // @synthesize baiduMobAdView2BridgeDict=_baiduMobAdView2BridgeDict;
@property(readonly, nonatomic) NSMutableDictionary *webView2BridgeDict; // @synthesize webView2BridgeDict=_webView2BridgeDict;
- (void)dealloc;
- (void)removeBridgeForInterstitial:(id)arg1;
- (id)getBridgeForInterstitial:(id)arg1;
- (void)setBridge:(id)arg1 ForInterstitial:(id)arg2;
- (void)removeBridgeForBaiduMobAdView:(id)arg1;
- (id)getBridgeForBaiduMobAdView:(id)arg1;
- (void)setBridge:(id)arg1 ForBaiduMobAdView:(id)arg2;
- (void)removeBridgeForWebView:(id)arg1;
- (id)getBridgeForWebView:(id)arg1;
- (void)setBridge:(id)arg1 ForWebView:(id)arg2;
- (id)getBaiduMobAdViewArray;
- (id)getInterstitial2BridgeDict;
- (id)getBaiduMobAdView2BridgeDict;
- (id)getWebView2BridgeDict;
- (id)init;

@end

