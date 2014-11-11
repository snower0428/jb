//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBCityViewController.h"

#import "TBCityMapViewDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"

@class TBCityAddress, TBCityAddressService, UIButton, UILabel, UITableView;

@interface TBCityAddressDetailViewController : TBCityViewController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, UIActionSheetDelegate, TBCityMapViewDelegate>
{
    int _itemCount;
    UITableView *_tableView;
    UILabel *_labelArea;
    UIButton *_setDefaultButton;
    TBCityAddressService *_service;
    TBCityAddress *_addressInfo;
    id <TBCityAddressDelegate> _delegate;
}

@property(nonatomic) id <TBCityAddressDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TBCityAddress *addressInfo; // @synthesize addressInfo=_addressInfo;
@property(retain, nonatomic) TBCityAddressService *service; // @synthesize service=_service;
@property(retain, nonatomic) UIButton *setDefaultButton; // @synthesize setDefaultButton=_setDefaultButton;
@property(retain, nonatomic) UILabel *labelArea; // @synthesize labelArea=_labelArea;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)setLocation:(CDStruct_2c43369c)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)editAction:(id)arg1;
- (void)editAddressResult:(id)arg1;
- (void)setupToolbarItems;
- (id)setDefaultItme;
- (void)viewDidLoad;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;
- (BOOL)isDefault:(id)arg1;
- (void)moveDown:(id)arg1;
- (void)configCell:(id)arg1 index:(int)arg2;
- (id)currentAddressItem;
- (void)setDefaultAddress:(id)arg1;
- (void)deleteAddress:(id)arg1;
- (void)doDeleteAddress;
- (void)clear;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)dealloc;

@end
