//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface ToDo_TransferQueue : NSObject
{
    struct list<transfer_item *, std::allocator<transfer_item *>> listCache;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)count;
- (struct transfer_item *)pop;
- (void)push:(struct transfer_item *)arg1;
- (void)dealloc;
- (id)init;

@end

