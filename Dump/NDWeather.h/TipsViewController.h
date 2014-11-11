//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "TipsControllerProtocol.h"
#import "TipsViewControllerInterface.h"
#import "TipsViewDataSource.h"
#import "TipsViewDelegate.h"

@class NSMutableArray, NSMutableDictionary, UIButton, UIImageView, UIView;

__attribute__((visibility("hidden")))
@interface TipsViewController : UIViewController <TipsControllerProtocol, TipsViewDelegate, TipsViewDataSource, TipsViewControllerInterface>
{
    NSMutableDictionary *models;
    NSMutableArray *tipsViews;
    UIView *contentView;
    UIImageView *backgroundImage;
    UIImageView *bottomShadow;
    UIButton *backgroundButton;
}

+ (id)sharedController;
- (void)closeClick:(id)arg1;
- (void)animationToFitSize;
- (void)animationToHideView;
- (void)hideView:(id)arg1;
- (void)showView:(id)arg1;
- (void)receiveHideTip:(id)arg1;
- (void)receiveShowTip:(id)arg1;
- (void)tipsButtonClick:(id)arg1;
- (struct CGRect)buttonFrame:(id)arg1;
- (struct CGRect)contentFrame:(id)arg1;
- (struct CGRect)titleFrame:(id)arg1;
- (struct CGRect)imageFrame:(id)arg1;
- (id)buttonTitle:(id)arg1;
- (id)content:(id)arg1;
- (id)title:(id)arg1;
- (id)image:(id)arg1;
- (void)setupContentView;
- (void)dealloc;
- (id)init;

@end
