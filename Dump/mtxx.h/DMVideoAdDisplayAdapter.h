//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DMHtmlAdDisplayAdapter.h"

#import "DMVideoAdViewDelegate.h"
#import "NSURLConnectionDataDelegate.h"
#import "NSURLConnectionDelegate.h"

@class DMRidModel, DMVideoAdView, NSDictionary, NSMutableArray;

@interface DMVideoAdDisplayAdapter : DMHtmlAdDisplayAdapter <DMVideoAdViewDelegate, NSURLConnectionDelegate, NSURLConnectionDataDelegate>
{
    DMVideoAdView *_videoView;
    BOOL isPreload;
    int _videoWidth;
    int _videoHeight;
    NSDictionary *_impDict;
    DMRidModel *_model;
    NSMutableArray *_timeArray;
    DMRidModel *_trackModel;
    BOOL _isError;
    BOOL _isTrack;
    double startTime;
}

@property(retain, nonatomic) NSMutableArray *timeArray; // @synthesize timeArray=_timeArray;
@property(retain, nonatomic) DMRidModel *model; // @synthesize model=_model;
@property(retain, nonatomic) NSDictionary *impDict; // @synthesize impDict=_impDict;
@property(retain, nonatomic) DMVideoAdView *videoView; // @synthesize videoView=_videoView;
- (void)dealloc;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)adDidDismissed:(id)arg1;
- (void)adWillPresented:(id)arg1;
- (void)reportForButtonClick:(id)arg1;
- (void)trackEventType:(id)arg1 andModel:(id)arg2 andReportType:(int)arg3;
- (void)videoViewPlayError;
- (void)shouldCloseTheVideoView;
- (void)dmVideoViewButtonClick:(id)arg1;
- (BOOL)shouldPlayIn2GOr3G;
- (void)trackImpFinishReport:(double)arg1;
- (void)trackImpMinReport:(int)arg1;
- (void)videoShouldStartPlay;
- (id)deleteTheSameOne;
- (void)videoBackWebView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)videoBackWebViewDidFinishLoad;
- (BOOL)videoBackWebView:(id)arg1 shouldStartWithRequest:(id)arg2 andNavigationType:(int)arg3;
- (void)videoViewReportImpProgressWithTime:(double)arg1;
- (id)handleUrlToPath:(id)arg1;
- (id)parametersWithSeparator:(id)arg1 delimiter:(id)arg2 url:(id)arg3;
- (void)handleAdBasic:(id)arg1;
- (void)load;
- (void)resumePlayVideoAdView;
- (void)pasueVideoAdView;
- (id)initWithSize:(struct CGSize)arg1 dictionary:(id)arg2 delegate:(id)arg3 adManager:(id)arg4;

@end

