/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface DTURLCache : XXUnknownSuperclass {
}
+(id)synthesisRequest:(id)request;
+(BOOL)hasETagInResponse:(id)response;
+(id)diskPath;
+(id)sharedCache;
-(id)ETagForRequest:(id)request;
-(void)storeCachedResponse:(id)response forRequest:(id)request;
-(id)cachedResponseForRequest:(id)request;
@end

