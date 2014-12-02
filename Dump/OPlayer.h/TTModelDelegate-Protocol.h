//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSIndexPath;

@protocol TTModelDelegate <NSObject>

@optional
- (void)modelDidEndUpdates:(id <TTModel>)arg1;
- (void)modelDidBeginUpdates:(id <TTModel>)arg1;
- (void)model:(id <TTModel>)arg1 didDeleteObject:(id)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)model:(id <TTModel>)arg1 didInsertObject:(id)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)model:(id <TTModel>)arg1 didUpdateObject:(id)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)modelDidChange:(id <TTModel>)arg1;
- (void)modelDidCancelLoad:(id <TTModel>)arg1;
- (void)model:(id <TTModel>)arg1 didFailLoadWithError:(NSError *)arg2;
- (void)modelDidFinishLoad:(id <TTModel>)arg1;
- (void)modelDidStartLoad:(id <TTModel>)arg1;
@end
