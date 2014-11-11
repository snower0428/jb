//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTTableViewCell.h"

@class MTLabel, UIButton, UIImageView, UILabel, UIView;

@interface MTCouponTableViewCell : MTTableViewCell
{
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UILabel *_merchantNameLabel;
    UILabel *_expirationDateLabel;
    UILabel *_summaryLabel;
    UIImageView *_countView;
    UILabel *_countLabel;
    UILabel *_label1;
    MTLabel *_issuerOrderIDLabel;
    UILabel *_label2;
    MTLabel *_mobileLabel;
    UILabel *_label3;
    MTLabel *_codeLabel;
    UIImageView *_QRCodeView;
    UIButton *_button;
    UIView *_backgroundContainerView;
    UIImageView *_topBackgroundShadowView;
    UIImageView *_topHalfBackgroundView;
    UIImageView *_bottomHalfBackgroundView;
    UIImageView *_sideBackgroundShadowView;
    UIImageView *_arrowView;
    UILabel *_movieTicketCountLabel;
    UILabel *_deal3rdPartyRedeemLabel;
}

@property(readonly, nonatomic) UILabel *deal3rdPartyRedeemLabel; // @synthesize deal3rdPartyRedeemLabel=_deal3rdPartyRedeemLabel;
@property(readonly, nonatomic) UILabel *movieTicketCountLabel; // @synthesize movieTicketCountLabel=_movieTicketCountLabel;
@property(readonly, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(readonly, nonatomic) UIImageView *sideBackgroundShadowView; // @synthesize sideBackgroundShadowView=_sideBackgroundShadowView;
@property(readonly, nonatomic) UIImageView *bottomHalfBackgroundView; // @synthesize bottomHalfBackgroundView=_bottomHalfBackgroundView;
@property(readonly, nonatomic) UIImageView *topHalfBackgroundView; // @synthesize topHalfBackgroundView=_topHalfBackgroundView;
@property(readonly, nonatomic) UIImageView *topBackgroundShadowView; // @synthesize topBackgroundShadowView=_topBackgroundShadowView;
@property(readonly, nonatomic) UIView *backgroundContainerView; // @synthesize backgroundContainerView=_backgroundContainerView;
@property(readonly, nonatomic) UIButton *button; // @synthesize button=_button;
@property(readonly, nonatomic) UIImageView *QRCodeView; // @synthesize QRCodeView=_QRCodeView;
@property(readonly, nonatomic) MTLabel *codeLabel; // @synthesize codeLabel=_codeLabel;
@property(readonly, nonatomic) UILabel *label3; // @synthesize label3=_label3;
@property(readonly, nonatomic) MTLabel *mobileLabel; // @synthesize mobileLabel=_mobileLabel;
@property(readonly, nonatomic) UILabel *label2; // @synthesize label2=_label2;
@property(readonly, nonatomic) MTLabel *issuerOrderIDLabel; // @synthesize issuerOrderIDLabel=_issuerOrderIDLabel;
@property(readonly, nonatomic) UILabel *label1; // @synthesize label1=_label1;
@property(readonly, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(readonly, nonatomic) UIImageView *countView; // @synthesize countView=_countView;
@property(readonly, nonatomic) UILabel *summaryLabel; // @synthesize summaryLabel=_summaryLabel;
@property(readonly, nonatomic) UILabel *expirationDateLabel; // @synthesize expirationDateLabel=_expirationDateLabel;
@property(readonly, nonatomic) UILabel *merchantNameLabel; // @synthesize merchantNameLabel=_merchantNameLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
- (void).cxx_destruct;
- (id)didSelectCopyMenu;
- (void)sendmms;
- (void)setItem:(id)arg1;
- (id)init;

@end

