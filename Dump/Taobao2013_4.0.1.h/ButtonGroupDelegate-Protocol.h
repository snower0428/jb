//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ButtonGroupView;

@protocol ButtonGroupDelegate <NSObject>

@optional
- (void)btnGroupViewMoreItemHasTap:(ButtonGroupView *)arg1 withExpand:(BOOL)arg2;
- (void)btnGroupView:(ButtonGroupView *)arg1 selectWithIndex:(int)arg2;
- (void)btnGroupView:(ButtonGroupView *)arg1 TapWithIndex:(int)arg2;
- (void)btnGroupView:(ButtonGroupView *)arg1 hightlightWithIndex:(int)arg2;
- (void)btnGroupViewWillDisapper:(ButtonGroupView *)arg1;
@end

