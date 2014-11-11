//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIWebViewDelegate.h"

@class NSString, NSURL, UIWebView;

@interface WapPayViewController : UIViewController <UIWebViewDelegate>
{
    CDUnknownBlockType _callbackBlock;
    NSString *_urlStr;
    NSURL *_retryUrl;
    NSString *_backUrl;
    NSString *_backStr;
    UIWebView *_wapPayView;
}

@property(retain, nonatomic) UIWebView *wapPayView; // @synthesize wapPayView=_wapPayView;
@property(copy, nonatomic) NSString *backStr; // @synthesize backStr=_backStr;
@property(copy, nonatomic) NSString *backUrl; // @synthesize backUrl=_backUrl;
@property(copy, nonatomic) NSURL *retryUrl; // @synthesize retryUrl=_retryUrl;
@property(copy, nonatomic) NSString *urlStr; // @synthesize urlStr=_urlStr;
@property(copy, nonatomic) CDUnknownBlockType callbackBlock; // @synthesize callbackBlock=_callbackBlock;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)exit;
- (void)webViewDidFinishLoad:(id)arg1;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (void)viewDidLoad;
- (void)refresh:(id)arg1;
- (void)back:(id)arg1;
- (void)initWapCashier;
- (id)initWithUrl:(id)arg1 Callback:(CDUnknownBlockType)arg2;

@end
