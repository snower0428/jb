//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NSObject (UIUtilsAdditions)
- (id)associatedValueForKey:(void *)arg1;
- (void)weaklyAssociateValue:(id)arg1 withKey:(void *)arg2;
- (void)strongAssociateValue:(id)arg1 withKey:(void *)arg2;
- (void)performSelectorIfExists:(SEL)arg1 withArguments:(void **)arg2;
- (void)performSelectorIfExists:(SEL)arg1 andReturnTo:(void *)arg2 withArguments:(void **)arg3;
- (void)performSelector:(SEL)arg1 withArguments:(void **)arg2;
- (void)performSelector:(SEL)arg1 andReturnTo:(void *)arg2 withArguments:(void **)arg3;
@end
