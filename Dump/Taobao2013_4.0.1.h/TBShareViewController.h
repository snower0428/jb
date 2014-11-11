//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBSNSBasicViewController.h"

#import "ShareRequestDelegate.h"
#import "TBSNSBasicServiceDelegate.h"
#import "UITextFieldDelegate.h"
#import "UITextViewDelegate.h"

@class HUDActivityView, NSString, UIAlertView, UIButton, UIImageView, UILabel, UITextView, UIView, UTShareContent;

__attribute__((visibility("hidden")))
@interface TBShareViewController : TBSNSBasicViewController <ShareRequestDelegate, UITextFieldDelegate, TBSNSBasicServiceDelegate, UITextViewDelegate>
{
    BOOL _isImageLoadSuccess;
    UITextView *_textView;
    UIButton *_btnBack;
    UIButton *_btnSend;
    UILabel *_labelTxtCnt;
    UIView *_toolBarView;
    UIView *_inputView;
    UIImageView *_inputBgImgView;
    UIImageView *_shareSepLineImageView;
    UIImageView *_shareImageView;
    UIImageView *_shareImageViewBg;
    UILabel *_shareTitleLabel;
    UILabel *_shareURLLabel;
    UILabel *_sharedByLabel;
    HUDActivityView *_hudLoadingView;
    UIAlertView *_alertView;
    UTShareContent *_shareContent;
    NSString *_imageUrlStr;
    int _maxTextSize;
    int _shareType;
    NSString *_defaultText;
    unsigned long long _feedId;
    unsigned long long _snsId;
}

@property(retain, nonatomic) NSString *defaultText; // @synthesize defaultText=_defaultText;
@property(nonatomic) int shareType; // @synthesize shareType=_shareType;
@property(nonatomic) int maxTextSize; // @synthesize maxTextSize=_maxTextSize;
@property(nonatomic) BOOL isImageLoadSuccess; // @synthesize isImageLoadSuccess=_isImageLoadSuccess;
@property(retain, nonatomic) NSString *imageUrlStr; // @synthesize imageUrlStr=_imageUrlStr;
@property(nonatomic) unsigned long long snsId; // @synthesize snsId=_snsId;
@property(nonatomic) unsigned long long feedId; // @synthesize feedId=_feedId;
@property(retain, nonatomic) UTShareContent *shareContent; // @synthesize shareContent=_shareContent;
@property(retain, nonatomic) UIAlertView *alertView; // @synthesize alertView=_alertView;
@property(retain, nonatomic) HUDActivityView *hudLoadingView; // @synthesize hudLoadingView=_hudLoadingView;
@property(retain, nonatomic) UILabel *sharedByLabel; // @synthesize sharedByLabel=_sharedByLabel;
@property(retain, nonatomic) UILabel *shareURLLabel; // @synthesize shareURLLabel=_shareURLLabel;
@property(retain, nonatomic) UILabel *shareTitleLabel; // @synthesize shareTitleLabel=_shareTitleLabel;
@property(retain, nonatomic) UIImageView *shareImageViewBg; // @synthesize shareImageViewBg=_shareImageViewBg;
@property(retain, nonatomic) UIImageView *shareImageView; // @synthesize shareImageView=_shareImageView;
@property(retain, nonatomic) UIImageView *shareSepLineImageView; // @synthesize shareSepLineImageView=_shareSepLineImageView;
@property(retain, nonatomic) UIImageView *inputBgImgView; // @synthesize inputBgImgView=_inputBgImgView;
@property(retain, nonatomic) UIView *inputView; // @synthesize inputView=_inputView;
@property(retain, nonatomic) UIView *toolBarView; // @synthesize toolBarView=_toolBarView;
@property(retain, nonatomic) UILabel *labelTxtCnt; // @synthesize labelTxtCnt=_labelTxtCnt;
@property(retain, nonatomic) UIButton *btnSend; // @synthesize btnSend=_btnSend;
@property(retain, nonatomic) UIButton *btnBack; // @synthesize btnBack=_btnBack;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (void)doSend;
- (void)sendShare;
- (void)shareFailed:(id)arg1 withError:(id)arg2;
- (void)shareCancelledSending:(id)arg1;
- (void)shareFinishedSending:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)showLoading;
- (void)hideLoading;
- (void)showAlert:(id)arg1;
- (void)finishShare:(id)arg1 closeDelay:(double)arg2;
- (void)close;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)sendBtnClicked:(id)arg1;
- (void)goBackToPreViewController;
- (void)backBtnClicked:(id)arg1;
- (void)initSharedBy;
- (void)initShareURL;
- (void)initShareTitle;
- (void)initShareImage;
- (void)keyboardWillShow:(id)arg1;
- (void)setUpView;
- (void)setDataWithContent:(id)arg1 type:(int)arg2 text:(id)arg3;
- (void)clearData;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithShareContent:(id)arg1 type:(int)arg2 text:(id)arg3;

@end

