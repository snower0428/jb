//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GADWebViewDelegate.h"

@class GADObjectPrivate;

__attribute__((visibility("hidden")))
@interface GADBannerWebViewDelegate : GADWebViewDelegate
{
    GADObjectPrivate *private_;
}

@property(readonly, nonatomic) GADObjectPrivate *objectPrivate; // @synthesize objectPrivate=private_;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (BOOL)isClick:(int)arg1;
- (void)processAppEvent:(id)arg1;
- (void)dealloc;
- (id)initWithObjectPrivate:(id)arg1;

@end

