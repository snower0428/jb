//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTTableViewItem.h"

@class MTBaseOrderListViewController;

@interface MTBaseOrderTableItem : MTTableViewItem
{
    MTBaseOrderListViewController *_viewController;
}

+ (id)instanceWithOrder:(id)arg1;
@property(nonatomic) __weak MTBaseOrderListViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (void)setEditingEnableState:(BOOL)arg1;

@end
