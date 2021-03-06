//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class EDAMNoteFilter, NSString;

@interface EDAMfindNoteCounts_args : NSObject <NSCoding>
{
    NSString *__authenticationToken;
    EDAMNoteFilter *__filter;
    BOOL __withTrash;
    BOOL __authenticationToken_isset;
    BOOL __filter_isset;
    BOOL __withTrash_isset;
}

- (id)description;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetWithTrash;
- (BOOL)withTrashIsSet;
@property(nonatomic, getter=withTrash, setter=setWithTrash:) BOOL withTrash; // @dynamic withTrash;
- (void)unsetFilter;
- (BOOL)filterIsSet;
@property(retain, nonatomic, getter=filter, setter=setFilter:) EDAMNoteFilter *filter; // @dynamic filter;
- (void)unsetAuthenticationToken;
- (BOOL)authenticationTokenIsSet;
@property(retain, nonatomic, getter=authenticationToken, setter=setAuthenticationToken:) NSString *authenticationToken; // @dynamic authenticationToken;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAuthenticationToken:(id)arg1 filter:(id)arg2 withTrash:(BOOL)arg3;

@end

