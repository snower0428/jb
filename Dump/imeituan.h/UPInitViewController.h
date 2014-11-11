//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UPBaseViewController.h"

@class CAGradientLayer, NSString, UIActivityIndicatorView, UIImageView, UILabel, UIView;

@interface UPInitViewController : UPBaseViewController
{
    BOOL mNeedUpgrade;
    NSString *mUpgradeUrl;
    UIImageView *_logoView;
    UILabel *_version;
    UILabel *_copyRight;
    UIView *_backGroundView;
    CAGradientLayer *_backGroundLayer;
    UIActivityIndicatorView *_loadingView;
}

@property(retain, nonatomic) NSString *mUpgradeUrl; // @synthesize mUpgradeUrl;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)comunicateToUPMPDidFailWithErrorType:(int)arg1 error:(id)arg2;
- (void)comunicateToUPMPDidSucceedWithEvent:(int)arg1;
- (void)pushViewControllerToOrderViewController;
- (void)buttonCancelClicked;
- (void)buttonOKClicked;
- (void)postInitMessage;
- (void)addSubViews;
- (void)setBgColors:(id)arg1;
- (void)viewDidUnload;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
