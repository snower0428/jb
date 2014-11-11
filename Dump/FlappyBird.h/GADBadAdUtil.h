//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GADURLConnectionDelegate.h"

@class GADURLConnection;

__attribute__((visibility("hidden")))
@interface GADBadAdUtil : NSObject <GADURLConnectionDelegate>
{
    GADURLConnection *connection_;
}

+ (id)sharedInstance;
@property(retain, nonatomic) GADURLConnection *connection; // @synthesize connection=connection_;
- (void)loadDidFail:(id)arg1 httpStatusCode:(int)arg2;
- (void)loadDidFinish:(id)arg1 baseURL:(id)arg2;
- (void)loadDidReceiveCachedResponse:(id)arg1;
- (BOOL)loadShouldUseCachedResponse:(id)arg1;
- (void)loadDidReceiveRedirectResponse:(id)arg1;
- (id)shouldRedirectToURL:(id)arg1;
- (id)badAdURL;
- (id)urlConnection;
- (id)jsonData:(id)arg1;
- (void)reportBadAd:(id)arg1;
- (void)dealloc;

@end

