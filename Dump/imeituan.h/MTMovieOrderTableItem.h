//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTBaseOrderTableItem.h"

@class MTMovieOrder, MTOrderListViewController;

@interface MTMovieOrderTableItem : MTBaseOrderTableItem
{
    MTMovieOrder *_order;
}

+ (id)instanceWithOrder:(id)arg1;
@property(retain, nonatomic) MTMovieOrder *order; // @synthesize order=_order;
- (void).cxx_destruct;
- (float)cellHeight;

// Remaining properties
@property(nonatomic) __weak MTOrderListViewController *viewController;

@end

