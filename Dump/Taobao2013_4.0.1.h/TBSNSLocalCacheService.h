//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TBSNSLocalCacheService : NSObject
{
}

+ (id)genCacheKeyWithObjId:(id)arg1 bizType:(int)arg2 other:(id)arg3;
+ (void)clearWithKey:(id)arg1;
+ (BOOL)setObject:(id)arg1 withKey:(id)arg2;
+ (id)getObjectWithKey:(id)arg1 withDataType:(int)arg2 itemClass:(Class)arg3;

@end
