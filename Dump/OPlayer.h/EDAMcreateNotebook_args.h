//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class EDAMNotebook, NSString;

@interface EDAMcreateNotebook_args : NSObject <NSCoding>
{
    NSString *__authenticationToken;
    EDAMNotebook *__notebook;
    BOOL __authenticationToken_isset;
    BOOL __notebook_isset;
}

- (id)description;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetNotebook;
- (BOOL)notebookIsSet;
@property(retain, nonatomic, getter=notebook, setter=setNotebook:) EDAMNotebook *notebook; // @dynamic notebook;
- (void)unsetAuthenticationToken;
- (BOOL)authenticationTokenIsSet;
@property(retain, nonatomic, getter=authenticationToken, setter=setAuthenticationToken:) NSString *authenticationToken; // @dynamic authenticationToken;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAuthenticationToken:(id)arg1 notebook:(id)arg2;

@end

