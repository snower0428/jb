//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath, UIView;

@protocol TBSNSFeedStreamListViewDelegate <NSObject>

@optional
- (void)feedStreamListView:(UIView *)arg1 didSelectRowAtIndexPath:(NSIndexPath *)arg2;
- (BOOL)isFeedStreamListViewGotoAccountDetail:(UIView *)arg1;
- (void)feedStreamListViewDidRefresh:(UIView *)arg1;
- (void)feedStreamListViewDidNextPage:(UIView *)arg1;
@end

