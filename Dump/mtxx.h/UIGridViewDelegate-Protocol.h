//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"
#import "UIScrollViewDelegate.h"

@class NSIndexPath, UIGridView, UIView;

@protocol UIGridViewDelegate <NSObject, UIScrollViewDelegate>
- (float)gridView:(UIGridView *)arg1 heightForRowAtIndexPath:(NSIndexPath *)arg2;

@optional
- (UIView *)gridView:(UIGridView *)arg1 viewForHeaderInSection:(int)arg2;
- (float)gridView:(UIGridView *)arg1 heightForHeaderInSection:(int)arg2;
@end

