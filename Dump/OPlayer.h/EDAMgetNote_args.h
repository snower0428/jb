//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface EDAMgetNote_args : NSObject <NSCoding>
{
    NSString *__authenticationToken;
    NSString *__guid;
    BOOL __withContent;
    BOOL __withResourcesData;
    BOOL __withResourcesRecognition;
    BOOL __withResourcesAlternateData;
    BOOL __authenticationToken_isset;
    BOOL __guid_isset;
    BOOL __withContent_isset;
    BOOL __withResourcesData_isset;
    BOOL __withResourcesRecognition_isset;
    BOOL __withResourcesAlternateData_isset;
}

- (id)description;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetWithResourcesAlternateData;
- (BOOL)withResourcesAlternateDataIsSet;
@property(nonatomic, getter=withResourcesAlternateData, setter=setWithResourcesAlternateData:) BOOL withResourcesAlternateData; // @dynamic withResourcesAlternateData;
- (void)unsetWithResourcesRecognition;
- (BOOL)withResourcesRecognitionIsSet;
@property(nonatomic, getter=withResourcesRecognition, setter=setWithResourcesRecognition:) BOOL withResourcesRecognition; // @dynamic withResourcesRecognition;
- (void)unsetWithResourcesData;
- (BOOL)withResourcesDataIsSet;
@property(nonatomic, getter=withResourcesData, setter=setWithResourcesData:) BOOL withResourcesData; // @dynamic withResourcesData;
- (void)unsetWithContent;
- (BOOL)withContentIsSet;
@property(nonatomic, getter=withContent, setter=setWithContent:) BOOL withContent; // @dynamic withContent;
- (void)unsetGuid;
- (BOOL)guidIsSet;
@property(retain, nonatomic, getter=guid, setter=setGuid:) NSString *guid; // @dynamic guid;
- (void)unsetAuthenticationToken;
- (BOOL)authenticationTokenIsSet;
@property(retain, nonatomic, getter=authenticationToken, setter=setAuthenticationToken:) NSString *authenticationToken; // @dynamic authenticationToken;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAuthenticationToken:(id)arg1 guid:(id)arg2 withContent:(BOOL)arg3 withResourcesData:(BOOL)arg4 withResourcesRecognition:(BOOL)arg5 withResourcesAlternateData:(BOOL)arg6;

@end

