/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "UIWebViewDelegate.h"

@class UIView, UIActivityIndicatorView, UIWebView, UIButton, NSString, NSDictionary;
@protocol SinaWeiboAuthorizeViewDelegate;

@interface SinaWeiboAuthorizeView : XXUnknownSuperclass <UIWebViewDelegate> {
	UIWebView* webView;
	UIButton* closeButton;
	UIView* modalBackgroundView;
	UIActivityIndicatorView* indicatorView;
	int previousOrientation;
	id<SinaWeiboAuthorizeViewDelegate> delegate;
	NSString* appRedirectURI;
	NSDictionary* authParams;
}
@property(assign, nonatomic) id<SinaWeiboAuthorizeViewDelegate> delegate;
-(BOOL)webView:(id)view shouldStartLoadWithRequest:(id)request navigationType:(int)type;
-(void)webView:(id)view didFailLoadWithError:(id)error;
-(void)webViewDidFinishLoad:(id)webView;
-(void)cancel;
-(void)hide;
-(void)_hide;
-(void)show;
-(void)showWebView;
-(void)load;
-(void)hideIndicator;
-(void)showIndicator;
-(void)removeObservers;
-(void)addObservers;
-(void)bounce2AnimationStopped;
-(void)bounce1AnimationStopped;
-(void)deviceOrientationDidChange:(id)deviceOrientation;
-(void)updateWebOrientation;
-(void)sizeToFitOrientation:(BOOL)fitOrientation;
-(CGAffineTransform)transformForOrientation;
-(BOOL)shouldRotateToOrientation:(int)orientation;
-(id)initWithAuthParams:(id)authParams delegate:(id)delegate;
-(void)dealloc;
-(id)init;
-(void)drawRect:(CGRect)rect;
-(void)strokeLines:(CGRect)lines stroke:(const float*)stroke;
-(void)drawRect:(CGRect)rect fill:(const float*)fill radius:(float)radius;
-(void)addRoundedRectToPath:(CGContextRef)path rect:(CGRect)rect radius:(float)radius;
@end
