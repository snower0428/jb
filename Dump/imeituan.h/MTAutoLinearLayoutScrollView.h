//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

#import "MTAutoLinearLayoutProtocol.h"

@interface MTAutoLinearLayoutScrollView : UIScrollView <MTAutoLinearLayoutProtocol>
{
}

- (void)initLinearLayoutManager;
- (void)layoutSubviews;
- (void)applyLinearLayoutInternal:(id)arg1;
- (void)setLastMarginInternal:(id)arg1;
- (void)addSubviewInternal:(id)arg1 withMargin:(id)arg2;

@end
