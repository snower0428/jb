//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AdMoGoVideoManager, NSURL;

@protocol AdMoGoVideoManagerDelegate <NSObject>

@optional
- (void)AdMoGoVideoManager:(AdMoGoVideoManager *)arg1 finishVideoAd:(NSURL *)arg2;
- (void)AdMoGoVideoManager:(AdMoGoVideoManager *)arg1 didPlayVideoAd:(NSURL *)arg2;
- (void)AdMoGoVideoManager:(AdMoGoVideoManager *)arg1 failLoadVideoAd:(NSURL *)arg2;
- (void)AdMoGoVideoManager:(AdMoGoVideoManager *)arg1 didLoadVideoAd:(NSURL *)arg2;
@end
