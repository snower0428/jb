//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIControl, UIScrollView, UIView;

@protocol TBSNSPageControlViewDelegate <NSObject>
- (UIControl *)TBSNSPageControlView:(UIView *)arg1 atIndex:(unsigned int)arg2;
- (unsigned int)numberOfSectionsInPageControlView:(UIView *)arg1;

@optional
- (void)TBSNSPageControlView:(UIView *)arg1 scrollViewDidScroll:(UIScrollView *)arg2 withScollViewPage:(unsigned int)arg3;
- (void)TBSNSPageControlView:(UIView *)arg1 didShowViewAtIndex:(unsigned int)arg2;
- (void)TBSNSPageControlView:(UIView *)arg1 willShowViewAtIndex:(unsigned int)arg2;
- (void)TBSNSPageControlView:(UIView *)arg1 didAtIndex:(unsigned int)arg2;
@end

