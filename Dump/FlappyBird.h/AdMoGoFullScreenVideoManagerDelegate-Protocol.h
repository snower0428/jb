//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AdMoGoFullScreenVideoManager, NSURL;

@protocol AdMoGoFullScreenVideoManagerDelegate <NSObject>

@optional
- (void)AdMoGoFullScreenVideoManager:(AdMoGoFullScreenVideoManager *)arg1 finishVideoAd:(NSURL *)arg2;
- (void)AdMoGoFullScreenVideoManager:(AdMoGoFullScreenVideoManager *)arg1 didPlayVideoAd:(NSURL *)arg2;
- (void)AdMoGoFullScreenVideoManager:(AdMoGoFullScreenVideoManager *)arg1 failLoadVideoAd:(NSURL *)arg2;
- (void)AdMoGoFullScreenVideoManager:(AdMoGoFullScreenVideoManager *)arg1 didLoadVideoAd:(NSURL *)arg2;
@end

