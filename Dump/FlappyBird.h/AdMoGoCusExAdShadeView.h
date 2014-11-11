//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, UITapGestureRecognizer;

@interface AdMoGoCusExAdShadeView : UIView <UIGestureRecognizerDelegate>
{
    BOOL m_isSendClkOut;
    BOOL m_isSenfClkIn;
    BOOL m_isLockClick;
    BOOL m_canShowCloseBtn;
    NSString *btnImgName;
    NSString *ccStr;
    UITapGestureRecognizer *allTapRecognizer;
    UITapGestureRecognizer *shadeTapRecognizer;
    UITapGestureRecognizer *buttonTapRecognizer;
    UIView *closeBtn;
    UIView *cBtnView;
    id <AdMoGoCusExAdShadeViewDelegate> delegate;
}

@property(nonatomic) id <AdMoGoCusExAdShadeViewDelegate> delegate; // @synthesize delegate;
- (void)fireShowCloseBtnAction:(id)arg1;
- (id)fireHideCloseBtnAction;
- (void)fireActionOut_InMsgAtPoint:(struct CGPoint)arg1;
- (void)fireActionOutMsgAtPoint:(struct CGPoint)arg1;
- (void)fireActionInMsgAtPoint:(struct CGPoint)arg1;
- (BOOL)fireActionInPoint:(struct CGPoint)arg1 isClickBtn:(BOOL)arg2;
- (void)tapAction:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (struct CGRect)calcActionInRect;
- (struct CGRect)calcBtnLocation:(id)arg1;
- (void)preloadBtnView;
- (void)showShade;
- (void)hideMum;
- (void)showMum;
- (void)addAllTapAction;
- (void)initAction;
- (id)initWithFrame:(struct CGRect)arg1 btnImgName:(id)arg2 ccStr:(id)arg3;
- (void)dealloc;

@end
