//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface tdvGlobalIO : NSObject
{
}

+ (unsigned int)removeGlobalStorageWithIndex:(unsigned int)arg1;
+ (unsigned int)setString:(id)arg1 toSpecificStorageWithIndex:(unsigned int)arg2;
+ (unsigned int)setString:(id)arg1 toGlobalStorageStartWithIndex:(unsigned int)arg2;
+ (id)getStringFromGlobalStorageWithSpecificIndex:(unsigned int)arg1;
+ (id)getStringFromGlobalStorageStartWithIndex:(unsigned int)arg1;

@end
