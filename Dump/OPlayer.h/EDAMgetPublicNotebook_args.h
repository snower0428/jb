//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface EDAMgetPublicNotebook_args : NSObject <NSCoding>
{
    int __userId;
    NSString *__publicUri;
    BOOL __userId_isset;
    BOOL __publicUri_isset;
}

- (id)description;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetPublicUri;
- (BOOL)publicUriIsSet;
@property(retain, nonatomic, getter=publicUri, setter=setPublicUri:) NSString *publicUri; // @dynamic publicUri;
- (void)unsetUserId;
- (BOOL)userIdIsSet;
@property(nonatomic, getter=userId, setter=setUserId:) int userId; // @dynamic userId;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserId:(int)arg1 publicUri:(id)arg2;

@end

