//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseViewController.h"

@class NSString, UIScrollView;

__attribute__((visibility("hidden")))
@interface UIVCAlmanacResult : BaseViewController
{
    UIScrollView *scrollView;
    int height;
    int nCurYear;
    int nCurMonth;
    int nCurDay;
    NSString *keyword;
    NSString *keyword1;
}

@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView;
- (void)setupContentView;
- (void)setupNavigationBar;
- (void)setupBackground;
- (void)dealloc;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)showList:(id)arg1;
- (void)showMarry:(int)arg1:(int)arg2:(id)arg3:(id)arg4;
- (void)show:(int)arg1:(int)arg2:(int)arg3:(id)arg4;
- (void)AddItem:(id)arg1:(id)arg2:(int)arg3:(id)arg4;
- (void)AddTitle:(id)arg1:(id)arg2;
- (void)btnTextClick:(id)arg1;
- (void)btnTitleClick:(id)arg1;
- (int)getHeightForStr:(id)arg1;
- (void)returnBtnPress:(id)arg1;

@end
