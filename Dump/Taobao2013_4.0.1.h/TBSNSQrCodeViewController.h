//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBSNSBasicViewController.h"

#import "TBShareManagerProtocol.h"

@class TBSNSAccountItem, UIButton, UIImage;

@interface TBSNSQrCodeViewController : TBSNSBasicViewController <TBShareManagerProtocol>
{
    UIButton *_shareButton;
    UIImage *image;
    UIImage *QRCodeImage;
    TBSNSAccountItem *_accountInfo;
}

@property(retain, nonatomic) TBSNSAccountItem *accountInfo; // @synthesize accountInfo=_accountInfo;
- (void).cxx_destruct;
- (void)shareItemDidSelected:(id)arg1;
- (void)shareBtnClicked:(id)arg1;
- (void)resetShareContent:(id)arg1 type:(int)arg2;
- (BOOL)isNeedReset;
- (void)showQrCodeView;
- (void)setUpObject;
- (void)initNavbar;
- (void)setUpView;
- (void)setupTBToolbarItems;
- (BOOL)needLoadingView;
- (BOOL)needRefresh;
- (BOOL)needNextPage;
- (void)didReceiveMemoryWarning;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (id)initWithAccountItem:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

