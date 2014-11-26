//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGSimpleButton, UIActivityIndicatorView;

@interface IGPendingRequestView : UIView
{
    CDUnknownBlockType _acceptBlock;
    IGSimpleButton *_approveButton;
    IGSimpleButton *_ignoreButton;
    UIActivityIndicatorView *_spinner;
}

@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(retain, nonatomic) IGSimpleButton *ignoreButton; // @synthesize ignoreButton=_ignoreButton;
@property(retain, nonatomic) IGSimpleButton *approveButton; // @synthesize approveButton=_approveButton;
@property(copy, nonatomic) CDUnknownBlockType acceptBlock; // @synthesize acceptBlock=_acceptBlock;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)onIgnoreButtonTapped;
- (void)onApproveButtonTapped;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end
