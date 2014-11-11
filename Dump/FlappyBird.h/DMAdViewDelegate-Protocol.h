//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DMAdView, NSError;

@protocol DMAdViewDelegate <NSObject>

@optional
- (void)dmApplicationWillEnterBackgroundFromAd:(DMAdView *)arg1;
- (void)dmDidDismissModalViewFromAd:(DMAdView *)arg1;
- (void)dmWillPresentModalViewFromAd:(DMAdView *)arg1;
- (void)dmAdViewDidClicked:(DMAdView *)arg1;
- (void)dmAdViewFailToLoadAd:(DMAdView *)arg1 withError:(NSError *)arg2;
- (void)dmAdViewSuccessToLoadAd:(DMAdView *)arg1;
@end
