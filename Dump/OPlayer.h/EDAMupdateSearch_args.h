//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class EDAMSavedSearch, NSString;

@interface EDAMupdateSearch_args : NSObject <NSCoding>
{
    NSString *__authenticationToken;
    EDAMSavedSearch *__search;
    BOOL __authenticationToken_isset;
    BOOL __search_isset;
}

- (id)description;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetSearch;
- (BOOL)searchIsSet;
@property(retain, nonatomic, getter=search, setter=setSearch:) EDAMSavedSearch *search; // @dynamic search;
- (void)unsetAuthenticationToken;
- (BOOL)authenticationTokenIsSet;
@property(retain, nonatomic, getter=authenticationToken, setter=setAuthenticationToken:) NSString *authenticationToken; // @dynamic authenticationToken;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAuthenticationToken:(id)arg1 search:(id)arg2;

@end

