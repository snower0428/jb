//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@protocol ATCSearchLivingCircleViewControllerDelegate <NSObject>

@optional
- (void)onATCSearchCircleViewControllerDidCancelSearching:(id)arg1;
- (void)onATCSearchCircleViewController:(id)arg1 DidFinishSearching:(NSArray *)arg2 DefaultCircleId:(NSString *)arg3;
@end
