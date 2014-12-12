/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSObject, NSMutableDictionary, NSString;

@interface PFLocalIdManager : XXUnknownSuperclass {
	NSString* diskPath;
	NSObject* lock;
	NSMutableDictionary* inMemoryCache;
}
+(BOOL)isLocalId:(id)anId;
+(id)defaultInstance;
-(void).cxx_destruct;
-(void)clearInMemoryCache;
-(BOOL)clear;
-(id)objectIdForLocalId:(id)localId;
-(void)setObjectId:(id)anId forLocalId:(id)localId;
-(void)releaseLocalIdOnDisk:(id)disk;
-(void)retainLocalIdOnDisk:(id)disk;
-(id)createLocalId;
-(void)removeMapEntry:(id)entry;
-(void)putMapEntry:(id)entry forLocalId:(id)localId;
-(id)getMapEntry:(id)entry;
-(id)init;
@end
