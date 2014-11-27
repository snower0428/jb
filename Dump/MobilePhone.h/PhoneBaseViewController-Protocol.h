//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@protocol PhoneBaseViewController <NSObject>
+ (NSString *)defaultPNGName;
+ (long long)statusBarStyle;
+ (int)viewType;
- (void)handleURL:(NSURL *)arg1;
- (void)prepareForSnapshot;
- (_Bool)shouldSnapshot;
- (_Bool)shouldDisableEdgeClip;

@optional
- (void)transitionInFromViewType:(int)arg1 animated:(_Bool)arg2 completionBlock:(void (^)(_Bool))arg3;
- (void)prepareForTransitionInFromViewType:(int)arg1 animated:(_Bool)arg2;
- (void)updateViewControllerForOrientation:(long long)arg1;
- (void)prepareToHandleURL:(NSURL *)arg1;
@end
