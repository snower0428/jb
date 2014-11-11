//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "HPGrowingTextViewDelegate.h"
#import "TBEmoticonSelectionViewControllerDelegate.h"
#import "TBSNSCommentSelectViewDelegate.h"
#import "UIActionSheetDelegate.h"

@class HPGrowingTextView, NSArray, NSString, NSTimer, TBEmoticonSelectionViewController, TBIKSelectPhoto, TBLoadingView, TBSNSCommentSelectView, TBSNSFeedCommentCommodityItem, TBSNSImageUploadService, TBUploadService, UIButton, UIImageView, UILabel;

@interface TBSNSInputBar : UIView <TBEmoticonSelectionViewControllerDelegate, TBSNSCommentSelectViewDelegate, UIActionSheetDelegate, HPGrowingTextViewDelegate>
{
    int _inputSwitchButtonType;
    int _keyboardSwitchButtonType;
    int _keyboardStatus;
    int _currentAnimation;
    int _imageUploadStatus;
    UIView *_textInputViewContainer;
    TBSNSCommentSelectView *_commentSelectView;
    UIButton *_inputSwitchButton;
    UIButton *_keyboardSwitchButton;
    UIImageView *_inputFieldBackgroundView;
    UIImageView *_toolbarView;
    TBUploadService *_uploadService;
    TBSNSImageUploadService *upService;
    BOOL _isViewDidUnload;
    BOOL _isImageAndTextNeedSend;
    HPGrowingTextView *_textView;
    id _inputBarDelegate;
    CDUnknownBlockType _keyBoardStatusBlock;
    UIButton *_emotionButton;
    UIButton *_multiButton;
    UIImageView *_pictureImageView;
    UIImageView *_commdityImageView;
    UIButton *_imageButton;
    UILabel *_textPlaceHolder;
    TBEmoticonSelectionViewController *_emoticonSelectionViewController;
    UIImageView *_entryImageView;
    UIImageView *_btnBgImageView;
    int _commentContentType;
    NSString *_itemExtSymbol;
    NSString *_imageName;
    TBIKSelectPhoto *_photo;
    NSArray *_photos;
    TBSNSFeedCommentCommodityItem *_commentCommodityItem;
    NSString *_text;
    NSString *_pageName;
    int _commentScene;
    NSTimer *_levelTimer;
    TBLoadingView *_buttonLoadingIndicator;
    int _picShowStauts;
    double _timeData;
}

+ (id)inpuBarWithFrame:(struct CGRect)arg1;
@property(nonatomic) double timeData; // @synthesize timeData=_timeData;
@property(nonatomic) int picShowStauts; // @synthesize picShowStauts=_picShowStauts;
@property(retain, nonatomic) TBLoadingView *buttonLoadingIndicator; // @synthesize buttonLoadingIndicator=_buttonLoadingIndicator;
@property(retain, nonatomic) NSTimer *levelTimer; // @synthesize levelTimer=_levelTimer;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(retain, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) BOOL isImageAndTextNeedSend; // @synthesize isImageAndTextNeedSend=_isImageAndTextNeedSend;
@property(nonatomic) int imageUploadStatus; // @synthesize imageUploadStatus=_imageUploadStatus;
@property(retain, nonatomic) TBSNSFeedCommentCommodityItem *commentCommodityItem; // @synthesize commentCommodityItem=_commentCommodityItem;
@property(retain, nonatomic) NSArray *photos; // @synthesize photos=_photos;
@property(retain, nonatomic) TBIKSelectPhoto *photo; // @synthesize photo=_photo;
@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(retain, nonatomic) NSString *itemExtSymbol; // @synthesize itemExtSymbol=_itemExtSymbol;
@property(nonatomic) int commentContentType; // @synthesize commentContentType=_commentContentType;
@property(retain, nonatomic) TBSNSCommentSelectView *commentSelectView; // @synthesize commentSelectView=_commentSelectView;
@property(retain, nonatomic) UIImageView *btnBgImageView; // @synthesize btnBgImageView=_btnBgImageView;
@property(retain, nonatomic) UIImageView *entryImageView; // @synthesize entryImageView=_entryImageView;
@property(readonly, nonatomic) TBEmoticonSelectionViewController *emoticonSelectionViewController; // @synthesize emoticonSelectionViewController=_emoticonSelectionViewController;
@property(retain, nonatomic) UILabel *textPlaceHolder; // @synthesize textPlaceHolder=_textPlaceHolder;
@property(retain, nonatomic) UIButton *imageButton; // @synthesize imageButton=_imageButton;
@property(retain, nonatomic) UIImageView *commdityImageView; // @synthesize commdityImageView=_commdityImageView;
@property(retain, nonatomic) UIImageView *pictureImageView; // @synthesize pictureImageView=_pictureImageView;
@property(retain, nonatomic) UIButton *multiButton; // @synthesize multiButton=_multiButton;
@property(retain, nonatomic) UIButton *emotionButton; // @synthesize emotionButton=_emotionButton;
@property(copy, nonatomic) CDUnknownBlockType keyBoardStatusBlock; // @synthesize keyBoardStatusBlock=_keyBoardStatusBlock;
@property(nonatomic) BOOL isViewDidUnload; // @synthesize isViewDidUnload=_isViewDidUnload;
@property(retain, nonatomic) UIImageView *toolbarView; // @synthesize toolbarView=_toolbarView;
@property(retain, nonatomic) UIView *textInputViewContainer; // @synthesize textInputViewContainer=_textInputViewContainer;
@property(nonatomic) id inputBarDelegate; // @synthesize inputBarDelegate=_inputBarDelegate;
@property(retain, nonatomic) HPGrowingTextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)clearService;
- (void)destroy;
- (void)userLogEvent;
- (void)cancelLogin;
- (void)onUserLogIn;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)showAlert:(id)arg1;
- (void)changeShowStatus:(id)arg1;
- (void)uploadImageToRemote;
- (void)deleteImageAtLocal:(id)arg1;
- (BOOL)isNetReachable;
- (void)uploadImageToRemote:(id)arg1;
- (void)upLoadImageAndText;
- (void)getItemExtSymbolFromImageName;
- (void)selectView:(id)arg1 didSelectMenuWithType:(int)arg2;
- (void)emoticonSelectionViewController:(id)arg1 didSelectEmoticon:(id)arg2;
- (void)growingTextViewDidChange:(id)arg1;
- (BOOL)growingTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)growingTextView:(id)arg1 willChangeHeight:(float)arg2;
- (void)inputSwitchActionWithNoAnimaton;
- (void)forceCloseKeyboardWithNOAnimation;
- (void)closeKeyboardAreaWithNOAnimation;
- (void)closeKeyboardArea;
- (void)resignTextView;
- (void)hide;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)show;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)showEmotionView:(BOOL)arg1;
- (void)resetData;
- (void)clearAllData;
- (void)clearImageView;
- (void)hideImageView;
- (void)showImageView;
- (void)setPictureImageViewShow:(BOOL)arg1;
- (void)imageButtonClicked:(id)arg1;
- (void)_keyboardSwitchAction:(id)arg1;
- (void)_inputSwitchAction:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)_refreshKeyboardSwitchButton;
- (void)_refreshInputSwitchButton;
- (void)setupView;

@end

