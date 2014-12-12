/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DamnVulnerableIOSApp-Structs.h"
#import "UIWebViewDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIView, NSURL, UILabel, NSMutableDictionary, UIButton, UIWebView, UIActivityIndicatorView, NSString;

@interface PFOAuth1FlowDialog : XXUnknownSuperclass <UIWebViewDelegate> {
	NSMutableDictionary* _params;
	NSString* _serverURL;
	NSURL* _loadingURL;
	UIWebView* _webView;
	UIActivityIndicatorView* _spinner;
	UILabel* _titleLabel;
	UIButton* _closeButton;
	int _orientation;
	BOOL _showingKeyboard;
	UIView* _modalBackgroundView;
	id dialogDidComplete;
	id dialogCompleteWithUrl;
	id dialogDidNotCompleteWithUrl;
	id dialogDidNotComplete;
	id dialogDidFailWithError;
	id dialogShouldOpenURLInExternalBrowser;
	NSString* redirectURLPrefix;
}
@property(copy, nonatomic) NSString* title;
@property(retain, nonatomic) NSMutableDictionary* params;
@property(copy, nonatomic) id dialogShouldOpenURLInExternalBrowser;
@property(copy, nonatomic) id dialogDidFailWithError;
@property(copy, nonatomic) id dialogDidNotComplete;
@property(copy, nonatomic) id dialogDidNotCompleteWithUrl;
@property(copy, nonatomic) id dialogCompleteWithUrl;
@property(copy, nonatomic) id dialogDidComplete;
@property(copy, nonatomic) NSString* redirectURLPrefix;
-(void)dialogDidCancel:(id)dialog;
-(void)dialogDidSucceed:(id)dialog;
-(void)dialogWillDisappear;
-(void)dialogWillAppear;
-(void)dismissWithError:(id)error animated:(BOOL)animated;
-(void)dismissWithSuccess:(BOOL)success animated:(BOOL)animated;
-(void)show;
-(void)loadURL:(id)url get:(id)get;
-(void)load;
-(id)initWithURL:(id)url params:(id)params;
-(id)getStringFromUrl:(id)url needle:(id)needle;
-(void)keyboardWillHide:(id)keyboard;
-(void)keyboardWillShow:(id)keyboard;
-(void)deviceOrientationDidChange:(void*)deviceOrientation;
-(void)webView:(id)view didFailLoadWithError:(id)error;
-(void)webViewDidFinishLoad:(id)webView;
-(BOOL)webView:(id)view shouldStartLoadWithRequest:(id)request navigationType:(int)type;
-(void)drawRect:(CGRect)rect;
-(void)dealloc;
-(id)init;
-(void)cancel;
-(void)dismiss:(BOOL)dismiss;
-(void)postDismissCleanup;
-(void)removeObservers;
-(void)addObservers;
-(id)generateURL:(id)url params:(id)params;
-(void)bounce2AnimationStopped;
-(void)bounce1AnimationStopped;
-(void)updateWebOrientation;
-(void)sizeToFitOrientation:(BOOL)fitOrientation;
-(CGAffineTransform)transformForOrientation;
-(BOOL)shouldRotateToOrientation:(int)orientation;
-(void)strokeLines:(CGRect)lines stroke:(const float*)stroke;
-(void)drawRect:(CGRect)rect fill:(const float*)fill radius:(float)radius;
-(void)addRoundedRectToPath:(CGContextRef)path rect:(CGRect)rect radius:(float)radius;
@end
