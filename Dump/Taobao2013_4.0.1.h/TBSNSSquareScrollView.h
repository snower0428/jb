//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

@class NSString, TBSNSSquareSubViewBase, UIView;

@interface TBSNSSquareScrollView : UIScrollView
{
    float andIRelatedViewHeight;
    TBSNSSquareSubViewBase *_headView;
    UIView *_bottomView;
    TBSNSSquareSubViewBase *_sepecialTopicView;
    TBSNSSquareSubViewBase *_popularCategoryView;
    TBSNSSquareSubViewBase *_andIRelatedView;
    NSString *_andIRelatedViewTitle;
    NSString *_andIRelatedViewSubTitle;
    NSString *_andIRelatedViewBannerURL;
}

@property(retain, nonatomic) NSString *andIRelatedViewBannerURL; // @synthesize andIRelatedViewBannerURL=_andIRelatedViewBannerURL;
@property(retain, nonatomic) NSString *andIRelatedViewSubTitle; // @synthesize andIRelatedViewSubTitle=_andIRelatedViewSubTitle;
@property(retain, nonatomic) NSString *andIRelatedViewTitle; // @synthesize andIRelatedViewTitle=_andIRelatedViewTitle;
@property(retain, nonatomic) TBSNSSquareSubViewBase *andIRelatedView; // @synthesize andIRelatedView=_andIRelatedView;
@property(retain, nonatomic) TBSNSSquareSubViewBase *popularCategoryView; // @synthesize popularCategoryView=_popularCategoryView;
@property(retain, nonatomic) TBSNSSquareSubViewBase *sepecialTopicView; // @synthesize sepecialTopicView=_sepecialTopicView;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) TBSNSSquareSubViewBase *headView; // @synthesize headView=_headView;
- (void).cxx_destruct;
- (void)updateItems:(id)arg1;
- (void)addLine:(float)arg1 withParentView:(id)arg2 withColor:(id)arg3;
- (void)adjustAndIRelatedViewPos;
- (void)initAndIRelatedView:(id)arg1;
- (void)initPopularCategoryView;
- (void)initSepecialTopicView;
- (void)initBottomView;
- (void)gotoSearchPage:(id)arg1;
- (void)createHeadViewItems;
- (void)initHeadView;
- (void)initialize;
- (id)initWithFrame:(struct CGRect)arg1;

@end
