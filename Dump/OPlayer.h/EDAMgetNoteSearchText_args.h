//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface EDAMgetNoteSearchText_args : NSObject <NSCoding>
{
    NSString *__authenticationToken;
    NSString *__guid;
    BOOL __authenticationToken_isset;
    BOOL __guid_isset;
}

- (id)description;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetGuid;
- (BOOL)guidIsSet;
@property(retain, nonatomic, getter=guid, setter=setGuid:) NSString *guid; // @dynamic guid;
- (void)unsetAuthenticationToken;
- (BOOL)authenticationTokenIsSet;
@property(retain, nonatomic, getter=authenticationToken, setter=setAuthenticationToken:) NSString *authenticationToken; // @dynamic authenticationToken;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAuthenticationToken:(id)arg1 guid:(id)arg2;

@end

