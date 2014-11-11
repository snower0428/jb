//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AdMoGoAdNetworkAdapter.h"

#import "AdFractaDelegate.h"

@class AdFractaFullScreenAdViewController, NSDictionary, NSMutableData, NSRunLoop, NSThread, NSURLConnection;

@interface AdMoGoAdapterAdFractalFullScreenAPI : AdMoGoAdNetworkAdapter <AdFractaDelegate>
{
    int type;
    NSURLConnection *adConnection;
    NSMutableData *fractalADTempData;
    NSDictionary *fractalAD;
    struct CGSize size;
    AdFractaFullScreenAdViewController *fcAdVC;
    NSThread *subThread;
    BOOL exitNow;
    NSRunLoop *adRunLoop;
}

+ (void)load;
+ (int)networkType;
- (void)adFullScreenDidSuccessived:(id)arg1;
- (void)adFullScreenDidFailed:(id)arg1;
- (void)displayFractalAD;
- (BOOL)getFractal;
- (void)getAndDisplayAd;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)dealloc;
- (void)stopAd;
- (void)stopBeingDelegate;
- (void)getAd;
- (BOOL)isAPI;

@end

