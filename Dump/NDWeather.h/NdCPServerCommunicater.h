//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NdCPServerCommunicater : NSObject
{
    int _actionNumber;
    long _sendReference;
    id _communicateDelegate;
    int _tag;
}

+ (void)clearMemory;
+ (BOOL)setAppKey:(id)arg1;
+ (id)appKey;
+ (BOOL)setAppId:(int)arg1;
+ (int)appId;
+ (BOOL)setRSAPublicKeyExponent:(id)arg1;
+ (BOOL)setRSAPublicKeyModulus:(id)arg1;
+ (id)rsaPublicKeyExponent;
+ (id)rsaPublicKeyModulus;
+ (BOOL)setDes3Key:(id)arg1;
+ (id)des3Key;
+ (BOOL)setLoginedSessionId:(id)arg1;
+ (BOOL)setSessionId:(id)arg1;
+ (id)sessionId;
@property(nonatomic) int tag; // @synthesize tag=_tag;
@property(readonly, nonatomic) long sendRef; // @synthesize sendRef=_sendReference;
@property(readonly, nonatomic) int actionNumber; // @synthesize actionNumber=_actionNumber;
@property(nonatomic) id communicateDelegate; // @synthesize communicateDelegate=_communicateDelegate;
- (void)transfer:(long)arg1 didFailWithError:(id)arg2;
- (void)transferDidFinishLoading:(long)arg1;
- (void)transferDidCancel:(long)arg1;
- (void)cancel;
- (BOOL)sendDataToURL:(id)arg1 data:(id)arg2;
- (BOOL)sendDataToURL:(id)arg1 data:(id)arg2 actionNumber:(int)arg3 encryptType:(int)arg4;
- (BOOL)sendDataToURL:(id)arg1 paramDictionary:(id)arg2 actionNumber:(int)arg3 encryptType:(int)arg4;
- (void)dealloc;
- (id)init;

@end
