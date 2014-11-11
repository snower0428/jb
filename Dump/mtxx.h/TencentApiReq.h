//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSArray, NSString;

@interface TencentApiReq : NSObject <NSCoding>
{
    int _nMessageType;
    int _nPlatform;
    int _nSdkVersion;
    int _nSeq;
    NSArray *_arrMessage;
    NSString *_sAppID;
    NSString *_sDescription;
}

+ (id)reqFromSeq:(int)arg1 type:(int)arg2;
@property(retain, nonatomic) NSString *sDescription; // @synthesize sDescription=_sDescription;
@property(retain, nonatomic) NSString *sAppID; // @synthesize sAppID=_sAppID;
@property(retain, nonatomic) NSArray *arrMessage; // @synthesize arrMessage=_arrMessage;
@property(readonly) int nSeq; // @synthesize nSeq=_nSeq;
@property(readonly) int nSdkVersion; // @synthesize nSdkVersion=_nSdkVersion;
@property(readonly) int nPlatform; // @synthesize nPlatform=_nPlatform;
@property(readonly) int nMessageType; // @synthesize nMessageType=_nMessageType;
- (void).cxx_destruct;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(int)arg1 type:(int)arg2;

@end
