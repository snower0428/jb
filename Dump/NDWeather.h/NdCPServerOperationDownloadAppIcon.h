//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NdCPServerOperation.h"

@class NSMutableArray, NSString;

@interface NdCPServerOperationDownloadAppIcon : NdCPServerOperation
{
    NSMutableArray *arrRequestDelegate;
    int nNetOpRet;
    NSString *appId;
    NSString *checkSum;
    NSString *iconDataAfterBase64;
    NSString *theNewCheckSum;
}

@property(retain, nonatomic) NSString *iconDataAfterBase64; // @synthesize iconDataAfterBase64;
@property(retain, nonatomic) NSString *theNewCheckSum; // @synthesize theNewCheckSum;
@property(retain, nonatomic) NSString *checkSum; // @synthesize checkSum;
@property(retain, nonatomic) NSString *appId; // @synthesize appId;
@property(retain, nonatomic) NSMutableArray *arrRequestDelegate; // @synthesize arrRequestDelegate;
@property(nonatomic) int nNetOpRet; // @synthesize nNetOpRet;
- (void)addRequestDelegate:(id)arg1;
- (void)generateResponse:(id)arg1;
- (int)operation;
- (void)dealloc;
- (id)init;

@end
