//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class EDAMNotFoundException, EDAMSystemException, EDAMUserException, NSArray;

@interface EDAMListLinkedNotebooks_result : NSObject <NSCoding>
{
    NSArray *__success;
    EDAMUserException *__userException;
    EDAMNotFoundException *__notFoundException;
    EDAMSystemException *__systemException;
    BOOL __success_isset;
    BOOL __userException_isset;
    BOOL __notFoundException_isset;
    BOOL __systemException_isset;
}

- (id)description;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetSystemException;
- (BOOL)systemExceptionIsSet;
@property(retain, nonatomic, getter=systemException, setter=setSystemException:) EDAMSystemException *systemException; // @dynamic systemException;
- (void)unsetNotFoundException;
- (BOOL)notFoundExceptionIsSet;
@property(retain, nonatomic, getter=notFoundException, setter=setNotFoundException:) EDAMNotFoundException *notFoundException; // @dynamic notFoundException;
- (void)unsetUserException;
- (BOOL)userExceptionIsSet;
@property(retain, nonatomic, getter=userException, setter=setUserException:) EDAMUserException *userException; // @dynamic userException;
- (void)unsetSuccess;
- (BOOL)successIsSet;
@property(retain, nonatomic, getter=success, setter=setSuccess:) NSArray *success; // @dynamic success;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSuccess:(id)arg1 userException:(id)arg2 notFoundException:(id)arg3 systemException:(id)arg4;

@end

