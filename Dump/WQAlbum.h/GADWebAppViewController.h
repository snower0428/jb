//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GADViewController.h"

@class GADWebView;

@interface GADWebAppViewController : GADViewController
{
}

- (void)loadHTML:(id)arg1 baseURL:(id)arg2;
- (void)load:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)dealloc;
- (id)initWithWebView:(id)arg1;
- (id)init;
- (void)relinquishScreen;
- (BOOL)shouldDismissOnAppClose;
@property(nonatomic) BOOL useCustomClose;
@property(nonatomic) BOOL allowFileAccess;
- (void)setWebView:(id)arg1;
@property(readonly, nonatomic) GADWebView *webView;
- (id)vars;
- (id)createPrivateData;

@end
