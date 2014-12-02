//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class UIButton, UIImageView, UILabel, UIScrollView, UIView;

__attribute__((visibility("hidden")))
@interface AppInfoController : UIViewController
{
    UIButton *CustomBackButton;
    UIImageView *imageTopView;
    UIView *topView;
    UIImageView *backImageView;
    UIImageView *backImageViewShadow;
    UILabel *titleLabel;
    UILabel *description;
    UIScrollView *myScrollView;
}

@property(retain, nonatomic) UIScrollView *myScrollView; // @synthesize myScrollView;
@property(retain, nonatomic) UILabel *description; // @synthesize description;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel;
@property(retain, nonatomic) UIImageView *backImageViewShadow; // @synthesize backImageViewShadow;
@property(retain, nonatomic) UIImageView *backImageView; // @synthesize backImageView;
@property(retain, nonatomic) UIView *topView; // @synthesize topView;
@property(retain, nonatomic) UIImageView *imageTopView; // @synthesize imageTopView;
@property(retain, nonatomic) UIButton *CustomBackButton; // @synthesize CustomBackButton;
- (void)dealloc;
- (void)relocateSubViews:(int)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)toAppStore:(id)arg1;
- (void)customBack:(id)arg1;
- (void)didReceiveMemoryWarning;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
