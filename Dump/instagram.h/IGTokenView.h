//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIKeyInput.h"

@class IGProfilePictureImageView, IGUser, NSString;

@interface IGTokenView : UIView <UIKeyInput>
{
    IGUser *_token;
    id <IGTokenViewDelegate> _delegate;
    IGProfilePictureImageView *_profilePictureView;
}

@property(retain, nonatomic) IGProfilePictureImageView *profilePictureView; // @synthesize profilePictureView=_profilePictureView;
@property(nonatomic) __weak id <IGTokenViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IGUser *token; // @synthesize token=_token;
- (void).cxx_destruct;
- (void)deleteBackward;
- (void)insertText:(id)arg1;
- (BOOL)hasText;
- (void)setSelected:(BOOL)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (id)initWithToken:(id)arg1;

// Remaining properties
@property(nonatomic) int autocapitalizationType;
@property(nonatomic) int autocorrectionType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) BOOL enablesReturnKeyAutomatically;
@property(readonly) unsigned int hash;
@property(nonatomic) int keyboardAppearance;
@property(nonatomic) int keyboardType;
@property(nonatomic) int returnKeyType;
@property(nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property(nonatomic) int spellCheckingType;
@property(readonly) Class superclass;

@end
