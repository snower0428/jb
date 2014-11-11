//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class DMLabel, NSDictionary, UIButton, UIImageView, UILabel, UIWebView;

@interface DMPlayerHeadView : UIView
{
    DMLabel *_coutDown;
    UILabel *_prompt;
    NSDictionary *_dictUI;
    UIButton *_closeBtn;
    UIImageView *_duMeng;
    float offX;
    float offY;
    UIWebView *_showWeb;
}

@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIImageView *duMeng; // @synthesize duMeng=_duMeng;
@property(retain, nonatomic) UILabel *prompt; // @synthesize prompt=_prompt;
@property(retain, nonatomic) NSDictionary *dictUI; // @synthesize dictUI=_dictUI;
@property(retain, nonatomic) UIWebView *showWeb; // @synthesize showWeb=_showWeb;
@property(retain, nonatomic) DMLabel *coutDown; // @synthesize coutDown=_coutDown;
- (void)dealloc;
- (void)setCloseBtnAndLogoHiden:(BOOL)arg1;
- (void)setCurrentCountDown:(int)arg1;
- (void)addPromptLabel;
- (void)addCoutDownLabel;
- (BOOL)isVisibleAndOffSet:(id)arg1;
- (void)addCloseButtonWithBundleName:(id)arg1;
- (void)addLogWithBundleName:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 andInformationDict:(id)arg2 andBundleName:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end
