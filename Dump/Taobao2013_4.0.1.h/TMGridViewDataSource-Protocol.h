//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath, TMGridView, TMGridViewItem;

@protocol TMGridViewDataSource <NSObject>
- (TMGridViewItem *)gridView:(TMGridView *)arg1 itemForColumnAtIndexPath:(NSIndexPath *)arg2;
- (int)gridView:(TMGridView *)arg1 numberOfColumnInRow:(int)arg2;
- (int)numberOfRowAtGridView:(TMGridView *)arg1;

@optional
- (float)gridView:(TMGridView *)arg1 heightOfItemAtIndexPath:(NSIndexPath *)arg2;
- (float)gridView:(TMGridView *)arg1 widthOfItemAtIndexPath:(NSIndexPath *)arg2;
@end
