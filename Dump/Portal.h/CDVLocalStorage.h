/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIWebViewDelegate.h"
#import "CDVPlugin.h"

@class NSMutableArray;

@interface CDVLocalStorage : CDVPlugin <UIWebViewDelegate> {
@private
	NSMutableArray* backupInfo;
	id<UIWebViewDelegate> webviewDelegate;
}
@property(assign, nonatomic) id<UIWebViewDelegate> webviewDelegate;
@property(retain, nonatomic) NSMutableArray* backupInfo;
+(void)__verifyAndFixDatabaseLocations;
-(void)dealloc;
-(BOOL)webView:(id)view shouldStartLoadWithRequest:(id)request navigationType:(int)type;
-(void)webView:(id)view didFailLoadWithError:(id)error;
-(void)webViewDidFinishLoad:(id)webView;
-(void)webViewDidStartLoad:(id)webView;
-(void)onAppTerminate;
-(void)onResignActive;
-(void)verifyAndFixDatabaseLocations:(id)locations withDict:(id)dict;
-(void)restore:(id)restore withDict:(id)dict;
-(void)backup:(id)backup withDict:(id)dict;
-(BOOL)copyFrom:(id)from to:(id)to error:(id*)error;
-(id)initWithWebView:(id)webView;
@end

