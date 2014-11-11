//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class MKNetworkOperation, MultiAwardInfo, UIButton, UIImageView, UILabel, UIView;

@interface CPKuaiSanNoticePopViewController : UIViewController
{
    UIButton *_dismissBtn;
    UIImageView *_bgView;
    id <KuaiSanNoticeViewDismissDelegate> delegate;
    MKNetworkOperation *_currencyOperation;
    MultiAwardInfo *_multiAwardInfo;
    UIImageView *_timeLine;
    UILabel *_loadingHintLabel;
    UIView *_padView;
    id <KuaiSanNoticeViewDismissDelegate> _delegate;
}

@property(nonatomic) MKNetworkOperation *currencyOperation; // @synthesize currencyOperation=_currencyOperation;
@property(retain, nonatomic) id <KuaiSanNoticeViewDismissDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)stopNetRequset;
- (void)viewDidAppear:(BOOL)arg1;
- (void)loadDataSuccess;
- (void)getLastestLuckyNumsList;
- (void)dissmissSelfFromSuperView;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
