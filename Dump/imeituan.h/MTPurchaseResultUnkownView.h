//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MTPurchaseLabelCell, NSString, UIButton, UILabel;

@interface MTPurchaseResultUnkownView : UIView
{
    MTPurchaseLabelCell *_titleLabelCell;
    MTPurchaseLabelCell *_orderIDLabelCell;
    NSString *_title;
    int _orderID;
    UIButton *_refreshResultButton;
    UIButton *_backToDealButton;
    UILabel *_problemHyperText;
    UILabel *_telHyerText;
}

@property(readonly, nonatomic) UILabel *telHyerText; // @synthesize telHyerText=_telHyerText;
@property(readonly, nonatomic) UILabel *problemHyperText; // @synthesize problemHyperText=_problemHyperText;
@property(readonly, nonatomic) UIButton *backToDealButton; // @synthesize backToDealButton=_backToDealButton;
@property(readonly, nonatomic) UIButton *refreshResultButton; // @synthesize refreshResultButton=_refreshResultButton;
@property(nonatomic) int orderID; // @synthesize orderID=_orderID;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

