//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SHKSharer.h"

@class UIViewController;

@interface SHKiOS5Twitter : SHKSharer
{
    UIViewController *currentTopViewController;
}

+ (id)sharerId;
+ (id)sharerTitle;
@property(retain) UIViewController *currentTopViewController; // @synthesize currentTopViewController;
- (void)presentUI;
- (void)callUI:(id)arg1;
- (void)share;
- (void)dealloc;

@end
