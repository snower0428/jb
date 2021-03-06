//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextViewDelegate.h"
#import "WBEngineDelegate.h"

@class NSString, UIButton, UIImage, UIImageView, UILabel, UITextView, WBEngine;

__attribute__((visibility("hidden")))
@interface WBSendView : UIView <UITextViewDelegate, WBEngineDelegate>
{
    UITextView *contentTextView;
    UIImageView *contentImageView;
    UIButton *sendButton;
    UIButton *closeButton;
    UIButton *clearTextButton;
    UIButton *clearImageButton;
    UILabel *titleLabel;
    UILabel *wordCountLabel;
    UIView *panelView;
    UIImageView *panelImageView;
    NSString *contentText;
    UIImage *contentImage;
    int previousOrientation;
    BOOL isKeyboardShowing;
    WBEngine *engine;
    id <WBSendViewDelegate> delegate;
}

@property(nonatomic) id <WBSendViewDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) UIImage *contentImage; // @synthesize contentImage;
@property(retain, nonatomic) NSString *contentText; // @synthesize contentText;
- (void)engineAuthorizeExpired:(id)arg1;
- (void)engineNotAuthorized:(id)arg1;
- (void)engine:(id)arg1 requestDidFailWithError:(id)arg2;
- (void)engine:(id)arg1 requestDidSucceedWithResult:(id)arg2;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)playerViewClose;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)deviceOrientationDidChange:(id)arg1;
- (void)sendButtonEnable:(BOOL)arg1;
- (void)hide:(BOOL)arg1;
- (void)show:(BOOL)arg1;
- (void)hideAndCleanUp;
- (void)allAnimationsStopped;
- (void)bounceNormalAnimationStopped;
- (void)bounceInAnimationStopped;
- (void)bounceOutAnimationStopped;
- (void)calculateTextLength;
- (int)textLength:(id)arg1;
- (void)removeObservers;
- (void)addObservers;
- (BOOL)shouldRotateToOrientation:(int)arg1;
- (struct CGAffineTransform)transformForOrientation:(int)arg1;
- (void)sizeToFitOrientation:(int)arg1;
- (int)currentOrientation;
- (void)onClearImageButtonTouched:(id)arg1;
- (void)onClearTextButtonTouched:(id)arg1;
- (void)onSendButtonTouched:(id)arg1;
- (void)onCloseButtonTouched:(id)arg1;
- (void)dealloc;
- (id)initWithAppKey:(id)arg1 appSecret:(id)arg2 text:(id)arg3 image:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

