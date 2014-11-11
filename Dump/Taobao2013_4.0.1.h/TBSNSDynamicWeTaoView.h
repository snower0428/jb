//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBSNSBasicView.h"

#import "UIScrollViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, UIButton, UIImageView, UILabel;

@interface TBSNSDynamicWeTaoView : TBSNSBasicView <UITableViewDataSource, UITableViewDelegate, UIScrollViewDelegate>
{
    UIButton *_transparentLayerButton;
    UIImageView *_menuImageViewAccount;
    UIImageView *_menuImageViewNewGuid;
    UIImageView *_menuImageViewSearch;
    UIImageView *_menuImageViewSweep;
    UIButton *_menuButtonAccount;
    UIButton *_menuButtonNewGuid;
    UIButton *_menuButtonSearch;
    UIButton *_menuButtonSweep;
    UILabel *_menuLabelAccount;
    UILabel *_menuLabelNewGuid;
    UILabel *_menuLabelSearch;
    UILabel *_menuLabelSweep;
    NSArray *_dataSouce;
    NSArray *_dataSouceLogOut;
}

@property(retain, nonatomic) NSArray *dataSouceLogOut; // @synthesize dataSouceLogOut=_dataSouceLogOut;
@property(retain, nonatomic) NSArray *dataSouce; // @synthesize dataSouce=_dataSouce;
@property(retain, nonatomic) UILabel *menuLabelSweep; // @synthesize menuLabelSweep=_menuLabelSweep;
@property(retain, nonatomic) UILabel *menuLabelSearch; // @synthesize menuLabelSearch=_menuLabelSearch;
@property(retain, nonatomic) UILabel *menuLabelNewGuid; // @synthesize menuLabelNewGuid=_menuLabelNewGuid;
@property(retain, nonatomic) UILabel *menuLabelAccount; // @synthesize menuLabelAccount=_menuLabelAccount;
@property(retain, nonatomic) UIButton *menuButtonSweep; // @synthesize menuButtonSweep=_menuButtonSweep;
@property(retain, nonatomic) UIButton *menuButtonSearch; // @synthesize menuButtonSearch=_menuButtonSearch;
@property(retain, nonatomic) UIButton *menuButtonNewGuid; // @synthesize menuButtonNewGuid=_menuButtonNewGuid;
@property(retain, nonatomic) UIButton *menuButtonAccount; // @synthesize menuButtonAccount=_menuButtonAccount;
@property(retain, nonatomic) UIImageView *menuImageViewSweep; // @synthesize menuImageViewSweep=_menuImageViewSweep;
@property(retain, nonatomic) UIImageView *menuImageViewSearch; // @synthesize menuImageViewSearch=_menuImageViewSearch;
@property(retain, nonatomic) UIImageView *menuImageViewNewGuid; // @synthesize menuImageViewNewGuid=_menuImageViewNewGuid;
@property(retain, nonatomic) UIImageView *menuImageViewAccount; // @synthesize menuImageViewAccount=_menuImageViewAccount;
@property(retain, nonatomic) UIButton *transparentLayerButton; // @synthesize transparentLayerButton=_transparentLayerButton;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)getDataSouceArray;
- (id)itemAtIndexPath:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)gotoDetailView:(id)arg1;
- (void)buttonTouchCancel:(id)arg1;
- (void)buttonTouchDown:(id)arg1;
- (void)showTransparentLayerButton:(BOOL)arg1;
- (void)initTransparentLayerButton;
- (void)initDataTableView;
- (void)initMenuView;
- (void)reloadData;
- (void)setUpView;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)nextPage;
- (BOOL)needAlert;
- (BOOL)needRefresh;

@end
