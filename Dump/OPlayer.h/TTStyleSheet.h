//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface TTStyleSheet : NSObject
{
    NSMutableDictionary *_styles;
}

+ (void)setGlobalStyleSheet:(id)arg1;
+ (id)globalStyleSheet;
- (void)freeMemory;
- (id)styleWithSelector:(id)arg1 forState:(unsigned int)arg2;
- (id)styleWithSelector:(id)arg1;
- (void)didReceiveMemoryWarning:(void *)arg1;
- (void)dealloc;
- (id)init;

@end

