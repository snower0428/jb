/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary;
@protocol DTMemoryCacheDelegate;

@interface DTMemoryCache : XXUnknownSuperclass {
@private
	id<DTMemoryCacheDelegate> _delegate;
	NSMutableDictionary* _cacheItems;
}
@property(retain, nonatomic) NSMutableDictionary* cacheItems;
@property(assign, nonatomic) __weak id<DTMemoryCacheDelegate> delegate;
+(id)cacheForOwner:(id)owner;
+(id)defaultCache;
-(void).cxx_destruct;
-(void)addDenpendency:(id)denpendency forKey:(id)key;
-(id)cacheItemForKey:(id)key;
-(BOOL)removeObjectForKey:(id)key;
-(id)objectForKey:(id)key;
-(id)addArray:(id)array forKey:(id)key dependency:(id)dependency;
-(id)addArray:(id)array forKey:(id)key;
-(BOOL)setObject:(id)object forKey:(id)key dependency:(id)dependency;
-(BOOL)setObject:(id)object forKey:(id)key;
-(BOOL)containsKey:(id)key;
-(id)init;
@end

