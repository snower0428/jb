//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIWebViewDelegate.h"

@class GADObjectPrivate;

@interface GADActivationViewDelegate : NSObject <UIWebViewDelegate>
{
    GADObjectPrivate *adController_;
}

@property(nonatomic) GADObjectPrivate *adController; // @synthesize adController=adController_;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)setActivationOverlayFrameOnNextRunLoop:(struct CGRect)arg1;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;

@end

