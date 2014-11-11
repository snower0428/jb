//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface TBShareQrCodeView : UIView
{
    UIView *_maskView;
    UIView *_bgImgView;
    UIView *_headView;
    UIImageView *_headBgView;
    UILabel *_titleLabel;
    UIImageView *_sepLineView;
    UIImageView *_qrCodeImageView;
    UIImageView *_headPicImageView;
    UILabel *_descriptionLabel;
    UIButton *_closeBtn;
}

+ (id)urlEscapedWithUrlString:(id)arg1;
+ (id)urlForBackflow:(id)arg1;
+ (void)showInView:(id)arg1 withURL:(id)arg2 title:(id)arg3 description:(id)arg4 headPic:(id)arg5 orHeadPicURL:(id)arg6;
+ (void)showInView:(id)arg1 withURL:(id)arg2;
+ (void)showInView:(id)arg1 shareContent:(id)arg2;
+ (id)shareInstance;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UIImageView *headPicImageView; // @synthesize headPicImageView=_headPicImageView;
@property(retain, nonatomic) UIImageView *qrCodeImageView; // @synthesize qrCodeImageView=_qrCodeImageView;
@property(retain, nonatomic) UIImageView *sepLineView; // @synthesize sepLineView=_sepLineView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *headBgView; // @synthesize headBgView=_headBgView;
@property(retain, nonatomic) UIView *headView; // @synthesize headView=_headView;
@property(retain, nonatomic) UIView *bgImgView; // @synthesize bgImgView=_bgImgView;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
- (void).cxx_destruct;
- (void)setDataWithURL:(id)arg1 title:(id)arg2 description:(id)arg3 headPic:(id)arg4 orHeadPicURL:(id)arg5;
- (void)setDataWithURL:(id)arg1;
- (void)hide;
- (void)initCloseButton;
- (void)initQrCodeView;
- (void)initHeadView;
- (void)initBgView;
- (void)setupView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

