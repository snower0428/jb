//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class EDAMSystemException, EDAMUserException;

@interface EDAMGetAccountSize_result : NSObject <NSCoding>
{
    long long __success;
    EDAMUserException *__userException;
    EDAMSystemException *__systemException;
    BOOL __success_isset;
    BOOL __userException_isset;
    BOOL __systemException_isset;
}

- (id)description;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetSystemException;
- (BOOL)systemExceptionIsSet;
@property(retain, nonatomic, getter=systemException, setter=setSystemException:) EDAMSystemException *systemException; // @dynamic systemException;
- (void)unsetUserException;
- (BOOL)userExceptionIsSet;
@property(retain, nonatomic, getter=userException, setter=setUserException:) EDAMUserException *userException; // @dynamic userException;
- (void)unsetSuccess;
- (BOOL)successIsSet;
@property(nonatomic, getter=success, setter=setSuccess:) long long success; // @dynamic success;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSuccess:(long long)arg1 userException:(id)arg2 systemException:(id)arg3;

@end

