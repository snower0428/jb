//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

@interface TBSNSSquareSubViewBase : UIView
{
    UIView *_itemsBkgView;
    UILabel *_titleLabel;
    int _innerButtonType;
}

@property(nonatomic) int innerButtonType; // @synthesize innerButtonType=_innerButtonType;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *itemsBkgView; // @synthesize itemsBkgView=_itemsBkgView;
- (void).cxx_destruct;
- (void)updateItems:(id)arg1;
- (void)createItems:(struct CGRect)arg1 withTitle:(id)arg2 withSubTitle:(id)arg3 withBannerURL:(id)arg4 withItemInfoDic:(id)arg5;
- (void)createItems:(struct CGRect)arg1 withCount:(int)arg2 withRowCount:(int)arg3 withItemsType:(int)arg4 withItemsBkgViewFrame:(struct CGRect)arg5 withHSeparateCnt:(int)arg6 withVSeparateCnt:(int)arg7;
- (id)lineViewWithFrame:(struct CGRect)arg1;
- (void)addLineToBkgView:(id)arg1 withHSeparateCnt:(int)arg2 withVSeparateCnt:(int)arg3;
- (void)createTitle;
- (id)initWithFrame:(struct CGRect)arg1;

@end

