//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface TMActionManager : NSObject
{
    NSMutableArray *_actionUrls;
}

+ (id)copyWithZone:(struct _NSZone *)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)shareInstance;
@property(retain, nonatomic) NSMutableArray *actionUrls; // @synthesize actionUrls=_actionUrls;
- (void)goBackInNavigationController:(id)arg1 withAnimated:(BOOL)arg2;
- (BOOL)gotoUrl:(id)arg1 inNavigationController:(id)arg2 withAnimated:(BOOL)arg3;
- (void)bindActionModel:(id)arg1 withConfigModel:(id)arg2;
- (void)dealloc;
- (id)autorelease;
- (oneway void)release;
- (id)copy;
- (id)retain;
- (unsigned int)retainCount;
- (id)init;

@end
