//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface PHRecentsSharedMapNameCache : NSObject
{
    NSMutableDictionary *_mapNameCache;
}

+ (id)sharedCache;
@property(retain, nonatomic) NSMutableDictionary *mapNameCache; // @synthesize mapNameCache=_mapNameCache;
- (id)mapNameForRecentCall:(id)arg1;
- (void)preloadMapNameCacheWithRecentCalls:(id)arg1;
- (id)_normalizePhoneNumber:(id)arg1;
- (struct __CFPhoneNumber *)_phoneNumberForRecentCall:(id)arg1;
- (void)dealloc;
- (id)init;

@end
