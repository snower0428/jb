//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface ClickCount : NSObject
{
}

+ (BOOL)isNeedInvokeForKey:(id)arg1 intevalTime:(int)arg2;
+ (void)uploadClickCountRealTimeWithStringId:(id)arg1;
+ (void)uploadClickCountRealTimeWithId:(int)arg1;
+ (void)uploadClickCount;
+ (void)increaseCountForStringIndex:(id)arg1;
+ (void)increaseCountForIndex:(int)arg1;

@end
