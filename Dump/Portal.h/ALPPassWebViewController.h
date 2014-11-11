/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DTViewController.h"
#import "UIWebViewDelegate.h"

@class NSString, ALPNetErrorView, UIWebView;

@interface ALPPassWebViewController : DTViewController <UIWebViewDelegate> {
@private
	BOOL _isLoadingTrendPage;
	BOOL _isLoading;
	UIWebView* _webView;
	NSString* _URL;
	ALPNetErrorView* _netErrorView;
}
@property(assign, nonatomic) BOOL isLoading;
@property(assign, nonatomic) BOOL isLoadingTrendPage;
@property(retain, nonatomic) ALPNetErrorView* netErrorView;
@property(copy, nonatomic) NSString* URL;
@property(retain, nonatomic) UIWebView* webView;
-(void).cxx_destruct;
-(void)webViewDidStartLoad:(id)webView;
-(void)webViewDidFinishLoad:(id)webView;
-(BOOL)webView:(id)view shouldStartLoadWithRequest:(id)request navigationType:(int)type;
-(void)webView:(id)view didFailLoadWithError:(id)error;
-(void)didReceiveMemoryWarning;
-(void)reload;
-(void)loadPage;
-(void)viewWillDestroy;
-(BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(id)initWithURL:(id)url title:(id)title;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
@end

