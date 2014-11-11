//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock;

__attribute__((visibility("hidden")))
@interface ToDo_BusinessManager : NSObject
{
    struct list<ToDo_BaseBusiness *, std::allocator<ToDo_BaseBusiness *>> listBusiness;
    NSLock *lockList;
}

+ (void)exitInstance;
+ (id)instance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_deleteBusinessObjects;
- (void)_createBusinessObjects;
- (void)unlockObject;
- (void)lockObject;
- (id)getBussinessObject:(int)arg1;
- (void)dealloc;
- (id)init;

@end
