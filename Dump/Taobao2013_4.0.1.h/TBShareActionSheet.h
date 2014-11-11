//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class NSMutableArray, NSString, TBColorPageControl, UIButton, UILabel, UIScrollView;

__attribute__((visibility("hidden")))
@interface TBShareActionSheet : UIView <UIScrollViewDelegate>
{
    NSMutableArray *_shareItems;
    id _delegate;
    NSMutableArray *_itemViews;
    UILabel *_titleLabel;
    UIView *_shareContainer;
    UIButton *_cancelButton;
    UIButton *_dismissButton;
    UIButton *_ruleButton;
    UIScrollView *_scrollView;
    TBColorPageControl *_colorPageControl;
    struct CGRect _shareFrame;
}

@property(retain, nonatomic) TBColorPageControl *colorPageControl; // @synthesize colorPageControl=_colorPageControl;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIButton *ruleButton; // @synthesize ruleButton=_ruleButton;
@property(nonatomic) struct CGRect shareFrame; // @synthesize shareFrame=_shareFrame;
@property(retain, nonatomic) UIButton *dismissButton; // @synthesize dismissButton=_dismissButton;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIView *shareContainer; // @synthesize shareContainer=_shareContainer;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSMutableArray *itemViews; // @synthesize itemViews=_itemViews;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *shareItems; // @synthesize shareItems=_shareItems;
- (void).cxx_destruct;
- (void)itemPressed:(id)arg1;
- (void)dismissShareViewWithAnimate:(BOOL)arg1;
- (void)dismissShareView;
- (void)showInView:(id)arg1;
- (void)dealloc;
- (void)activeItemClicked:(id)arg1;
- (void)deleteShareItemAtIndex:(int)arg1;
- (void)setShareItem:(id)arg1 atIndex:(int)arg2;
- (void)deleteShareItem:(id)arg1;
- (void)setShareItem:(id)arg1;
- (void)hideActivityRule;
- (void)showActivityRule:(id)arg1;
- (void)configShareItems;
- (id)shareItemWithTitle:(id)arg1 image:(id)arg2;
- (void)refreshShareContainer;
- (void)initdismissButton;
- (void)initTitleLabel:(id)arg1;
@property(retain, nonatomic) NSString *title;
- (id)initWithTitle:(id)arg1 Type:(int)arg2;

@end

