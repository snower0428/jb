//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class TBCustomLabel, UIImageView, UILabel;

@interface OrderListHeaderView : UIView
{
    UIImageView *_backgroundImageView;
    UILabel *_receiverNameTipLabel;
    TBCustomLabel *_receiverNameLabel;
    TBCustomLabel *_receiverPhoneLabel;
    TBCustomLabel *_receiverAddressLabel;
}

+ (id)orderListHeaderView;
@property(nonatomic) TBCustomLabel *receiverAddressLabel; // @synthesize receiverAddressLabel=_receiverAddressLabel;
@property(nonatomic) TBCustomLabel *receiverPhoneLabel; // @synthesize receiverPhoneLabel=_receiverPhoneLabel;
@property(nonatomic) TBCustomLabel *receiverNameLabel; // @synthesize receiverNameLabel=_receiverNameLabel;
@property(nonatomic) UILabel *receiverNameTipLabel; // @synthesize receiverNameTipLabel=_receiverNameTipLabel;
@property(nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

