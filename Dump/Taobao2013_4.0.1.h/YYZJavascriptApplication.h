//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, UIWebView;

@interface YYZJavascriptApplication : NSObject
{
    NSMutableDictionary *_serviceContext;
    BOOL _useLog;
    NSMutableDictionary *_jsCallBackContext;
    UIWebView *_webview;
}

+ (BOOL)autoWiredJSBridgeIntoWebView:(id)arg1 withJSBridgeFileName:(id)arg2;
+ (void)executeJs:(id)arg1 withWebView:(id)arg2;
+ (id)getMethod:(id)arg1;
+ (id)getParaemeterFromProtocol:(id)arg1;
+ (id)getResultOnlyWithCode:(id)arg1;
+ (void)callBackForWebView:(id)arg1 withIfId:(id)arg2 withMsg:(id)arg3 withRet:(id)arg4 withFuntion:(id)arg5;
+ (void)callBackForWebView:(id)arg1 withIfId:(id)arg2 withMsg:(id)arg3 withRet:(id)arg4;
+ (void)callBackForWebView:(id)arg1 withIfId:(id)arg2 withMsg:(id)arg3;
+ (BOOL)isJSBridgeProtocol:(id)arg1;
@property(nonatomic) UIWebView *webview; // @synthesize webview=_webview;
- (void).cxx_destruct;
- (id)getHandlerTarget:(id)arg1 withClassName:(id)arg2;
- (void)executeScript:(id)arg1;
- (void)openLog;
- (CDUnknownBlockType)callBackResponeseForJSWithHandlerName:(id)arg1 className:(id)arg2;
- (void)callHandler:(id)arg1 withClassName:(id)arg2 withData:(id)arg3 withReqId:(id)arg4;
- (void)registeHandler:(id)arg1 withClassName:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)releaseWebView;
- (void)bindWebView:(id)arg1;
- (BOOL)isBindedWebView;
- (void)dealloc;
- (id)init;

@end

