//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTTableViewDataSource.h"

#import "TTModel.h"

@interface TTTableViewInterstitialDataSource : TTTableViewDataSource <TTModel>
{
}

- (void)invalidate:(BOOL)arg1;
- (void)cancel;
- (void)load:(int)arg1 more:(BOOL)arg2;
- (BOOL)isOutdated;
- (BOOL)isLoadingMore;
- (BOOL)isLoading;
- (BOOL)isLoaded;
- (id)delegates;
- (id)model;

@end

