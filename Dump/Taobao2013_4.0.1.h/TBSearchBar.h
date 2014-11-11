//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UISearchBar.h"

@class UIButton, UIImageView, UILabel, UITextField, UIView;

__attribute__((visibility("hidden")))
@interface TBSearchBar : UISearchBar
{
    struct CGRect _originFrame;
    struct CGRect _originRightViewFrame;
    UIButton *_optionMenuButton;
    UITextField *_textField;
    UILabel *_additionalInfoLabel;
    UIImageView *_backgroundWrapView;
    UIView *_backgroundView;
    struct CGRect _originLeftViewFrame;
    id <TBSearchBarDelegate> _tbSearchBarDelegate;
}

@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) id <TBSearchBarDelegate> tbSearchBarDelegate; // @synthesize tbSearchBarDelegate=_tbSearchBarDelegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setsearchBarBackgroundTransparent:(BOOL)arg1;
- (void)setSearchBarBackgroundColor:(id)arg1;
- (void)setSearchBarBackgroundImage:(id)arg1;
- (void)shrinkToOriginFrameWithAnimation:(BOOL)arg1;
- (void)stretchToFullWidth:(BOOL)arg1;
- (void)setSearcTypehHint:(id)arg1;
- (void)showRightHintView:(BOOL)arg1;
- (void)showOptionMenuButtonOnLeft:(BOOL)arg1;
- (void)getBackgroundView;
- (void)optionMenuButtonClicked;
- (void)changeCancelButton;
- (void)showClearButton:(BOOL)arg1;
- (void)getTextField;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setCancelButtonEnable:(BOOL)arg1;
- (void)setTextFieldReturnKeyType:(int)arg1;

@end

