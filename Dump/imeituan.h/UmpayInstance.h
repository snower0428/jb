//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UINavigationController;

@interface UmpayInstance : NSObject
{
    UINavigationController *navigationController;
}

+ (void)clearUINavigationController;
+ (void)setPreRootViewcontroller:(id)arg1;
+ (id)sharedUINavigationController;
+ (id)sharedUmpayInstance;
@property(retain) UINavigationController *navigationController; // @synthesize navigationController;
- (void)dealloc;

@end
