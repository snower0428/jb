//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, TBSNSAccountListView, UIView;

@protocol TBSNSAccountListViewDelegate <NSObject>

@optional
- (id)serviceParametersForAccountListView:(TBSNSAccountListView *)arg1;
- (void)completeLoadDataWithAccountCount:(int)arg1 forAccountListView:(TBSNSAccountListView *)arg2;
- (void)selectedItem:(int)arg1 forAccountListView:(TBSNSAccountListView *)arg2;
- (void)scrollEventForAccountListView:(TBSNSAccountListView *)arg1 withContentOffset:(struct CGPoint)arg2;
- (UIView *)footerViewForAccountListView:(TBSNSAccountListView *)arg1;
- (UIView *)headerViewForAccountListView:(TBSNSAccountListView *)arg1;
- (NSString *)configureForAccountListView:(TBSNSAccountListView *)arg1;
@end
