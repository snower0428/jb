//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NDNetHttpTransferClient, NSMutableDictionary, NSString;

@interface NdCPFileDownloader : NSObject
{
    id theDelegate;
    NSMutableDictionary *dictionary;
    NDNetHttpTransferClient *transferClient;
    NSString *downloadFileName;
    BOOL isAutoRename;
    BOOL isShowName;
}

@property(retain, nonatomic) NDNetHttpTransferClient *transferClient; // @synthesize transferClient;
@property(nonatomic) BOOL isShowName; // @synthesize isShowName;
@property(nonatomic) BOOL isAutoRename; // @synthesize isAutoRename;
@property(retain, nonatomic) NSString *downloadFileName; // @synthesize downloadFileName;
- (void)client:(id)arg1 didFailWithError:(id)arg2;
- (void)clientDidFinishLoading:(id)arg1;
- (void)client:(id)arg1 didReceiveData:(unsigned long)arg2 expectedTotalLen:(unsigned long)arg3;
- (void)startdownload;
- (void)didPresentAlertView:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)dealloc;
- (id)getReadableStringForSize:(unsigned long long)arg1;
- (void)cancelDownload;
- (int)downloadFileWithURL:(id)arg1 fileName:(id)arg2 saveToDirectory:(id)arg3 allowOverWrite:(BOOL)arg4;
- (void)getFile:(id)arg1 fileName:(id)arg2 allowOverWrite:(BOOL)arg3;
- (id)initWithDelegate:(id)arg1;

@end
