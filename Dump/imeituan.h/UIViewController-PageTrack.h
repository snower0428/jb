//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSMutableDictionary, NSString;

@interface UIViewController (PageTrack)
+ (void)load;
- (void)trackPage;
- (id)pageNameStack;
@property(readonly, nonatomic) NSMutableDictionary *pageParameter;
@property(readonly, nonatomic) BOOL pageSeriesEnabled;
@property(readonly, nonatomic) NSString *pageName;
- (void)trackPageViewDidAppear:(BOOL)arg1;
@end

