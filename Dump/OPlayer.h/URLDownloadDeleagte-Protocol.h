//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSError, NSException, NSURLResponse, URLDownload;

@protocol URLDownloadDeleagte
- (void)oplayer_download:(URLDownload *)arg1 didFailWithError:(NSError *)arg2;
- (void)oplayer_download:(URLDownload *)arg1 didCancelBecauseOf:(NSException *)arg2;
- (void)oplayer_downloadDidFinish:(URLDownload *)arg1;

@optional
- (void)oplayer_download:(URLDownload *)arg1 didReceiveResponse:(NSURLResponse *)arg2;
- (void)oplayer_download:(URLDownload *)arg1 didReceiveDataOfLength:(unsigned int)arg2;
@end
