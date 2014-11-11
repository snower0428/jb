/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSMutableDictionary;

@interface DTMemoryCacheManager : XXUnknownSuperclass {
@private
	NSMutableDictionary* _cacheMap;
	NSMutableArray* _lruMetas;
	int _maxCount;
}
@property(assign, nonatomic) int maxCount;
@property(retain, nonatomic) NSMutableArray* lruMetas;
@property(retain, nonatomic) NSMutableDictionary* cacheMap;
+(id)sharedManager;
-(void).cxx_destruct;
-(void)memoryCache:(id)cache didRemoveKey:(id)key;
-(void)memoryCache:(id)cache didReadKey:(id)key;
-(void)memoryCache:(id)cache didAddKey:(id)key;
-(void)didReceiveMemoryWarning:(id)warning;
-(void)removeMeta:(id)meta;
-(id)findMetaByKey:(id)key andCache:(id)cache;
-(void)touchKey:(id)key inCache:(id)cache;
-(id)cacheForOwner:(id)owner;
@end
