//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSOperationQueue, NSString;

@interface SAKIdentifierManager : NSObject
{
    BOOL _isRequesting;
    NSString *_UUID;
    NSString *_clientType;
    NSMutableArray *_callbackArray;
    NSOperationQueue *_connectionQueue;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSOperationQueue *connectionQueue; // @synthesize connectionQueue=_connectionQueue;
@property(retain, nonatomic) NSMutableArray *callbackArray; // @synthesize callbackArray=_callbackArray;
@property(retain, nonatomic) NSString *clientType; // @synthesize clientType=_clientType;
- (void).cxx_destruct;
- (void)UUIDRegistrationFailed:(id)arg1;
- (void)UUIDRegistrationSucceeded:(id)arg1;
- (void)requestUUID;
- (id)advertisingIdentifier;
@property(readonly, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
- (void)identifierFromSankuai:(CDUnknownBlockType)arg1;
- (void)reportUUIDChanged:(id)arg1 oldUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)getUUIDFromKeychain;
- (void)deletePublicUUIDOnlyForDebugCenter;
- (void)deleteOldPublicUUID;
- (void)deletePrivateUUID;
- (id)appIdentifierPrefix;

@end

