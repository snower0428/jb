//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSException.h"

#import "NSCoding.h"

@class NSString;

@interface EDAMUserException : NSException <NSCoding>
{
    int __errorCode;
    NSString *__parameter;
    BOOL __errorCode_isset;
    BOOL __parameter_isset;
}

- (id)description;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetParameter;
- (BOOL)parameterIsSet;
@property(retain, nonatomic, getter=parameter, setter=setParameter:) NSString *parameter; // @dynamic parameter;
- (void)unsetErrorCode;
- (BOOL)errorCodeIsSet;
@property(nonatomic, getter=errorCode, setter=setErrorCode:) int errorCode; // @dynamic errorCode;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithErrorCode:(int)arg1 parameter:(id)arg2;
- (id)init;

@end

