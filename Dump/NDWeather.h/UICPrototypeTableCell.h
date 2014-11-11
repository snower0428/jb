//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UICPrototypeTableCell : NSObject
{
    NSString *title;
    int userDefaultsKey;
}

+ (id)cellForRelative:(id)arg1 withUserDefaultsKey:(int)arg2 AcitonTarget:(id)arg3 ActionMethod:(SEL)arg4;
+ (id)cellForText:(id)arg1 withUserDefaultsKey:(int)arg2 AcitonTarget:(id)arg3 ActionMethod:(SEL)arg4;
+ (id)cellForSelect:(id)arg1 withSelectTitleUserDefaultsKey:(int)arg2 withSubTitle:(id)arg3;
+ (id)cellForSelect:(id)arg1 withSelectTitle:(id)arg2 withSubTitle:(id)arg3;
+ (id)cellForButton:(id)arg1 withUserDefaultsKey:(int)arg2 AcitonTarget:(id)arg3 ActionMethod:(SEL)arg4;
+ (id)cellForSwitch:(id)arg1 withUserDefaultsKey:(int)arg2 AcitonTarget:(id)arg3 ActionMethod:(SEL)arg4;
+ (id)cellForSwitch:(id)arg1 withSwitch:(BOOL)arg2;
+ (id)cellForTitle:(id)arg1;
@property(readonly) int userDefaultsKey; // @synthesize userDefaultsKey;
@property(readonly) NSString *title; // @synthesize title;
- (void)dealloc;
- (id)cellIdentifier;
- (id)tableCellViewWithReuseId:(id)arg1;
- (id)initWithTitle:(id)arg1;

@end

