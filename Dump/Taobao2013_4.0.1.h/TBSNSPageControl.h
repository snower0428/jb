//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIPageControl.h"

@interface TBSNSPageControl : UIPageControl
{
    int _preDisplayedPage;
}

@property(nonatomic) int preDisplayedPage; // @synthesize preDisplayedPage=_preDisplayedPage;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)setCurrentPage:(int)arg1;
- (void)updateDots;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end

