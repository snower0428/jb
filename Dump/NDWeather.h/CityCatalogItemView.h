//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableDictionary, UIButton, UIScrollView;

__attribute__((visibility("hidden")))
@interface CityCatalogItemView : UIView
{
    UIButton *catalog;
    UIButton *catalogItem;
    UIButton *catalogItemItem;
    UIScrollView *scrollView;
    NSMutableDictionary *containers;
    id <CityCatalogItemViewDataSource><CityCatalogItemViewDelegate> _delegate;
}

@property(nonatomic) id <CityCatalogItemViewDataSource><CityCatalogItemViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (void)draw_showCatalogItems;
- (id)getDefaultLabel;
- (id)getDefaultButton;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)initCommon;
- (void)setNeedsDisplay;
- (void)catalogItemClick:(id)arg1;
- (void)catalogTabItemClick:(id)arg1;
- (void)catalogTabClick:(id)arg1;
- (void)hideBeforeShow:(id)arg1;

@end

