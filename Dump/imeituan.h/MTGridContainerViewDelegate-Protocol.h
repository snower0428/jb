//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MTGridContainerView, MTGridView;

@protocol MTGridContainerViewDelegate <NSObject>
- (struct CGRect)cellFrameWithIndex:(unsigned int)arg1 containerView:(MTGridContainerView *)arg2;
- (MTGridView *)cellViewWithIndex:(unsigned int)arg1 containerView:(MTGridContainerView *)arg2;
- (unsigned int)numberOfCellsWithContainerView:(MTGridContainerView *)arg1;
@end

