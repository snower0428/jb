//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIWebViewDelegate.h"

@class AdMoGoWebBrowserController, NSString, UIWebView;

@interface AdfonicFullScreenViewController : UIViewController <UIWebViewDelegate>
{
    UIWebView *webView;
    AdMoGoWebBrowserController *webBrowserController;
    NSString *_html;
    id <AdAdfonicFullScreenDelegate> _adFullScreendelegate;
}

@property(nonatomic) id <AdAdfonicFullScreenDelegate> adFullScreendelegate; // @synthesize adFullScreendelegate=_adFullScreendelegate;
@property(retain, nonatomic) NSString *html; // @synthesize html=_html;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)showWebBrowser:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (void)dealloc;
- (void)closeButtonFunction;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
