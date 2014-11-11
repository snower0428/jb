//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTTableViewController.h"

#import "UIGestureRecognizerDelegate.h"
#import "UITextFieldDelegate.h"

@class MTVoucherService, NSMutableArray;

@interface MTVouchersVC : MTTableViewController <UIGestureRecognizerDelegate, UITextFieldDelegate>
{
    BOOL _needRefresh;
    BOOL _needLoad;
    MTVoucherService *_service;
    NSMutableArray *_vouchers;
}

@property(retain, nonatomic) NSMutableArray *vouchers; // @synthesize vouchers=_vouchers;
@property(nonatomic) BOOL needLoad; // @synthesize needLoad=_needLoad;
@property(nonatomic) BOOL needRefresh; // @synthesize needRefresh=_needRefresh;
@property(retain, nonatomic) MTVoucherService *service; // @synthesize service=_service;
- (void).cxx_destruct;
- (void)didReceiveUserSignoutNotification;
- (void)refresh;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)didClickAddItem;
- (void)loadHowToGetVoucherViewController;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;
- (id)initWithService:(id)arg1;

@end

