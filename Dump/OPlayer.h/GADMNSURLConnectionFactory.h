//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GADMConnectionFactory.h"

__attribute__((visibility("hidden")))
@interface GADMNSURLConnectionFactory : NSObject <GADMConnectionFactory>
{
}

+ (id)sharedFactory;
+ (void)setSharedFactory:(id)arg1;
- (id)connectionWithRequest:(id)arg1 delegate:(id)arg2 startImmediately:(BOOL)arg3;
- (id)connectionWithRequest:(id)arg1 delegate:(id)arg2;
- (void)dealloc;

@end

