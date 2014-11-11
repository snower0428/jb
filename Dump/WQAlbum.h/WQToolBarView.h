//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class NSArray, UIButton, WQArrowView;

@interface WQToolBarView : UIView <UIGestureRecognizerDelegate>
{
    UIButton *controllBtn;
    UIView *container;
    WQArrowView *arrowView;
    BOOL isHide;
    id <WQToolBarDelegate> _delegate;
    NSArray *_toolBarButtons;
}

+ (id)makeToolBarView;
@property(retain, nonatomic) NSArray *toolBarButtons; // @synthesize toolBarButtons=_toolBarButtons;
@property(retain, nonatomic) id <WQToolBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)guestrueRecognizer:(id)arg1;
- (void)notifyToolBarWithInfo:(id)arg1;
- (void)allButtonEnable:(BOOL)arg1;
- (void)updateArrowViewWithRect:(struct CGRect)arg1 andColor:(id)arg2;
- (void)toolBarHide:(id)arg1;
- (void)hideAllToolBar;
- (id)initWithFrame:(struct CGRect)arg1;

@end
