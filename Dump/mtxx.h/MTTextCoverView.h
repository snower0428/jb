//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

#import "MTTextViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class MTTextView, UIButton, UIColor, UIView;

__attribute__((visibility("hidden")))
@interface MTTextCoverView : UIImageView <MTTextViewDelegate, UIGestureRecognizerDelegate>
{
    float _lastPointSize;
    float _currentScale;
    float _nonBubbleScale;
    UIButton *_fingerButton;
    MTTextView *_textCoverLabel;
    UIView *_borderView;
    BOOL stateChange;
    struct CGRect imageContentFrame;
    float imageContentScaleFactor;
    struct CGPoint minControlPoint;
    struct CGPoint maxControlPoint;
    id <TextCoverViewDelegate> _delegate;
    float _minimumZoomScale;
    float _maximumZoomScale;
    UIColor *_textColor;
    UIColor *_shadowColor;
    struct CGRect _originalBubbleFrame;
    struct CGRect _originalFrame;
    struct CGRect _textRect;
}

@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) struct CGRect textRect; // @synthesize textRect=_textRect;
@property(nonatomic) struct CGRect originalFrame; // @synthesize originalFrame=_originalFrame;
@property(nonatomic) float maximumZoomScale; // @synthesize maximumZoomScale=_maximumZoomScale;
@property(nonatomic) float minimumZoomScale; // @synthesize minimumZoomScale=_minimumZoomScale;
@property(nonatomic) struct CGRect originalBubbleFrame; // @synthesize originalBubbleFrame=_originalBubbleFrame;
@property(nonatomic) __weak id <TextCoverViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didChangeOrientation;
- (id)snapshoot;
- (struct CGRect)originalFrameInSuperView;
@property(readonly, nonatomic) UIImageView *borderView;
- (void)adjustsFingerButtonFrame;
- (BOOL)fingerButtonPointIsInView;
- (void)actionTouch:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(readonly, nonatomic) UIButton *fingerButton;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)setBounds:(struct CGRect)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)adjustsFontSizeWithMaxSize:(float)arg1;
- (void)textViewDidChange:(id)arg1;
@property(readonly, nonatomic) MTTextView *textCoverLabel;
- (void)actionRotate:(id)arg1;
- (void)adjustsBoundsWithRect:(struct CGRect)arg1 scale:(float)arg2;
- (void)recoverBorderState;
- (void)actionOneFingerRotating:(id)arg1;
- (void)actionScale:(id)arg1;
- (void)actionPan:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)calculateImageScale;
- (void)didMoveToSuperview;
- (void)adjustsSubviewSizeToFitBounds;
- (void)setBubbleImage:(id)arg1 textRect:(struct CGRect)arg2 textColor:(id)arg3 shadowColor:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)initizlize;

@end
