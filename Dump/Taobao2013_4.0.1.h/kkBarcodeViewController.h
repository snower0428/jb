//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "kkStyleViewController.h"

@class HTTPImageView, NSString, UIButton, UILabel, UIView;

@interface kkBarcodeViewController : kkStyleViewController
{
    float _onlinePrice;
    float _offlinePrice;
    UIView *_productView;
    HTTPImageView *_productImageV;
    NSString *_titleStr;
    NSString *_detail;
    NSString *_saveStr;
    NSString *_pic;
    UILabel *_huoyanADLabel;
    UIButton *_huoyanButton;
}

@property(retain, nonatomic) UIButton *huoyanButton; // @synthesize huoyanButton=_huoyanButton;
@property(retain, nonatomic) UILabel *huoyanADLabel; // @synthesize huoyanADLabel=_huoyanADLabel;
@property(copy, nonatomic) NSString *pic; // @synthesize pic=_pic;
@property(copy, nonatomic) NSString *saveStr; // @synthesize saveStr=_saveStr;
@property(copy, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(copy, nonatomic) NSString *titleStr; // @synthesize titleStr=_titleStr;
@property(retain, nonatomic) HTTPImageView *productImageV; // @synthesize productImageV=_productImageV;
@property(retain, nonatomic) UIView *productView; // @synthesize productView=_productView;
- (BOOL)backPanGestureRecoginzed;
- (void)dealloc;
- (void)touchTaobaoButton;
- (void)gotoHuoyan:(id)arg1;
- (void)updateData;
- (BOOL)parseDictToUI;
- (void)viewDidLoad;
- (void)viewWillShowup;
- (void)onBarcode;

@end
