//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MTPageView, UIView;

@protocol MTPageViewDelegate <NSObject>
- (unsigned int)numberOfPagesInPageView:(MTPageView *)arg1;
- (UIView *)pageView:(MTPageView *)arg1 viewForPageAtIndex:(unsigned int)arg2;

@optional
- (void)pageIndexDidChangeInPageView:(MTPageView *)arg1;
@end
