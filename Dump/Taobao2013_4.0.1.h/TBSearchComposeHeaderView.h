//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, TBButton, TBSegmentedButton, TBSegmentedControl, TBWidgetView, UIButton, UIImageView, UILabel;

@interface TBSearchComposeHeaderView : UIView
{
    BOOL _hasWidget;
    UIImageView *_backgroundImageView;
    UIButton *_leftMenuButton;
    UIButton *_rightMenuButton;
    TBSegmentedControl *_segmentedControl;
    TBSegmentedButton *_segmentedButton4;
    TBSegmentedButton *_segmentedButton3;
    TBSegmentedButton *_segmentedButton2;
    TBSegmentedButton *_segmentedButton1;
    TBButton *_searchButton;
    UIImageView *_searchIconImageView;
    UILabel *_searchKeyWordLabel;
    UILabel *_searchResultCountLabel;
    CDUnknownBlockType _layoutEndBlock;
    float _heightWithWidget;
    id <TBCloseWidgetDelegate> _closeDelegate;
    TBWidgetView *_widgetContainer;
    NSString *_widgetURL;
    struct CGSize _widgetSize;
}

+ (float)heightOfSimpleHeaderView;
+ (float)heightOfHeaderView;
+ (id)shopSearchHeaderView;
+ (id)simpleSearchHeaderView;
+ (id)portalSearchHeaderView;
+ (id)headerView;
@property(retain, nonatomic) NSString *widgetURL; // @synthesize widgetURL=_widgetURL;
@property(retain, nonatomic) TBWidgetView *widgetContainer; // @synthesize widgetContainer=_widgetContainer;
@property(nonatomic) id <TBCloseWidgetDelegate> closeDelegate; // @synthesize closeDelegate=_closeDelegate;
@property(nonatomic) float heightWithWidget; // @synthesize heightWithWidget=_heightWithWidget;
@property(nonatomic) struct CGSize widgetSize; // @synthesize widgetSize=_widgetSize;
@property(nonatomic) BOOL hasWidget; // @synthesize hasWidget=_hasWidget;
@property(copy, nonatomic) CDUnknownBlockType layoutEndBlock; // @synthesize layoutEndBlock=_layoutEndBlock;
@property(nonatomic) UILabel *searchResultCountLabel; // @synthesize searchResultCountLabel=_searchResultCountLabel;
@property(nonatomic) UILabel *searchKeyWordLabel; // @synthesize searchKeyWordLabel=_searchKeyWordLabel;
@property(nonatomic) UIImageView *searchIconImageView; // @synthesize searchIconImageView=_searchIconImageView;
@property(retain, nonatomic) TBButton *searchButton; // @synthesize searchButton=_searchButton;
@property(nonatomic) TBSegmentedButton *segmentedButton1; // @synthesize segmentedButton1=_segmentedButton1;
@property(nonatomic) TBSegmentedButton *segmentedButton2; // @synthesize segmentedButton2=_segmentedButton2;
@property(nonatomic) TBSegmentedButton *segmentedButton3; // @synthesize segmentedButton3=_segmentedButton3;
@property(nonatomic) TBSegmentedButton *segmentedButton4; // @synthesize segmentedButton4=_segmentedButton4;
@property(nonatomic) TBSegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property(retain, nonatomic) UIButton *rightMenuButton; // @synthesize rightMenuButton=_rightMenuButton;
@property(retain, nonatomic) UIButton *leftMenuButton; // @synthesize leftMenuButton=_leftMenuButton;
@property(nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
- (void).cxx_destruct;
- (void)closeWidgetView:(id)arg1;
- (void)showWidget;
- (void)hideWidget;
- (void)disMissWidget;
- (void)layoutWidget:(id)arg1 Size:(struct CGSize)arg2 EndBlock:(CDUnknownBlockType)arg3;
- (float)catThePosXByWidth;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)shopConfig;
- (void)config;
- (void)simpleSearchConfig;
- (void)shopSearchConfig;
- (void)portalSearchConfig;
- (void)configSegmentControlWith:(int)arg1;
- (void)configShopSegmentControlWith:(int)arg1;

@end
