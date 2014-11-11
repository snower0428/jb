//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTVouchersVC.h"

#import "UITableViewDelegate.h"

@class MTTextField, NSArray, NSString, UIImage, UIImageView, UILabel, UIView;

@interface MTUseVoucherViewController : MTVouchersVC <UITableViewDelegate>
{
    CDUnknownBlockType _completionBlock;
    BOOL _hasSelectedVoucher;
    BOOL _isVoucher;
    UILabel *_tipsLabel;
    float _totalFee;
    int _orderID;
    MTTextField *_codeField;
    NSArray *_vouchers;
    UIView *_tipsView;
    NSString *_voucherCode;
    NSString *_passwordCode;
    UIImageView *_tipsBackgroundImageView;
    UIImage *_vouchersTipsBlackBackgroundImage;
    UIImage *_vouchersTipsGreyBackgroundImage;
}

@property(retain, nonatomic) UIImage *vouchersTipsGreyBackgroundImage; // @synthesize vouchersTipsGreyBackgroundImage=_vouchersTipsGreyBackgroundImage;
@property(retain, nonatomic) UIImage *vouchersTipsBlackBackgroundImage; // @synthesize vouchersTipsBlackBackgroundImage=_vouchersTipsBlackBackgroundImage;
@property(retain, nonatomic) UIImageView *tipsBackgroundImageView; // @synthesize tipsBackgroundImageView=_tipsBackgroundImageView;
@property(copy, nonatomic) NSString *passwordCode; // @synthesize passwordCode=_passwordCode;
@property(copy, nonatomic) NSString *voucherCode; // @synthesize voucherCode=_voucherCode;
@property(retain, nonatomic) UIView *tipsView; // @synthesize tipsView=_tipsView;
@property(retain, nonatomic) NSArray *vouchers; // @synthesize vouchers=_vouchers;
@property(retain, nonatomic) MTTextField *codeField; // @synthesize codeField=_codeField;
@property(readonly, nonatomic) int orderID; // @synthesize orderID=_orderID;
@property(readonly, nonatomic) float totalFee; // @synthesize totalFee=_totalFee;
- (void).cxx_destruct;
- (void)setupTipsView;
- (void)didClickButton;
- (void)setCompletionBlock:(CDUnknownBlockType)arg1;
- (void)refresh;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)didClickHowToGetVoucherButton;
- (void)verifyCardCode:(id)arg1 isVoucher:(BOOL)arg2;
- (void)didClickCommitButton;
- (void)loadTableView;
- (void)setupHeaderView;
- (id)tipsLabel;
- (void)viewDidLoad;
- (id)initWithOrderID:(int)arg1 totalFee:(float)arg2 voucherCode:(id)arg3 isVoucher:(BOOL)arg4;

@end
