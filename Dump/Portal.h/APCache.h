/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary;

@interface APCache : XXUnknownSuperclass {
	NSMutableDictionary* _cacheInfo;
}
+(id)sharedCacheManager;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)key;
-(id)objectForKey:(id)key;
-(void)setObject:(id)object forKey:(id)key;
-(void)dealloc;
-(id)init;
@end
