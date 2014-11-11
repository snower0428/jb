//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMutableArray.h"

#import "NSCopying.h"
#import "NSFastEnumeration.h"
#import "NSMutableCopying.h"

@interface tdvJKArray : NSMutableArray <NSCopying, NSMutableCopying, NSFastEnumeration>
{
    id *objects;
    unsigned int count;
    unsigned int capacity;
    unsigned int mutations;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)replaceObjectAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (void)removeObjectAtIndex:(unsigned int)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned int)arg2;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (id)objectAtIndex:(unsigned int)arg1;
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;
- (unsigned int)count;
- (void)dealloc;

@end

