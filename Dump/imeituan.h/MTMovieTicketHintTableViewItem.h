//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTTableViewItem.h"

@class MTCouponViewController, MTMovieOrder;

@interface MTMovieTicketHintTableViewItem : MTTableViewItem
{
    BOOL _showPassbookBadget;
    MTCouponViewController *_viewController;
    MTMovieOrder *_movieOrder;
}

@property(retain, nonatomic) MTMovieOrder *movieOrder; // @synthesize movieOrder=_movieOrder;
@property(nonatomic) BOOL showPassbookBadget; // @synthesize showPassbookBadget=_showPassbookBadget;
@property(nonatomic) __weak MTCouponViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;

@end

