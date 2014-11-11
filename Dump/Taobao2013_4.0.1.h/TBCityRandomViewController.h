//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBCityViewController.h"

#import "TBCityRandomMenuDelegate.h"
#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"

@class NSMutableDictionary, NSString, TBCityRandomMenuController, TBCitySlider, TBCityStatusHandler, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UIView;

@interface TBCityRandomViewController : TBCityViewController <TBCityRandomMenuDelegate, UIPickerViewDelegate, UIPickerViewDataSource>
{
    NSMutableDictionary *_queryDic;
    UILabel *_priceLabel;
    UIButton *_carButton;
    int _number;
    UIButton *_numberButton;
    UIView *_infoView;
    UIActivityIndicatorView *_activeView;
    UILabel *_numberLabel;
    TBCitySlider *_sliderView;
    UIImageView *_guideView;
    NSString *_storeId;
    int _serveType;
    TBCityRandomMenuController *_mainViewController;
    UIButton *_priceButton;
}

@property(retain, nonatomic) UIButton *priceButton; // @synthesize priceButton=_priceButton;
@property(retain, nonatomic) TBCityRandomMenuController *mainViewController; // @synthesize mainViewController=_mainViewController;
@property(nonatomic) int serveType; // @synthesize serveType=_serveType;
@property(nonatomic) int number; // @synthesize number=_number;
@property(retain, nonatomic) NSString *storeId; // @synthesize storeId=_storeId;
- (void).cxx_destruct;
- (SEL)selectorForError:(id)arg1;
- (SEL)selectorForEmpty;
- (void)removeErrorView;
- (void)showLoadingView;
- (void)showErrorView:(id)arg1;
- (void)removeEmptyView;
- (void)showEmptyView:(id)arg1;
- (void)animationEnd:(id)arg1;
- (void)animationBegin:(id)arg1;
- (int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2;
- (int)numberOfComponentsInPickerView:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)carAction:(id)arg1;
- (void)reloadData:(id)arg1;
- (void)refreshTipAction:(id)arg1;
- (void)priceTipAction:(id)arg1;
- (void)viewDidUnload;
- (void)tapAction;
- (void)viewDidLoad;
- (void)setNumberButtonTitle:(int)arg1;
- (void)setupItems;
- (id)addNewAddressItem;
- (void)enableNextButton:(BOOL)arg1;
- (void)reloadToolBar;
- (void)calculatePrice;
- (void)dealloc;
- (void)leaveViewControllerDoAction;
- (void)clear;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (id)initWithInfo:(id)arg1;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;
@property(retain, nonatomic) TBCityStatusHandler *statusHandler;

@end
