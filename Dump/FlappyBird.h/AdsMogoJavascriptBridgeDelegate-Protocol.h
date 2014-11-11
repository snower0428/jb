//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSDate, NSDictionary, NSString, NSURL, UIColor, UIWebView;

@protocol AdsMogoJavascriptBridgeDelegate
@property(readonly, nonatomic) UIWebView *webView;
- (struct CGRect)rectAccordingToOrientation:(struct CGRect)arg1;
- (void)rotateExpandedWindowsToCurrentOrientation;
- (struct CGRect)getAdFrameInWindowCoordinates;
- (void)sendProperties:(NSDictionary *)arg1 forWebView:(UIWebView *)arg2;
- (BOOL)processServiceCommand:(NSDictionary *)arg1 forWebView:(UIWebView *)arg2;
- (void)enableService:(NSString *)arg1 enable:(BOOL)arg2;
- (void)addEventToCalenderForStartDate:(NSDate *)arg1 withEndDate:(NSDate *)arg2 withTitle:(NSString *)arg3 withBody:(NSString *)arg4 withLocation:(NSString *)arg5;
- (void)placeCallTo:(NSString *)arg1;
- (void)storePicture:(NSString *)arg1;
- (void)sendSMSTo:(NSString *)arg1 withBody:(NSString *)arg2;
- (void)sendEMailTo:(NSString *)arg1 withSubject:(NSString *)arg2 withBody:(NSString *)arg3 isHTML:(BOOL)arg4;
- (void)expandTo:(struct CGRect)arg1 withURL:(NSURL *)arg2 inWebView:(UIWebView *)arg3 blockingColor:(UIColor *)arg4 blockingOpacity:(float)arg5 allowOrientationChange:(BOOL)arg6 useCustomClose:(BOOL)arg7;
- (void)resizeToWidth:(float)arg1 height:(float)arg2 inWebView:(UIWebView *)arg3;
- (void)showVideo:(UIWebView *)arg1 withId:(NSString *)arg2;
- (void)playVideo:(UIWebView *)arg1 withUrlString:(NSString *)arg2 audioMuted:(BOOL)arg3 autoPlay:(BOOL)arg4 controls:(BOOL)arg5 loop:(BOOL)arg6 position:(int [4])arg7 startStyle:(NSString *)arg8 stopStyle:(NSString *)arg9;
- (void)playAudio:(UIWebView *)arg1 withUrlString:(NSString *)arg2 autoPlay:(BOOL)arg3 controls:(BOOL)arg4 loop:(BOOL)arg5 position:(BOOL)arg6 startStyle:(NSString *)arg7 stopStyle:(NSString *)arg8;
- (void)pauseVideo:(UIWebView *)arg1 withId:(NSString *)arg2;
- (void)openMap:(UIWebView *)arg1 withUrlString:(NSString *)arg2 andFullScreen:(BOOL)arg3;
- (void)openBrowser:(UIWebView *)arg1 withUrlString:(NSString *)arg2 enableBack:(BOOL)arg3 enableForward:(BOOL)arg4 enableRefresh:(BOOL)arg5;
- (void)closeAd:(UIWebView *)arg1;
- (void)hideAdVideo:(UIWebView *)arg1;
- (void)hideAd:(UIWebView *)arg1;
- (void)showAd:(UIWebView *)arg1;
- (NSString *)usingWebView:(UIWebView *)arg1 executeJavascript:(NSString *)arg2;
- (void)adIsAdsMogoEnabledForWebView:(UIWebView *)arg1;
@end

