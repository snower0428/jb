//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GADRequest, GADWebAppViewController, NSObject<GADInterstitialDelegate>, NSString;

__attribute__((visibility("hidden")))
@interface GADInterstitial : NSObject
{
    BOOL hasBeenUsed_;
    GADRequest *request_;
    GADWebAppViewController *viewController_;
}

@property(retain, nonatomic) GADWebAppViewController *viewController; // @synthesize viewController=viewController_;
@property(retain, nonatomic) GADRequest *request; // @synthesize request=request_;
@property(readonly, nonatomic) BOOL hasBeenUsed; // @synthesize hasBeenUsed=hasBeenUsed_;
- (void)loadAndDisplayRequest:(id)arg1 usingWindow:(id)arg2 initialImage:(id)arg3;
- (void)presentFromRootViewController:(id)arg1;
@property(readonly, nonatomic) BOOL isReady;
- (void)loadRequest:(id)arg1;
- (void)sendInterstitialUsageError;
@property(nonatomic) NSObject<GADInterstitialDelegate> *delegate;
@property(copy, nonatomic) NSString *adUnitID;
- (void)dealloc;
- (id)init;
- (void)webAction:(id)arg1;
- (void)sendInterstitialError:(id)arg1;
- (id)privateRequest;
- (void)cancel;
- (id)private;

@end
