//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface OCReadWriteLock : NSObject
{
    struct _opaque_pthread_rwlock_t _pthread_rwlock_t;
}

@property struct _opaque_pthread_rwlock_t pthread_rwlock_t; // @synthesize pthread_rwlock_t=_pthread_rwlock_t;
- (void)unlock;
- (void)lockWrite;
- (void)lockRead;
- (id)init;
- (void)dealloc;

@end

