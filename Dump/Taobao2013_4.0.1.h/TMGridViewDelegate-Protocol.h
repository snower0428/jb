//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollViewDelegate.h"

@class NSIndexPath, TMGridView;

@protocol TMGridViewDelegate <UIScrollViewDelegate>

@optional
- (void)gridView:(TMGridView *)arg1 commitDeleteItemAtIndexPath:(NSIndexPath *)arg2;
- (void)gridView:(TMGridView *)arg1 willEnterDeletingModel:(BOOL)arg2;
- (void)gridView:(TMGridView *)arg1 didSelectedItemAtIndexPath:(NSIndexPath *)arg2;
@end
